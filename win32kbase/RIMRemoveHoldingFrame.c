/*
 * XREFs of RIMRemoveHoldingFrame @ 0x1C01CDBCC
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00345C8 (RIMIDEAdoptOrphanedRimDevs.c)
 *     rimFreeSpecificDevFinal @ 0x1C00BC028 (rimFreeSpecificDevFinal.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimFindHoldingFrame @ 0x1C00F07AA (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01CF270 (rimReclaimHoldingFrame.c)
 */

char *__fastcall RIMRemoveHoldingFrame(__int64 a1, __int64 a2)
{
  char *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // rdx
  char **v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx

  while ( 1 )
  {
    result = (char *)rimFindHoldingFrame(a1, a2);
    v7 = result;
    if ( !result )
      break;
    rimReclaimHoldingFrame(v6, v5, result);
    v8 = *(_QWORD *)v7;
    v9 = (char **)*((_QWORD *)v7 + 1);
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
      __fastfail(3u);
    v10 = gpLeakTrackingAllocator;
    *v9 = (char *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    NSInstrumentation::CLeakTrackingAllocator::Free(v10, v7);
  }
  return result;
}
