/*
 * XREFs of ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x180282CC4
 * Callers:
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180282A1C (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x1800CF1D4 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CKMAdapterHandle::Initialize(CKMAdapterHandle *this, struct IDXGIAdapter *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v9[296]; // [rsp+30h] [rbp-148h] BYREF
  struct _LUID v10; // [rsp+158h] [rbp-20h]

  v3 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))a2->lpVtbl->GetDesc)(a2, v9);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x33u, 0LL);
  }
  else
  {
    v6 = CKMAdapterHandle::Initialize(this, v10);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x35u, 0LL);
  }
  return v5;
}
