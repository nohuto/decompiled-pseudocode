/*
 * XREFs of PnpCollectOpenHandles @ 0x14096114C
 * Callers:
 *     PipRecordOpenHandleVeto @ 0x14096ECA4 (PipRecordOpenHandleVeto.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14096ED2C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14055EB08 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopDebugPrint @ 0x14055EC3C (IopDebugPrint.c)
 */

__int64 __fastcall PnpCollectOpenHandles(PVOID **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)(a3 + 36) )
    IopDebugPrint(0x14u, "Beginning handle dump:\n");
  *(_DWORD *)(a3 + 32) = 0;
  result = a3 + 16;
  *(_QWORD *)(a3 + 24) = a3 + 16;
  *(_QWORD *)(a3 + 16) = a3 + 16;
  if ( (*(_BYTE *)(a3 + 36) || *(_BYTE *)(a3 + 37)) && (_DWORD)v4 )
  {
    do
    {
      *(_QWORD *)a3 = *a1;
      result = PnpHandleEnumerateHandlesAgainstPdoStack(*a1++, a2, a3);
      --v4;
    }
    while ( v4 );
  }
  if ( *(_BYTE *)(a3 + 36) )
    return IopDebugPrint(0x14u, "Dump complete - %d total handles found.\n", *(_DWORD *)(a3 + 32));
  return result;
}
