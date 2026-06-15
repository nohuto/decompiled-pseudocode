/*
 * XREFs of sub_180046B80 @ 0x180046B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

_UNKNOWN **__fastcall sub_180046B80(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    result = (_UNKNOWN **)sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_18016DE00);
  }
  v3 = a1[30];
  if ( v3 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
  v4 = a1[31];
  if ( v4 )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
  v5 = a1[32];
  if ( v5 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 104LL))(v5);
  return result;
}
