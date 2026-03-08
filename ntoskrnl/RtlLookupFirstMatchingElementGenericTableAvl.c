/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403CF4E0
 * Callers:
 *     <none>
 * Callees:
 *     RealPredecessor @ 0x1402F4B58 (RealPredecessor.c)
 *     FindNodeOrParent_0 @ 0x1402F6D40 (FindNodeOrParent_0.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

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
