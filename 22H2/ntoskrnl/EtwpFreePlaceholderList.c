/*
 * XREFs of EtwpFreePlaceholderList @ 0x14031F168
 * Callers:
 *     EtwpFreeCompression @ 0x14031F0F0 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1403B3EC8 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1184);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1184) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
