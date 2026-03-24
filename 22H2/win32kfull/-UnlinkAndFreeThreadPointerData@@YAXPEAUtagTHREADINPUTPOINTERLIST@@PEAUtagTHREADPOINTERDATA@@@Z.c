/*
 * XREFs of ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F1074
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00FD5D0 (xxxCleanupThreadPointerInputInfo.c)
 *     EditionUnlinkAndFreeThreadPointerData @ 0x1C01F1D50 (EditionUnlinkAndFreeThreadPointerData.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlinkAndFreeThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1, struct tagTHREADPOINTERDATA *a2)
{
  __int64 v4; // rdx
  struct tagTHREADPOINTERDATA **v5; // rax

  v4 = *(_QWORD *)a2;
  if ( *(struct tagTHREADPOINTERDATA **)(v4 + 8) != a2
    || (v5 = (struct tagTHREADPOINTERDATA **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct tagTHREADPOINTERDATA *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)a2 + 3), 4LL, a2);
  Win32FreePool(a2);
  --*((_DWORD *)a1 + 4);
}
