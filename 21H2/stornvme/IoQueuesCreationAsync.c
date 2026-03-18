/*
 * XREFs of IoQueuesCreationAsync @ 0x1C0006850
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeIoSubmissionQueueCreate @ 0x1C00069E8 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0006C38 (NVMeIoCompletionQueueCreate.c)
 *     CalculateTimeDurationIn100ns @ 0x1C00179B4 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C00181C4 (IoQueuesFreeResources.c)
 */

char __fastcall IoQueuesCreationAsync(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  __int64 v5; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v6; // [rsp+D0h] [rbp+18h] BYREF

  v1 = a1 + 3960;
  v5 = 0LL;
  v6 = 0LL;
  StorPortExtendedFunction(99LL, a1, a1 + 3960, 0LL);
  StorPortExtendedFunction(99LL, a1, a1 + 3984, 0LL);
  StorPortExtendedFunction(47LL, a1, &v6, &v5);
  v3 = v5;
  *(_DWORD *)(a1 + 844) = 0;
  if ( (unsigned int)NVMeIoCompletionQueueCreate(a1) )
  {
    *(_DWORD *)(a1 + 36) = 23;
    goto LABEL_11;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, v1, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 844) != *(unsigned __int16 *)(a1 + 306) )
    {
      *(_DWORD *)(a1 + 36) = 27;
      goto LABEL_11;
    }
  }
  else if ( *(_DWORD *)(a1 + 36) )
  {
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 840) = 0;
  if ( (unsigned int)NVMeIoSubmissionQueueCreate(a1) )
  {
    *(_DWORD *)(a1 + 36) = 22;
    goto LABEL_11;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, a1 + 3984, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 840) == *(unsigned __int16 *)(a1 + 304) )
      goto LABEL_7;
    *(_DWORD *)(a1 + 36) = 26;
LABEL_11:
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( *(_DWORD *)(a1 + 36) )
    goto LABEL_11;
LABEL_7:
  StorPortExtendedFunction(47LL, a1, &v6, &v5);
  if ( *(_BYTE *)(a1 + 24) )
  {
    CalculateTimeDurationIn100ns(v5 - v3, v6);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 1;
}
