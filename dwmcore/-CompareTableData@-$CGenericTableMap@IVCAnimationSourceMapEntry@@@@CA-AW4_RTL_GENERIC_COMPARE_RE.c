/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x1800E0760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  __int64 result; // rax

  result = 0LL;
  if ( *FirstStruct >= *SecondStruct )
  {
    LOBYTE(result) = *FirstStruct == *SecondStruct;
    return (unsigned int)(result + 1);
  }
  return result;
}
