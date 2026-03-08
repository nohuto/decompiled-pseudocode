/*
 * XREFs of IoQueuesCreationAsync @ 0x1C000A774
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0007370 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000ADC4 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreationAsync(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  int v4; // r9d
  __int64 v6; // [rsp+100h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+110h] [rbp+18h] BYREF

  v1 = a1 + 4160;
  v6 = 0LL;
  v7 = 0LL;
  StorPortExtendedFunction(99LL, a1, a1 + 4160, 0LL);
  StorPortExtendedFunction(99LL, a1, a1 + 4184, 0LL);
  StorPortExtendedFunction(47LL, a1, &v7, &v6);
  v3 = v6;
  *(_DWORD *)(a1 + 924) = 0;
  if ( (unsigned int)NVMeIoCompletionQueueCreate(a1) )
  {
    v4 = 23;
LABEL_3:
    *(_DWORD *)(a1 + 36) = v4;
LABEL_4:
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, v1, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 924) != *(unsigned __int16 *)(a1 + 338) )
    {
      v4 = 27;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 920) = 0;
  if ( (unsigned int)NVMeIoSubmissionQueueCreate(a1) )
  {
    v4 = 22;
    goto LABEL_3;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, a1 + 4184, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 920) != *(unsigned __int16 *)(a1 + 336) )
    {
      v4 = 26;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    goto LABEL_4;
  }
  StorPortExtendedFunction(47LL, a1, &v7, &v6);
  if ( *(_BYTE *)(a1 + 24) )
  {
    CalculateTimeDurationIn100ns(v6 - v3, v7);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 1;
}
