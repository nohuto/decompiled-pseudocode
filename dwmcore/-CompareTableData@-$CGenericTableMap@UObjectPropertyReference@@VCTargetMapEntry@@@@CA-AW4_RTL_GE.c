__int64 __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // r9d

  v3 = SecondStruct[2];
  if ( *(_QWORD *)FirstStruct < *(_QWORD *)SecondStruct )
    return 0LL;
  if ( *(_QWORD *)FirstStruct != *(_QWORD *)SecondStruct )
    return 1LL;
  if ( FirstStruct[2] < v3 )
    return 0LL;
  if ( FirstStruct[2] != v3 )
    return 1LL;
  return 2LL;
}
