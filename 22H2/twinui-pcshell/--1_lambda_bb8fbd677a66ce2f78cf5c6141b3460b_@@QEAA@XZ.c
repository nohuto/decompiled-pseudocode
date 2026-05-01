/*
 * XREFs of ??1_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@QEAA@XZ @ 0x1804C2F48
 * Callers:
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x1804C18FC (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C0E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_1802C0E60.c)
 */

void __fastcall _lambda_bb8fbd677a66ce2f78cf5c6141b3460b_::~_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_(
        _lambda_bb8fbd677a66ce2f78cf5c6141b3460b_ *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    *((_QWORD *)this + 1) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v1);
  }
}
