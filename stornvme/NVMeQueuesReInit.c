/*
 * XREFs of NVMeQueuesReInit @ 0x1C0010588
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000E0F4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C001C9A0 (NVMeControllerReinitialize.c)
 * Callees:
 *     CompletionQueueReInit @ 0x1C00094E4 (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x1C0010D50 (SubmissionQueueReInit.c)
 */

void *__fastcall NVMeQueuesReInit(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 v3; // rcx
  void *result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edx
  __int64 v10; // rax

  v1 = (_BYTE *)(a1 + 1072);
  *(_BYTE *)(a1 + 944) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 128;
    --v3;
  }
  while ( v3 );
  SubmissionQueueReInit(a1, a1 + 344);
  result = CompletionQueueReInit(a1, a1 + 480);
  v5 = 0;
  if ( *(_WORD *)(a1 + 332) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 376);
      if ( *(_QWORD *)(v6 + 16LL * v5) )
        *(_QWORD *)(v6 + 16LL * v5) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 332);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  v7 = 0;
  if ( *(_WORD *)(a1 + 336) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 872) + 136LL * v7);
      result = (void *)*(unsigned __int16 *)(a1 + 336);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  v8 = 0;
  if ( *(_WORD *)(a1 + 338) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 880) + 392LL * v8);
      result = (void *)*(unsigned __int16 *)(a1 + 338);
      ++v8;
    }
    while ( v8 < (unsigned int)result );
  }
  v9 = 0;
  if ( *(_WORD *)(a1 + 242) )
  {
    do
    {
      v10 = v9++;
      *(_QWORD *)(*(_QWORD *)(a1 + 272) + 72 * v10 + 56) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 242);
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
