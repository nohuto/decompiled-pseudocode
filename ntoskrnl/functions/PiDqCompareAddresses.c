__int64 __fastcall PiDqCompareAddresses(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  if ( *SecondStruct > *FirstStruct )
    return 0LL;
  else
    return 2 - (unsigned int)(*SecondStruct < *FirstStruct);
}
