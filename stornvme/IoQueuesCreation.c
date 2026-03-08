/*
 * XREFs of IoQueuesCreation @ 0x1C000A5E8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0007370 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000ADC4 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C001EF80 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C001F6B0 (NVMeIoSubmissionQueueCreate.c)
 */

__int64 __fastcall IoQueuesCreation(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v6; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v7, &v6);
  v2 = v6;
  v3 = NVMeIoCompletionQueueCreate(a1);
  if ( v3 )
  {
    v4 = 23;
LABEL_5:
    *(_DWORD *)(a1 + 36) = v4;
    IoQueuesFreeResources(a1);
    return v3;
  }
  v3 = NVMeIoSubmissionQueueCreate(a1);
  if ( v3 )
  {
    v4 = 22;
    goto LABEL_5;
  }
  StorPortExtendedFunction(47LL, a1, &v7, &v6);
  if ( *(_BYTE *)(a1 + 24) )
  {
    CalculateTimeDurationIn100ns(v6 - v2, v7);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 0LL;
}
