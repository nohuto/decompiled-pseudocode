/*
 * XREFs of IoQueuesCreation @ 0x1C0017D90
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeIoSubmissionQueueCreate @ 0x1C00069E8 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C0006C38 (NVMeIoCompletionQueueCreate.c)
 *     CalculateTimeDurationIn100ns @ 0x1C00179B4 (CalculateTimeDurationIn100ns.c)
 *     IoQueuesFreeResources @ 0x1C00181C4 (IoQueuesFreeResources.c)
 */

__int64 __fastcall IoQueuesCreation(__int64 a1, char a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v10; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+C8h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  StorPortExtendedFunction(47LL, a1, &v11, &v10);
  v4 = v10;
  LOBYTE(v5) = a2;
  v7 = NVMeIoCompletionQueueCreate(a1, v5, 0);
  if ( v7 )
  {
    v8 = 23;
LABEL_5:
    *(_DWORD *)(a1 + 36) = v8;
    IoQueuesFreeResources(a1);
    return v7;
  }
  LOBYTE(v6) = a2;
  v7 = NVMeIoSubmissionQueueCreate(a1, v6, 0);
  if ( v7 )
  {
    v8 = 22;
    goto LABEL_5;
  }
  StorPortExtendedFunction(47LL, a1, &v11, &v10);
  if ( *(_BYTE *)(a1 + 24) )
  {
    CalculateTimeDurationIn100ns(v10 - v4, v11);
    StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  return 0LL;
}
