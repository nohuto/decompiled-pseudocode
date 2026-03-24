/*
 * XREFs of NVMeQueuesReInit @ 0x1C0010990
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     CompletionQueueReInit @ 0x1C000B310 (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x1C0010FF0 (SubmissionQueueReInit.c)
 */

void *__fastcall NVMeQueuesReInit(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  void *result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edx
  __int64 v10; // rax

  v1 = (_DWORD *)(a1 + 952);
  *(_DWORD *)(a1 + 840) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 28;
    --v3;
  }
  while ( v3 );
  SubmissionQueueReInit(a1, a1 + 296);
  result = CompletionQueueReInit(a1, a1 + 432);
  v5 = 0;
  if ( *(_WORD *)(a1 + 284) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 328);
      if ( *(_QWORD *)(v6 + 16LL * v5) )
        *(_QWORD *)(v6 + 16LL * v5) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 284);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  v7 = 0;
  if ( *(_WORD *)(a1 + 288) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 776) + 136LL * v7);
      result = (void *)*(unsigned __int16 *)(a1 + 288);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  v8 = 0;
  if ( *(_WORD *)(a1 + 290) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 784) + 344LL * v8);
      result = (void *)*(unsigned __int16 *)(a1 + 290);
      ++v8;
    }
    while ( v8 < (unsigned int)result );
  }
  v9 = 0;
  if ( *(_WORD *)(a1 + 218) )
  {
    do
    {
      v10 = v9++;
      *(_QWORD *)(*(_QWORD *)(a1 + 248) + 48 * v10 + 40) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 218);
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
