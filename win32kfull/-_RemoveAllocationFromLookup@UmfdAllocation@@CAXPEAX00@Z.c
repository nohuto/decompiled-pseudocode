void __fastcall UmfdAllocation::_RemoveAllocationFromLookup(void *a1, char *a2, void *a3)
{
  __int64 v5; // rax
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = SGDGetSessionState(a1);
  NSInstrumentation::CPointerHashTable::Remove(**(NSInstrumentation::CPointerHashTable ***)(v5 + 40), a1, &v6);
  *(_QWORD *)(a2 - 12) = 0LL;
}
