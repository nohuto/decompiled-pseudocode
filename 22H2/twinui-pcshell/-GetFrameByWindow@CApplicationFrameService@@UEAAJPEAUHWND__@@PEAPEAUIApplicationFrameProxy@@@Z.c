/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180076440
 * Callers:
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180076340 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18000D3C0 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180070448 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterface.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x1800764BC (CApplicationFrameService--_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___.c)
 */

__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  int FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
  FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
                                                            (char *)this - 40,
                                                            a2,
                                                            &v8);
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f >= 0 )
    FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>>(
                                                              v8,
                                                              &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                                                              a3);
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
  return (unsigned int)FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f;
}
