/*
 * XREFs of ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802ABE44
 * Callers:
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x1802B4408 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 *     ?ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x1803FA7A8 (-ConvertDesktopFilter@VirtualDesktopHelpers@@YAJPEAUIObjectArray@@AEAV-$CCoSimpleArray@PEAUHWND_.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x180474AC8 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18048C4A0 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 *     ?_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z @ 0x1804F4B50 (-_GetMinWidthSafe@CAppLayoutItem@@AEAAHPEBULAYOUT_ENVIRONMENT_DETAILS@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, a2);
}
