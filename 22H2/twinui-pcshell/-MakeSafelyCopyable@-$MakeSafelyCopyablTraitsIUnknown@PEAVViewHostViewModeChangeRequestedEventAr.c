/*
 * XREFs of ?MakeSafelyCopyable@?$MakeSafelyCopyablTraitsIUnknown@PEAVViewHostViewModeChangeRequestedEventArgs@@@details@wil@@SA?AU?$MakeSafelyCopyableResult@V?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@PEAVViewHostViewModeChangeRequestedEventArgs@@@23@PEAVViewHostViewModeChangeRequestedEventArgs@@@Z @ 0x1802BF70C
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostViewModeChangeRequestedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostViewModeChangeRequestedEventArgs@@@Z @ 0x1802B9134 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostVi.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewHostViewModeChangeRequestedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostViewModeChangeRequestedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVViewHostViewModeChangeRequestedEventArgs@@@Z @ 0x1802C7BE8 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewHostViewModeChangeRequestedEven.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BF0B8 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall wil::details::MakeSafelyCopyablTraitsIUnknown<ViewHostViewModeChangeRequestedEventArgs *>::MakeSafelyCopyable(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  v2 = a2;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 56);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 56), v4 + 1, v4);
        if ( v5 != v4 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v4 + 16),
      (volatile int *)a2);
  }
LABEL_8:
  *a1 = 0LL;
  if ( a1 != &v7 )
  {
    v7 = 0LL;
    *a1 = v2;
  }
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v7);
  return a1;
}
