/*
 * XREFs of sub_1800CA170 @ 0x1800CA170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 *     sub_1800C4FF4 @ 0x1800C4FF4 (sub_1800C4FF4.c)
 */

__int64 __fastcall sub_1800CA170(__int64 a1, __int64 a2, __int64 a3)
{
  void *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r10

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 0x63u, (__int64)&unk_18015DEF0, a1, 0LL);
  }
  v6 = &unk_18019D2A0;
  do
  {
    if ( (unsigned int)sub_1800C4FF4(a2, (__int64)v6) )
      break;
    ++v8;
    v6 = (void *)(v7 + 20);
  }
  while ( (unsigned __int64)(v9 + 20) < 0x28 );
  if ( v8 == 2 )
    return 2147942487LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 488) + 48LL))(
             *(_QWORD *)(a1 + 488),
             a2,
             a3);
}
