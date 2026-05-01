/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x180049220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // [rsp+50h] [rbp+20h] BYREF
  __int64 v6; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  v2 = (char *)this - 64;
  v6 = 0LL;
  LODWORD(v5) = 2;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 8) + 32LL))(
    (char *)this - 64,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v6);
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( (*((_BYTE *)this + 472) & 2) != 0 )
    {
      v6 = 0LL;
      v7 = 0LL;
      LODWORD(v5) = 9;
      (*(void (__fastcall **)(char *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 32LL))(
        v2,
        &GUID_00000000_0000_0000_c000_000000000046,
        &v7);
      v6 = 0LL;
      v5 = 0LL;
      v4 = (**v7)(v7, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, &v5);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
               v5,
               &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
               &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
               &v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      if ( v4 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
  }
}
