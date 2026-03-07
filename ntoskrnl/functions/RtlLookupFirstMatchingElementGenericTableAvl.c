PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  void *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  v11 = 0LL;
  if ( (unsigned int)FindNodeOrParent_0((__int64)Table, (__int64)Buffer, &v11) != 1 )
    return 0LL;
  v7 = v11;
  do
  {
    v8 = v7;
    v9 = v7;
    v10 = RealPredecessor(v7);
    v7 = v10;
  }
  while ( v10 && Table->CompareRoutine(Table, Buffer, v10 + 4) == GenericEqual );
  *RestartKey = v9;
  return v8 + 4;
}
