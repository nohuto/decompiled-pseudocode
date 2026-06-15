/*
 * XREFs of sub_180037D70 @ 0x180037D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800CD434 @ 0x1800CD434 (sub_1800CD434.c)
 */

__int64 __fastcall sub_180037D70(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 14LL, &unk_18015DF00, 0LL);
  }
  v2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 232LL))(v4, a1);
    v2 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( v2 )
  {
    LOBYTE(v3) = *(_BYTE *)(a1 + 84);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 328LL))(v2, v3);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CD434(*((_QWORD *)off_18019C348 + 2), 15, v5, a1, v2, 0LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 16LL, &unk_18015DF00);
  }
  return 0LL;
}
