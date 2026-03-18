/*
 * XREFs of IoQueuesInitialize @ 0x1C0008168
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C00053FC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00055C4 (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C0008554 (NVMeCompletionQueueInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C0008648 (NVMeSubmissionQueueInit.c)
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
  void **v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int64 v16; // rdx
  char *v17; // rcx
  void *v18; // rcx
  unsigned int i; // edi
  __int64 *v20; // r8
  unsigned int j; // edi
  __int64 *v22; // r8
  __int64 v23; // r8
  char *v24; // [rsp+40h] [rbp-28h]
  int v25; // [rsp+48h] [rbp-20h]
  unsigned int v26; // [rsp+B0h] [rbp+48h]
  unsigned int v27; // [rsp+B0h] [rbp+48h]
  char *v28; // [rsp+C0h] [rbp+58h]
  char *v29; // [rsp+C8h] [rbp+60h]

  v1 = *(unsigned __int16 *)(a1 + 306);
  v2 = 0;
  v24 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  if ( !(_WORD)v1 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 304);
  if ( !(_WORD)v4 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 302);
  v6 = (void ***)(a1 + 800);
  v7 = *(unsigned __int16 *)(a1 + 302) << 6;
  v8 = 16 * v5;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    StorPortExtendedFunction(0LL, a1, (unsigned int)(344 * v1), 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 304), 1701672526LL);
    if ( *v6 && *(_QWORD *)(a1 + 792) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 302) * (unsigned int)*(unsigned __int16 *)(a1 + 304),
        1701672526LL);
LABEL_22:
    if ( !*(_BYTE *)(a1 + 20) )
    {
      if ( *(_QWORD *)(a1 + 792) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 304); ++i )
        {
          v20 = (__int64 *)(*(_QWORD *)(a1 + 792) + 136LL * i);
          if ( *v20 )
            NVMeFreeDmaBuffer(a1, v7, v20, v20[1]);
        }
      }
      if ( *v6 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 306); ++j )
        {
          v22 = (__int64 *)&(*v6)[43 * j];
          if ( *v22 )
            NVMeFreeDmaBuffer(a1, v8, v22, v22[1]);
        }
      }
      if ( v28 )
        StorPortExtendedFunction(1LL, a1, v28, v9);
      if ( v29 )
        StorPortExtendedFunction(1LL, a1, v29, v9);
      if ( v24 )
        StorPortExtendedFunction(1LL, a1, v24, v9);
      if ( *v6 )
        StorPortExtendedFunction(1LL, a1, *v6, v9);
      v23 = *(_QWORD *)(a1 + 792);
      if ( v23 )
        StorPortExtendedFunction(1LL, a1, v23, v9);
    }
    *(_DWORD *)(a1 + 304) = 0;
    return 0;
  }
  v16 = 16 * v4 * v5;
  v17 = (char *)**v6 + v8;
  v24 = v17;
  v29 = &v17[v16];
  v28 = &v17[v16 + v16];
  NVMeZeroMemory(v17, 16 * (unsigned __int16)v4 * (unsigned __int16)v5);
  NVMeZeroMemory(v29, 16 * *(unsigned __int16 *)(a1 + 302) * *(unsigned __int16 *)(a1 + 304));
  NVMeZeroMemory(v28, 8 * *(unsigned __int16 *)(a1 + 306));
  v26 = 0;
  if ( *(_WORD *)(a1 + 304) )
  {
    while ( 1 )
    {
      v10 = *(void ***)(a1 + 792);
      v11 = (_DWORD)v10 + 136 * v2;
      if ( !*(_BYTE *)(a1 + 20) )
        break;
      v18 = *v10;
      v25 = (int)v18;
      NVMeZeroMemory(v18, v7);
      v12 = v2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 302);
      NVMeSubmissionQueueInit(a1, v11, v26 + 1, v25, 0LL, (__int64)&v24[16 * v12], (__int64)&v29[16 * v12]);
      v2 = v26 + 1;
      v26 = v2;
      if ( v2 >= *(unsigned __int16 *)(a1 + 304) )
        goto LABEL_11;
    }
    NVMeAllocateDmaBuffer(a1, v7);
    goto LABEL_22;
  }
LABEL_11:
  v13 = 0;
  if ( *(_WORD *)(a1 + 306) )
  {
    while ( v13 < *(unsigned __int16 *)(a1 + 304) )
    {
      v14 = (unsigned int)*v6 + 344 * v13;
      if ( !*(_BYTE *)(a1 + 20) )
      {
        NVMeAllocateDmaBuffer(a1, v8);
        goto LABEL_22;
      }
      v27 = (unsigned int)**v6;
      NVMeZeroMemory(**v6, v8);
      NVMeCompletionQueueInit(a1, v14, v13 + 1, v27, 0LL, (__int64)&v28[8 * v13]);
      if ( ++v13 >= *(unsigned __int16 *)(a1 + 306) )
        return 1;
    }
  }
  return 1;
}
