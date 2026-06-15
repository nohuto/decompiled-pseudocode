/*
 * XREFs of sub_1800E9100 @ 0x1800E9100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800E9100(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  LPCWCH *v5; // rbx
  const WCHAR *v6; // rax
  char v7; // di

  if ( **(_DWORD **)(a1 + 8) != (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 176LL))(*a2) )
    return 0;
  v4 = *a2;
  v5 = *(LPCWCH **)(a1 + 16);
  v6 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 168LL))(v4);
  v7 = 1;
  if ( CompareStringOrdinal(v6, -1, *v5, -1, 1) != 2 )
    return 0;
  return v7;
}
