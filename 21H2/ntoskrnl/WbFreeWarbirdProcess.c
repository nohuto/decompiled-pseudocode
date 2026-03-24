/*
 * XREFs of WbFreeWarbirdProcess @ 0x140686B00
 * Callers:
 *     sub_14064F00C @ 0x14064F00C (sub_14064F00C.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405D7C18 (WbFreeWarbirdEncryptionSegment.c)
 *     sub_14064DAEC @ 0x14064DAEC (sub_14064DAEC.c)
 *     sub_14064ECC0 @ 0x14064ECC0 (sub_14064ECC0.c)
 *     sub_140686C38 @ 0x140686C38 (sub_140686C38.c)
 *     WbFreeMemoryBlock @ 0x140687F88 (WbFreeMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbFreeWarbirdProcess(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  unsigned int j; // ebp
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_14064ECC0((__int64)P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_140686C38(P + 22);
    for ( j = 0; j < P[3]; ++j )
      sub_14064DAEC((__int64)P, *(_QWORD *)(j * P[2] + *((_QWORD *)P + 3)));
    sub_140686C38(P + 2);
    v5 = (char *)(P + 16);
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (char *)v6 == v5 )
        break;
      sub_14064DAEC((__int64)P, v6);
    }
    for ( k = 0; k < P[35]; ++k )
      WbFreeWarbirdEncryptionSegment(*(_QWORD **)(k * P[34] + *((_QWORD *)P + 19)));
    sub_140686C38(P + 34);
    if ( P[47] )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_140686C38(P + 46);
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}
