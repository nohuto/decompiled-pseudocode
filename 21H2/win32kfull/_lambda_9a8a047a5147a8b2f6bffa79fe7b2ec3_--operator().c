/*
 * XREFs of _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C02711D8
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0026524 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreSetPointer @ 0x1C0073040 (GreSetPointer.c)
 */

void __fastcall lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  GreAcquireSemaphore(a2);
  if ( gCachedSetPointerState == a3 )
    GreSetPointer(0LL, 0, 0, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
}
