/*
 * XREFs of ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C00D97F0
 * Callers:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C0125978 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00D9840 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::_RemoveAllocationFromLookup(void *a1, char *a2, void *a3)
{
  __int64 v5; // rax
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = SGDGetSessionState(a1);
  NSInstrumentation::CPointerHashTable::Remove(**(NSInstrumentation::CPointerHashTable ***)(v5 + 40), a1, &v6);
  *(_QWORD *)(a2 - 12) = 0LL;
}
