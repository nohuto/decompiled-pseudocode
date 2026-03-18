/*
 * XREFs of ?ivHandlePnpOtherPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDFF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMVirtQueueRimDevChangeAsyncWorkItem @ 0x1C01A2F50 (RIMVirtQueueRimDevChangeAsyncWorkItem.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpOtherPacket(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // r8d
  UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(a2 + 16) = a2 + (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
  v4 = *(_DWORD *)a2;
  v6 = *(UNICODE_STRING *)(a2 + 8);
  RIMVirtQueueRimDevChangeAsyncWorkItem(a3, &v6, v4);
  return 1LL;
}
