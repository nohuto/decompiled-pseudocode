/*
 * XREFs of VidSchiAllocateDmaPacket @ 0x1C00ADBDC
 * Callers:
 *     VidSchiSwitchNodeFromContext @ 0x1C00AD9A0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C00ADB04 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0106954 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003540 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00ADD4C (VidSchWaitForCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateDmaPacket(__int64 a1)
{
  __int64 i; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v6; // eax
  _DWORD v7[40]; // [rsp+20h] [rbp-B8h] BYREF

  for ( i = *(_QWORD *)(a1 + 24); ; VidSchWaitForCompletionEvent(i, v7, 20LL) )
  {
    *(_QWORD *)(i + 1456) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(i + 1416));
    v3 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1736), (_QWORD **)(a1 + 11280), 0LL);
    if ( v3 )
      break;
    memset(v7, 0, sizeof(v7));
    v6 = *(unsigned __int16 *)(a1 + 4);
    v7[8] |= 0x41u;
    v7[12] = v6;
    v7[5] = 1;
  }
  v4 = v3 - 2;
  memset(v3 - 2, 0, 0xE0uLL);
  return v4;
}
