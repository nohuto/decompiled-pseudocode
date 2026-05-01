/*
 * XREFs of ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E53B0
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameService@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1801E38D0 (--$MakeAndInitialize@VCApplicationFrameService@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E4904 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180484744 (--1-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180484A58 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeCoverWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180485E70 (-s_WndProcBase@-$CWRLImpWndProc@VTabletModeCoverWindow@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180082140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGI.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationFrameEventHandler,Microsoft::WRL::FtmBase>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
