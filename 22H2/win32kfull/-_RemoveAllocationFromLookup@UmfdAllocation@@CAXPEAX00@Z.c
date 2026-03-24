/*
 * XREFs of ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C01250B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C009F5D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::_RemoveAllocationFromLookup(unsigned __int64 a1, char *a2, void *a3)
{
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  NSInstrumentation::CPointerHashTable::Remove(
    (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
    a1,
    &v4);
  *(_QWORD *)(a2 - 12) = 0LL;
}
