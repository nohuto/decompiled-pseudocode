/*
 * XREFs of EtwpFreePlaceholderList @ 0x140321594
 * Callers:
 *     EtwpFreeCompression @ 0x1403213C4 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1405AD4A8 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1168);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1168) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
