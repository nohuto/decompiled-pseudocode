/*
 * XREFs of ?front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ @ 0x1800F3988
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800E89A4 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800F1F30 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800F21E8 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800F292C (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800F2A30 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<winrt::guid>::front(__int64 **a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( *a1 )
    v1 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8 * ((unsigned __int64)a1[3] & (*(_QWORD *)(v1 + 16) - 1LL)));
}
