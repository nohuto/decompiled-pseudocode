/*
 * XREFs of NVMeQueuesReInit @ 0x1C0019CD8
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C00220A4 (NVMeControllerReinitialize.c)
 * Callees:
 *     CompletionQueueReInit @ 0x1C0017D4C (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x1C001A044 (SubmissionQueueReInit.c)
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

  v1 = (_DWORD *)(a1 + 968);
  *(_DWORD *)(a1 + 856) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 28;
    --v3;
  }
  while ( v3 );
  SubmissionQueueReInit(a1, a1 + 312);
  result = CompletionQueueReInit(a1, a1 + 448);
  v5 = 0;
  if ( *(_WORD *)(a1 + 300) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 344);
      if ( *(_QWORD *)(v6 + 16LL * v5) )
        *(_QWORD *)(v6 + 16LL * v5) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 300);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  v7 = 0;
  if ( *(_WORD *)(a1 + 304) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 792) + 136LL * v7);
      result = (void *)*(unsigned __int16 *)(a1 + 304);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  v8 = 0;
  if ( *(_WORD *)(a1 + 306) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 800) + 344LL * v8);
      result = (void *)*(unsigned __int16 *)(a1 + 306);
      ++v8;
    }
    while ( v8 < (unsigned int)result );
  }
  v9 = 0;
  if ( *(_WORD *)(a1 + 234) )
  {
    do
    {
      v10 = v9++;
      *(_QWORD *)(*(_QWORD *)(a1 + 264) + 48 * v10 + 40) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 234);
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
