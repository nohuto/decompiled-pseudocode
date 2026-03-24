/*
 * XREFs of IoQueuesCreationAsync @ 0x1C000C15C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C00010AC (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C000C684 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0019790 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0019EC0 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreationAsync(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  __int64 v5; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+D0h] [rbp+18h] BYREF

  v1 = a1 + 3944;
  v5 = 0LL;
  v6 = 0LL;
  StorPortExtendedFunction(99LL, a1, a1 + 3944, 0LL);
  StorPortExtendedFunction(99LL, a1, a1 + 3968, 0LL);
  StorPortExtendedFunction(47LL, a1, &v6, &v5);
  v3 = v5;
  *(_DWORD *)(a1 + 828) = 0;
  if ( !(unsigned __int8)NVMeIoCompletionQueueCreate(a1) )
  {
    *(_DWORD *)(a1 + 28) = 23;
LABEL_3:
    IoQueuesFreeResources(a1);
    return 0;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, v1, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 828) != *(unsigned __int16 *)(a1 + 290) )
    {
      *(_DWORD *)(a1 + 28) = 27;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 28) )
  {
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 824) = 0;
  if ( !(unsigned __int8)NVMeIoSubmissionQueueCreate(a1) )
  {
    *(_DWORD *)(a1 + 28) = 22;
    goto LABEL_3;
  }
  if ( (unsigned int)StorPortExtendedFunction(100LL, a1, a1 + 3968, 0LL) )
  {
    if ( *(_DWORD *)(a1 + 824) != *(unsigned __int16 *)(a1 + 288) )
    {
      *(_DWORD *)(a1 + 28) = 26;
      goto LABEL_3;
    }
  }
  else if ( *(_DWORD *)(a1 + 28) )
  {
    goto LABEL_3;
  }
  StorPortExtendedFunction(47LL, a1, &v6, &v5);
  CalculateTimeDurationIn100ns(v5 - v3, v6);
  StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  return 1;
}
