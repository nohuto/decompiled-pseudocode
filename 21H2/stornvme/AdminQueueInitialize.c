/*
 * XREFs of AdminQueueInitialize @ 0x1C0007E00
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeCompletionQueueInit @ 0x1C0008554 (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C0008648 (NVMeSubmissionQueueInit.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  char result; // al
  char *v6; // [rsp+60h] [rbp+20h]
  char *v7; // [rsp+68h] [rbp+28h]

  v1 = a1 + 312;
  v3 = a1 + 448;
  v4 = *(unsigned __int16 *)(a1 + 300);
  if ( *(_BYTE *)(a1 + 20) )
  {
    v7 = (char *)(16 * v4 + *(_QWORD *)v3);
    v6 = &v7[16 * v4];
    NVMeZeroMemory(v7, 16 * (unsigned __int16)v4);
    NVMeZeroMemory(v6, 16 * *(unsigned __int16 *)(a1 + 300));
    NVMeSubmissionQueueInit(a1, v1, 0, *(_QWORD *)v1, 0LL, (__int64)v7, (__int64)v6);
    NVMeCompletionQueueInit(a1, v3, 0, *(_QWORD *)v3, 0LL, 0LL);
    NVMeZeroMemory(*(void **)v1, *(unsigned __int16 *)(a1 + 300) << 6);
    NVMeZeroMemory(*(void **)v3, 16 * *(unsigned __int16 *)(a1 + 300));
    *(_WORD *)(v1 + 50) = 0;
    result = 1;
    *(_DWORD *)(v3 + 180) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, (unsigned int)(16 * v4), 1701672526LL);
    return 0;
  }
  return result;
}
