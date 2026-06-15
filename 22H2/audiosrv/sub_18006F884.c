/*
 * XREFs of sub_18006F884 @ 0x18006F884
 * Callers:
 *     sub_1800ED858 @ 0x1800ED858 (sub_1800ED858.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006F884(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *i; // r14
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 40LL))(
           qword_18019EE48,
           *i,
           *a4);
    if ( v8 < 0
      && off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 36LL, &unk_18015E5F0, (unsigned int)v8);
    }
  }
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  sub_1800461B8(a4);
  return a1;
}
