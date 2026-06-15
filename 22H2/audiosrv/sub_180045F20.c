/*
 * XREFs of sub_180045F20 @ 0x180045F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180045F20(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 71LL, &unk_18015DEF0, a1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 616);
  if ( *(_DWORD *)(a1 + 408) == 2 )
  {
    sub_180023350(&v2);
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019E640 + 72LL))(
      qword_18019E640,
      *(_QWORD *)(a1 + 608));
    if ( a1 != -616 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  }
}
