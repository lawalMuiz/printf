{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"README.md","path":"README.md","contentType":"file"},{"name":"_printf.c","path":"_printf.c","contentType":"file"},{"name":"converter.c","path":"converter.c","contentType":"file"},{"name":"get_flag.c","path":"get_flag.c","contentType":"file"},{"name":"get_print.c","path":"get_print.c","contentType":"file"},{"name":"main.h","path":"main.h","contentType":"file"},{"name":"man_3_printf","path":"man_3_printf","contentType":"file"},{"name":"print_address.c","path":"print_address.c","contentType":"file"},{"name":"print_alpha.c","path":"print_alpha.c","contentType":"file"},{"name":"print_bases.c","path":"print_bases.c","contentType":"file"},{"name":"print_custom.c","path":"print_custom.c","contentType":"file"},{"name":"print_nums.c","path":"print_nums.c","contentType":"file"},{"name":"write_funcs.c","path":"write_funcs.c","contentType":"file"}],"totalCount":13}},"fileTreeProcessingTime":2.5836650000000003,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":482267204,"defaultBranch":"main","name":"printf","ownerLogin":"frankouam","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2022-04-16T13:53:54.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/50970075?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1650117234.7333949","canEdit":false,"refType":"branch","currentOid":"8c1795143cfec15346592a43366588482df8c6f6"},"path":"write_funcs.c","currentUser":null,"blob":{"rawLines":["#include \"main.h\"","#include <unistd.h>","","/**"," * _putchar - writes the character c to stdout"," * @c: The character to print"," * Return: On success 1."," * On error, -1 is returned, and errno is set appropriately."," * Description: _putchar uses a local buffer of 1024 to call write"," * as little as possible"," */","int _putchar(char c)","{","\tstatic char buf[1024];","\tstatic int i;","","\tif (c == -1 || i >= 1024)","\t{","\t\twrite(1, &buf, i);","\t\ti = 0;","\t}","\tif (c != -1)","\t{","\t\tbuf[i] = c;","\t\ti++;","\t}","\treturn (1);","}","","/**"," * _puts - prints a string to stdout"," * @str: pointer to the string to print"," * Return: number of chars written"," */","int _puts(char *str)","{","\tregister int i;","","\tfor (i = 0; str[i] != '\\0'; i++)","\t\t_putchar(str[i]);","\treturn (i);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":19,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":46,"cssClass":"pl-c"}],[{"start":0,"end":29,"cssClass":"pl-c"}],[{"start":0,"end":24,"cssClass":"pl-c"}],[{"start":0,"end":60,"cssClass":"pl-c"}],[{"start":0,"end":66,"cssClass":"pl-c"}],[{"start":0,"end":24,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":17,"cssClass":"pl-smi"},{"start":18,"end":19,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":12,"cssClass":"pl-smi"},{"start":13,"end":16,"cssClass":"pl-s1"},{"start":17,"end":21,"cssClass":"pl-c1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-smi"},{"start":12,"end":13,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":7,"end":9,"cssClass":"pl-c1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":13,"end":15,"cssClass":"pl-c1"},{"start":16,"end":17,"cssClass":"pl-s1"},{"start":21,"end":25,"cssClass":"pl-c1"}],[],[{"start":2,"end":7,"cssClass":"pl-en"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":12,"end":15,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-s1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":5,"cssClass":"pl-c1"},{"start":6,"end":7,"cssClass":"pl-c1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":7,"end":9,"cssClass":"pl-c1"},{"start":10,"end":12,"cssClass":"pl-c1"}],[],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":11,"end":12,"cssClass":"pl-s1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":3,"end":5,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":10,"cssClass":"pl-c1"}],[],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":36,"cssClass":"pl-c"}],[{"start":0,"end":39,"cssClass":"pl-c"}],[{"start":0,"end":34,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":9,"cssClass":"pl-en"},{"start":10,"end":14,"cssClass":"pl-smi"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":16,"end":19,"cssClass":"pl-s1"}],[],[{"start":10,"end":13,"cssClass":"pl-smi"},{"start":14,"end":15,"cssClass":"pl-s1"}],[],[{"start":1,"end":4,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":13,"end":16,"cssClass":"pl-s1"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":20,"end":22,"cssClass":"pl-c1"},{"start":23,"end":27,"cssClass":"pl-c1"},{"start":29,"end":30,"cssClass":"pl-s1"},{"start":30,"end":32,"cssClass":"pl-c1"}],[{"start":2,"end":10,"cssClass":"pl-en"},{"start":11,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-s1"}],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":10,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/frankouam/printf/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/frankouam/printf/security/dependabot","repoSecurityAndAnalysisPath":"/frankouam/printf/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"write_funcs.c","displayUrl":"https://github.com/frankouam/printf/blob/main/write_funcs.c?raw=true","headerInfo":{"blobSize":"715 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"803819f","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Ffrankouam%2Fprintf%2Fblob%2Fmain%2Fwrite_funcs.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"42","truncatedSloc":"38"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/frankouam/printf/discussions/new","newIssuePath":"/frankouam/printf/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/frankouam/printf/blob/main/write_funcs.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/frankouam/printf/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/frankouam/printf/raw/main/write_funcs.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"frankouam","repoName":"printf","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"_putchar","kind":"function","identStart":306,"identEnd":314,"extentStart":306,"extentEnd":322,"fullyQualifiedName":"_putchar","identUtf16":{"start":{"lineNumber":11,"utf16Col":4},"end":{"lineNumber":11,"utf16Col":12}},"extentUtf16":{"start":{"lineNumber":11,"utf16Col":4},"end":{"lineNumber":11,"utf16Col":20}}},{"name":"_puts","kind":"function","identStart":609,"identEnd":614,"extentStart":609,"extentEnd":625,"fullyQualifiedName":"_puts","identUtf16":{"start":{"lineNumber":34,"utf16Col":4},"end":{"lineNumber":34,"utf16Col":9}},"extentUtf16":{"start":{"lineNumber":34,"utf16Col":4},"end":{"lineNumber":34,"utf16Col":20}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/frankouam/printf/branches":{"post":"_o_09WKfil0_8dvvQ2tPtIfauww5X_6vWRNf65bPXN_K3wyWENXCGmF0poBV8E9YLKmeJ3GdbkzdaqUBmw1-Fw"},"/repos/preferences":{"post":"xAxeQvMXBUFqS1A8HD9F7ByyLmr9jT79LKCL1iN0JeJMA7RQrWi8OM3um-jZDjYkbX4U3P7qcvn-mTMxg49Mtg"}}},"title":"printf/write_funcs.c at main · frankouam/printf"}