/*
 * XREFs of sub_1800C2BC0 @ 0x1800C2BC0
 * Callers:
 *     sub_1800C2E30 @ 0x1800C2E30 (sub_1800C2E30.c)
 * Callees:
 *     sub_18005289C @ 0x18005289C (sub_18005289C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800C2904 @ 0x1800C2904 (sub_1800C2904.c)
 *     sub_1800C3D30 @ 0x1800C3D30 (sub_1800C3D30.c)
 */

void __fastcall sub_1800C2BC0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  *(_QWORD *)a1 = off_180149A40;
  *(_QWORD *)(a1 + 8) = off_180149928;
  v2 = *(_QWORD *)(a1 + 248);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)(a1 + 248) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 256);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 264);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  v5 = *(void **)(a1 + 232);
  if ( v5 )
    CoTaskMemFree(v5);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  while ( *(_QWORD *)(a1 + 176) )
    sub_1800C3D30(a1 + 168, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  sub_1800C28E0((__int64 *)(a1 + 200));
  sub_1800C2904((_QWORD *)(a1 + 168));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  while ( *(_QWORD *)(a1 + 72) )
    sub_18005289C((__int64 *)(a1 + 64), 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  sub_1800C28E0((__int64 *)(a1 + 96));
  sub_1800C28E0((__int64 *)(a1 + 64));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
}
