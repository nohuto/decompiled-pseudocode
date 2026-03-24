/*
 * XREFs of MiRebuildLargePagesThread @ 0x1403C0090
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     MiRebuildLargeZeroPage @ 0x1402FA800 (MiRebuildLargeZeroPage.c)
 */

NTSTATUS __fastcall MiRebuildLargePagesThread(__int64 a1)
{
  NTSTATUS result; // eax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 12);
  Object[0] = (PVOID)(a1 + 104);
  Object[1] = (PVOID)(a1 + 5144);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      break;
    if ( result == 1 )
      MiRebuildLargeZeroPage(a1);
  }
  return result;
}
