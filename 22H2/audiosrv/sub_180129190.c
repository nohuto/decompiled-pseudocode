/*
 * XREFs of sub_180129190 @ 0x180129190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180129190(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    sub_180033A70((void *)a1);
  return a1;
}
