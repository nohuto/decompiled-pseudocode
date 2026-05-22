/*
 * XREFs of ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801A1BC8
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x18017FF00 (--$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@.c)
 * Callees:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180032734 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x180148E1C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180148EE4 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::RuntimeClassInitialize(HotKeyProcessor *this)
{
  _QWORD *v1; // rsi
  int v3; // ebx
  ULONG_PTR v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  _DWORD v8[4]; // [rsp+40h] [rbp-238h] BYREF
  wchar_t v9[264]; // [rsp+50h] [rbp-228h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+0h]

  v8[0] = 0;
  v1 = (_QWORD *)((char *)this + 128);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 16);
  v3 = CoreUIFactoryCreate(v1);
  if ( v3 < 0 )
  {
    v4 = 73LL;
LABEL_11:
    if ( v3 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v4);
    FailFastWithHR(v3, retaddr, v4);
    return (unsigned int)v3;
  }
  v3 = SharedMessagePortRefPtr::Initialize((HotKeyProcessor *)((char *)this + 144));
  if ( v3 < 0 )
  {
    v4 = 74LL;
    goto LABEL_11;
  }
  memset_0(v9, 0, 0x208uLL);
  GetDesktopUniqueName(L"System\\RemoteHotKeyProcessor", v9);
  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _DWORD *))(*(_QWORD *)*v1 + 24LL))(
         *v1,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         v8);
  if ( v3 < 0 )
  {
    v4 = 83LL;
    goto LABEL_11;
  }
  v5 = *v1;
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, HotKeyProcessor *, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v5 + 32LL))(
         v5,
         this,
         0LL,
         v8[0],
         v9,
         *((_QWORD *)this + 19),
         (char *)this + 136);
  if ( v3 < 0 )
  {
    v4 = 91LL;
    goto LABEL_11;
  }
  return (unsigned int)v3;
}
