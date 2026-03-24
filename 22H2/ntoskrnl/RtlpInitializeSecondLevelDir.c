/*
 * XREFs of RtlpInitializeSecondLevelDir @ 0x1403763C0
 * Callers:
 *     RtlpCreateHashTable @ 0x140376250 (RtlpCreateHashTable.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpInitializeSecondLevelDir(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      a1[1] = a1;
      *a1 = a1;
      a1 += 2;
      --v2;
    }
    while ( v2 );
  }
}
