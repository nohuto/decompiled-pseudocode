/*
 * XREFs of sub_1800F9C30 @ 0x1800F9C30
 * Callers:
 *     sub_1800FEB70 @ 0x1800FEB70 (sub_1800FEB70.c)
 * Callees:
 *     sub_18006224C @ 0x18006224C (sub_18006224C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FED10 @ 0x1800FED10 (sub_1800FED10.c)
 *     sub_1800FF6F8 @ 0x1800FF6F8 (sub_1800FF6F8.c)
 *     sub_1800FFDC0 @ 0x1800FFDC0 (sub_1800FFDC0.c)
 */

void __fastcall sub_1800F9C30(__int64 a1)
{
  HKEY v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)a1 = &off_180148CB8;
  sub_1800FF6F8();
  *(_DWORD *)(a1 + 56) = 4;
  v2 = *(HKEY *)(a1 + 368);
  if ( v2 )
    RegCloseKey(v2);
  v3 = *(_QWORD *)(a1 + 360);
  if ( v3 )
    sub_1800FFDC0(v3);
  v4 = *(void **)(a1 + 344);
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = *(void **)(a1 + 336);
  if ( v5 )
    CoTaskMemFree(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 256));
  sub_1800FED10(a1 + 200);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 160));
  sub_18006224C(a1 + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
