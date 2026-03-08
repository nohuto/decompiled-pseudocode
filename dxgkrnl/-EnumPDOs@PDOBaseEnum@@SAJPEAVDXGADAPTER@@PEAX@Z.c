/*
 * XREFs of ?EnumPDOs@PDOBaseEnum@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02E15A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PDOBaseEnum::EnumPDOs(struct DXGADAPTER *a1, unsigned int *a2)
{
  unsigned int v2; // eax

  if ( *((_BYTE *)a1 + 2757) )
  {
    v2 = a2[1];
    if ( v2 < *a2 )
    {
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL * v2) = *((_QWORD *)a1 + 29);
      ++a2[1];
    }
  }
  return 0LL;
}
