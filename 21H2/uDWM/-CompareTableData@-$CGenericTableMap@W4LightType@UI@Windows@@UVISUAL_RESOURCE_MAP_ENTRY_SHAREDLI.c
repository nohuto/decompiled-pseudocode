/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@W4LightType@UI@Windows@@UVISUAL_RESOURCE_MAP_ENTRY_SHAREDLIGHT@CGlobalLightSet@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180052FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<enum Windows::UI::LightType,CGlobalLightSet::VISUAL_RESOURCE_MAP_ENTRY_SHAREDLIGHT>::CompareTableData(
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
