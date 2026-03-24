/*
 * XREFs of IoQueuesCreation @ 0x1C000BFD8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C00010AC (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000C684 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0019790 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0019EC0 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreation(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v5; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v6; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v6, &v5);
  v2 = v5;
  if ( !(unsigned __int8)NVMeIoCompletionQueueCreate(a1) )
  {
    v3 = 23;
LABEL_5:
    *(_DWORD *)(a1 + 28) = v3;
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( !(unsigned __int8)NVMeIoSubmissionQueueCreate(a1) )
  {
    v3 = 22;
    goto LABEL_5;
  }
  StorPortExtendedFunction(47LL, a1, &v6, &v5);
  CalculateTimeDurationIn100ns(v5 - v2, v6);
  StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  return 1;
}
