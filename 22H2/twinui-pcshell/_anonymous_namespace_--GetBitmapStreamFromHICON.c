/*
 * XREFs of _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1803EB45C
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1803EBDDC (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIWICBitmapSource@@@?$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D33C4 (--$query@UIWICBitmapSource@@@-$com_ptr_t@UIWICBitmap@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x18028C954 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall anonymous_namespace_::GetBitmapStreamFromHICON(__int64 *a1, __int64 a2)
{
  HRESULT v4; // eax
  __int64 v5; // rax
  int v6; // eax
  struct IWICBitmapSource **v7; // rax
  int StreamOfWICBitmapSourceWithOptions; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v15; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+28h] BYREF

  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      27LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v17 = 0LL;
  v5 = *(_QWORD *)ppv;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(v5 + 176))(ppv, a2, &v17);
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v7 = (struct IWICBitmapSource **)wil::com_ptr_t<IWICBitmap,wil::err_exception_policy>::query<IWICBitmapSource>(
                                       &v17,
                                       (__int64)v14);
    v15 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           *v7,
                                           (__int64)&GUID_ContainerFormatPng,
                                           &v15,
                                           0,
                                           &v13);
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        34LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v14);
    v12 = 0LL;
    v9 = CreateRandomAccessStreamOverStream(v13, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v12);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        37LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = v12;
    v12 = 0LL;
    *a1 = v10;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
    *a1 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  return a1;
}
