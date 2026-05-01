/*
 * XREFs of ??$?4V_lambda_cbb8aaa49d81df274072e54fa35a7719_@@X@?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_cbb8aaa49d81df274072e54fa35a7719_@@@Z @ 0x1802B8BE0
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAUITitleBarChangedEventArgs@3456@@Z @ 0x1802B8F64 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::operator=<_lambda_cbb8aaa49d81df274072e54fa35a7719_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi

  v4 = a1[14];
  a1[14] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  a1[1] = &wistd::__function::__func<_lambda_cbb8aaa49d81df274072e54fa35a7719_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v5 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v5 )
  {
    a1[3] = *v5;
    *v5 = 0LL;
  }
  a1[14] = a1 + 1;
  return a1;
}
