/*
 * XREFs of IoQueuesInitialize @ 0x1C000C8F4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C000D36C (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C0010C9C (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r14d
  __int64 v4; // r9
  __int64 v5; // r8
  void ***v6; // rsi
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // r9
  __int64 v10; // rdx
  void **v11; // rcx
  unsigned int v12; // edi
  void *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // r14d
  unsigned int i; // edi
  __int64 *v18; // r8
  unsigned int j; // edi
  __int64 *v20; // r8
  __int64 v21; // r8
  char *v23; // [rsp+40h] [rbp-28h]
  int v24; // [rsp+48h] [rbp-20h]
  unsigned int v25; // [rsp+B0h] [rbp+48h]
  unsigned int v26; // [rsp+B0h] [rbp+48h]
  char *v27; // [rsp+C0h] [rbp+58h]
  char *v28; // [rsp+C8h] [rbp+60h]

  v1 = *(unsigned __int16 *)(a1 + 290);
  v2 = 0;
  v23 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( !(_WORD)v1 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 288);
  if ( !(_WORD)v4 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 286);
  v6 = (void ***)(a1 + 784);
  v7 = *(unsigned __int16 *)(a1 + 286) << 6;
  v8 = 16 * v5;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, (unsigned int)(344 * v1), 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 288), 1701672526LL);
    if ( *v6 && *(_QWORD *)(a1 + 776) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 286) * (unsigned int)*(unsigned __int16 *)(a1 + 288),
        1701672526LL);
LABEL_15:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 776) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 288); ++i )
        {
          v18 = (__int64 *)(*(_QWORD *)(a1 + 776) + 136LL * i);
          if ( *v18 )
            NVMeFreeDmaBuffer(a1, v7, v18, v18[1]);
        }
      }
      if ( *v6 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 290); ++j )
        {
          v20 = (__int64 *)&(*v6)[43 * j];
          if ( *v20 )
            NVMeFreeDmaBuffer(a1, v8, v20, v20[1]);
        }
      }
      if ( v27 )
        StorPortExtendedFunction(1LL, a1, v27, v9);
      if ( v28 )
        StorPortExtendedFunction(1LL, a1, v28, v9);
      if ( v23 )
        StorPortExtendedFunction(1LL, a1, v23, v9);
      if ( *v6 )
        StorPortExtendedFunction(1LL, a1, *v6, v9);
      v21 = *(_QWORD *)(a1 + 776);
      if ( v21 )
        StorPortExtendedFunction(1LL, a1, v21, v9);
    }
    *(_DWORD *)(a1 + 288) = 0;
    return 0;
  }
  v10 = 16 * v4 * v5;
  v23 = (char *)**v6 + v8;
  v28 = &v23[v10];
  v27 = &v23[v10 + v10];
  NVMeZeroMemory(v23, 16 * (unsigned __int16)v4 * (unsigned __int16)v5);
  NVMeZeroMemory(v28, 16 * *(unsigned __int16 *)(a1 + 286) * *(unsigned __int16 *)(a1 + 288));
  NVMeZeroMemory(v27, 8 * *(unsigned __int16 *)(a1 + 290));
  v25 = 0;
  if ( *(_WORD *)(a1 + 288) )
  {
    while ( 1 )
    {
      v11 = *(void ***)(a1 + 776);
      v12 = (_DWORD)v11 + 136 * v2;
      if ( !*(_BYTE *)(a1 + 16) )
        break;
      v13 = *v11;
      v24 = (int)v13;
      NVMeZeroMemory(v13, v7);
      v14 = v2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 286);
      NVMeSubmissionQueueInit(a1, v12, v25 + 1, v24, 0LL, (__int64)&v23[16 * v14], (__int64)&v28[16 * v14]);
      v2 = v25 + 1;
      v25 = v2;
      if ( v2 >= *(unsigned __int16 *)(a1 + 288) )
        goto LABEL_11;
    }
    NVMeAllocateDmaBuffer(a1, v7);
    goto LABEL_15;
  }
LABEL_11:
  v15 = 0;
  if ( *(_WORD *)(a1 + 290) )
  {
    while ( v15 < *(unsigned __int16 *)(a1 + 288) )
    {
      v16 = (unsigned int)*v6 + 344 * v15;
      if ( !*(_BYTE *)(a1 + 16) )
      {
        NVMeAllocateDmaBuffer(a1, v8);
        goto LABEL_15;
      }
      v26 = (unsigned int)**v6;
      NVMeZeroMemory(**v6, v8);
      NVMeCompletionQueueInit(a1, v16, v15 + 1, v26, 0LL, (__int64)&v27[8 * v15]);
      if ( ++v15 >= *(unsigned __int16 *)(a1 + 290) )
        return 1;
    }
  }
  return 1;
}
