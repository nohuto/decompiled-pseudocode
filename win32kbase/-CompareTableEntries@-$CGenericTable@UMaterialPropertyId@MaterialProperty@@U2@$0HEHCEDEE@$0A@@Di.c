__int64 __fastcall DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::CompareTableEntries(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  unsigned __int64 v3; // rax

  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  if ( *FirstStruct != *SecondStruct )
    return 1LL;
  v3 = SecondStruct[1];
  if ( FirstStruct[1] < v3 )
    return 0LL;
  if ( FirstStruct[1] == v3 )
    return 2LL;
  else
    return 1LL;
}
