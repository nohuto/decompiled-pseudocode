/*
 * XREFs of SendRemotingMetaData @ 0x18022B584
 * Callers:
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x18022B388 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x18022B4B4 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1801B0A08 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0?$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z @ 0x1801B0A50 (--0-$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z.c)
 */

__int64 __fastcall SendRemotingMetaData(__int64 a1)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v12,
    (__int64)PrimaryMonitorTarget);
  if ( v12 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
    wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v11, v4);
    if ( v11 )
    {
      v10 = 0LL;
      v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v11 + 8) + 4LL) + v11 + 8);
      v6 = (**v5)(v5, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v10);
      v3 = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, a1);
        v3 = v6;
        if ( v6 >= 0 )
        {
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
          v3 = 0;
          goto LABEL_12;
        }
        v7 = 71LL;
      }
      else
      {
        v7 = 69LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
    }
    else
    {
      v3 = -2003304307;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)0x8898008DLL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
  }
  else
  {
    v3 = -2003304442;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)0x88980006LL);
  }
LABEL_12:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v12);
  return v3;
}
