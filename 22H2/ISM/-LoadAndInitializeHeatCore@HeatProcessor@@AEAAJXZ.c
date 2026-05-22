/*
 * XREFs of ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x180189824
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180189754 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HeatProcessor::LoadAndInitializeHeatCore(HeatProcessor *this)
{
  HMODULE LibraryW; // rax
  const char *v3; // r9
  HMODULE v4; // rsi
  FARPROC ProcAddress; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LibraryW = LoadLibraryW(L"HeatCore.dll");
  v4 = LibraryW;
  if ( !LibraryW )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x126,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
             v3);
  ProcAddress = GetProcAddress(LibraryW, "InitializeHeatFramework");
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 11);
  v6 = ((__int64 (__fastcall *)(_QWORD, char *))ProcAddress)(*((_QWORD *)this + 12), (char *)this + 88);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *((_QWORD *)this + 10) = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
