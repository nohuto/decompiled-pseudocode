/*
 * XREFs of sub_18012E4A0 @ 0x18012E4A0
 * Callers:
 *     sub_1801200E4 @ 0x1801200E4 (sub_1801200E4.c)
 *     sub_1801200F8 @ 0x1801200F8 (sub_1801200F8.c)
 *     sub_18012013C @ 0x18012013C (sub_18012013C.c)
 *     sub_180120148 @ 0x180120148 (sub_180120148.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18012E4A0(__int64 a1)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *(char **)(a1 + 104);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *(_BYTE *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 80) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  }
}
