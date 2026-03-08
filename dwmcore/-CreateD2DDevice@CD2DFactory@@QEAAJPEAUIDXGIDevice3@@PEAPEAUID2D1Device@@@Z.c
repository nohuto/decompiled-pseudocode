/*
 * XREFs of ?CreateD2DDevice@CD2DFactory@@QEAAJPEAUIDXGIDevice3@@PEAPEAUID2D1Device@@@Z @ 0x1800D0A2C
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z @ 0x1800D07C0 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDevice3@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::CreateD2DDevice(CD2DFactory *this, struct IDXGIDevice3 *a2, struct ID2D1Device **a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  CD2DFactory *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = **(&g_DeviceManager + 1);
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IDXGIDevice3 *, CD2DFactory **))(v4 + 120))(
         *(&g_DeviceManager + 1),
         4LL,
         a2,
         &v11);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xBBu, 0LL);
  }
  else
  {
    v8 = (**(__int64 (__fastcall ***)(CD2DFactory *, GUID *, struct ID2D1Device **))v11)(
           v11,
           &GUID_47dd575d_ac05_4cdd_8049_9b02cd16f44c,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xBDu, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
  return v7;
}
