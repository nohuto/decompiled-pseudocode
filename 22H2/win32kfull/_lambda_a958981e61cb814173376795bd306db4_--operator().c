/*
 * XREFs of _lambda_a958981e61cb814173376795bd306db4_::operator() @ 0x1C026B9F8
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C002D2BC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreSetPointer @ 0x1C00FAA98 (GreSetPointer.c)
 */

void __fastcall lambda_a958981e61cb814173376795bd306db4_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  GreAcquireSemaphore(a2);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8624LL) == a3 )
    GreSetPointer(0LL, 0, 0, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
