/*
 * XREFs of Endpoint_OnCancelSetDequeuePointer @ 0x1C0010A74
 * Callers:
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C0011250 (ESM_UpdatingTransferRingDequeuePointers.c)
 * Callees:
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C000CEDC (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dddi @ 0x1C001081C (WPP_RECORDER_SF_dddi.c)
 *     Endpoint_InitializeTransferRing @ 0x1C0013AB4 (Endpoint_InitializeTransferRing.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     Endpoint_IsTransferRingEmpty @ 0x1C003A75C (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C003C41C (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 */

char __fastcall Endpoint_OnCancelSetDequeuePointer(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // r9d
  __int64 v10; // r10

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( (unsigned __int8)Endpoint_IsTransferRingEmpty() && (*(_QWORD *)(v10 + 336) & 0x200000LL) == 0 )
      return Endpoint_StreamsOnCancelSetDequeuePointerComplete(a1, a2);
    v5 = 104LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 56LL;
  }
  else
  {
    v5 = a1 + 160;
  }
  Endpoint_InitializeTransferRing(a1, a2);
  memset((void *)v5, 0, 0x60uLL);
  v6 = *(_DWORD *)(v5 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v5 + 40) = Endpoint_OnCancelSetDequeuePointerCompletion;
  *(_QWORD *)(v5 + 48) = a1;
  *(_DWORD *)(v5 + 36) = v6 | 0x4000;
  *(_QWORD *)(v5 + 24) = Endpoint_GetDequeuePointer(a1, a2);
  *(_DWORD *)(v5 + 36) = v8 ^ (v8 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  *(_BYTE *)(v5 + 39) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  if ( *(_BYTE *)(a1 + 37) )
    *(_WORD *)(v5 + 34) = a2;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 84) = 0;
  *(_QWORD *)(v5 + 88) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddi(*(_QWORD *)(a1 + 80), v7, *(_WORD *)(v5 + 38) & 0x1F, v8);
  return Command_SendCommand(v4, v5);
}
