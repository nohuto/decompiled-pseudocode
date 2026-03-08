/*
 * XREFs of HalMatchAcpiCreatorRevision @ 0x1404FEDF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalAcpiEmCheckOperator @ 0x1404FEBE8 (HalAcpiEmCheckOperator.c)
 */

__int64 __fastcall HalMatchAcpiCreatorRevision(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v7; // ebx
  int *v8; // rax
  __int64 Table; // rax

  v7 = 1;
  if ( a4 == 2 && a6 == 1 )
  {
    if ( *(_QWORD *)a3 )
    {
      v8 = *(int **)(a3 + 8);
      if ( v8 )
      {
        if ( a5 )
        {
          Table = HalpAcpiGetTable(0LL, *v8, 0, 0);
          if ( Table )
            return (unsigned int)HalAcpiEmCheckOperator(*(unsigned __int8 **)a3, *(_DWORD *)(Table + 32), *a5) != 0
                 ? 2
                 : 0;
        }
      }
    }
  }
  return v7;
}
