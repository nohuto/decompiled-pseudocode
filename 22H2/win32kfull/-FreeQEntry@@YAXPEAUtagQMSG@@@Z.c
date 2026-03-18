/*
 * XREFs of ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x1C00126B0
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C005CB08 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C009CCF0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C009CD50 (DestroyThreadsMessages.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0118038 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C0153266 (FreePointerMessageParams.c)
 */

void __fastcall FreeQEntry(struct tagQMSG *a1)
{
  __int64 v2; // rax

  if ( (*((_DWORD *)a1 + 25) & 8) != 0
    && !*((_DWORD *)a1 + 24)
    && (unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6)) )
  {
    FreePointerMessageParams(a1);
  }
  v2 = SGDGetUserSessionState(a1);
  Win32FreeToPagedLookasideList(*(_QWORD *)(v2 + 16872), a1);
}
