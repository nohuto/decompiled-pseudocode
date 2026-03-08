/*
 * XREFs of EtwpFreePlaceholderList @ 0x14028E33C
 * Callers:
 *     EtwpFreeCompression @ 0x14028E2C4 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1403AF1D8 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
