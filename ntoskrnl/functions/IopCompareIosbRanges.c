__int64 __fastcall IopCompareIosbRanges(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  if ( *SecondStruct <= *FirstStruct )
    return 2 - (unsigned int)(*SecondStruct < *FirstStruct);
  else
    return 0LL;
}
