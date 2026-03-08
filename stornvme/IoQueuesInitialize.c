/*
 * XREFs of IoQueuesInitialize @ 0x1C000B04C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     GetMaxDedicatedSqPerCqCount @ 0x1C0009CF4 (GetMaxDedicatedSqPerCqCount.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C1C0 (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C000C768 (NVMeCompletionQueueInit.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 *     NVMeSubmissionQueueAssignmentPolicyInit @ 0x1C0010804 (NVMeSubmissionQueueAssignmentPolicyInit.c)
 *     NVMeSubmissionQueueInit @ 0x1C00108FC (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  void ***v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // r9
  void ***v9; // rsi
  void ***v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r14d
  void **v13; // rcx
  unsigned int v14; // esi
  void *v15; // rcx
  void **v16; // rdx
  unsigned int j; // edi
  void **v18; // r8
  void **v19; // rdx
  unsigned int k; // edi
  void **v21; // r8
  unsigned __int64 v23; // rcx
  unsigned int i; // r14d
  void **v25; // rcx
  unsigned int v26; // esi
  void *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // [rsp+20h] [rbp-49h]
  char *v30; // [rsp+40h] [rbp-29h]
  char *v31; // [rsp+48h] [rbp-21h]
  void *v32; // [rsp+50h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h]
  __int64 v34; // [rsp+60h] [rbp-9h] BYREF
  void **v35; // [rsp+68h] [rbp-1h]
  unsigned int v36; // [rsp+D0h] [rbp+67h]
  char *v37; // [rsp+E8h] [rbp+7Fh]

  v31 = 0LL;
  v30 = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  if ( !*(_WORD *)(a1 + 338) )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 336);
  if ( !(_WORD)v2 )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 334);
  v4 = (void ***)(a1 + 880);
  v5 = 16 * v3;
  v6 = *(unsigned __int16 *)(a1 + 334) << 6;
  v36 = 16 * v3;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeSubmissionQueueAssignmentPolicyInit();
    StorPortExtendedFunction(0LL, a1, 392 * (unsigned int)*(unsigned __int16 *)(v7 + 338), 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 336), 1701672526LL);
    if ( *v4 && *(_QWORD *)(a1 + 872) )
    {
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 334) * (unsigned int)*(unsigned __int16 *)(a1 + 336),
        1701672526LL);
      v9 = (void ***)(a1 + 872);
    }
    else
    {
      v9 = (void ***)(a1 + 872);
    }
    goto LABEL_14;
  }
  v10 = (void ***)(a1 + 872);
  v11 = 16 * v2 * v3;
  v31 = (char *)**v4 + v5;
  v30 = &v31[v11];
  v37 = &v31[v11 + v11];
  NVMeZeroMemory(v31, 16 * *(unsigned __int16 *)(a1 + 334) * *(unsigned __int16 *)(a1 + 336));
  NVMeZeroMemory(v30, 16 * *(unsigned __int16 *)(a1 + 334) * *(unsigned __int16 *)(a1 + 336));
  NVMeZeroMemory(v37, 8 * *(unsigned __int16 *)(a1 + 338));
  v12 = 0;
  if ( !*(_WORD *)(a1 + 336) )
  {
LABEL_41:
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 338); ++i )
    {
      if ( i >= *(unsigned __int16 *)(a1 + 336) )
        break;
      v25 = *v4;
      v32 = 0LL;
      v26 = (_DWORD)v25 + 392 * i;
      v34 = 0LL;
      v35 = &v25[49 * i];
      if ( *(_BYTE *)(a1 + 20) )
      {
        v27 = *v25;
        v32 = v27;
      }
      else
      {
        v9 = v10;
        if ( (unsigned int)NVMeAllocateDmaBuffer(a1, v36, &v32, &v34, v29) )
          goto LABEL_13;
        v27 = v32;
        if ( !v32 )
          goto LABEL_13;
        v26 = (unsigned int)v35;
      }
      NVMeZeroMemory(v27, v36);
      v28 = v33 ? v33 : 0LL;
      NVMeCompletionQueueInit(a1, v26, i + 1, (_DWORD)v32, v34, (__int64)&v37[8 * i], v28);
    }
    return 1;
  }
  while ( 1 )
  {
    v13 = *v10;
    v32 = 0LL;
    v14 = (_DWORD)v13 + 136 * v12;
    v34 = 0LL;
    if ( !*(_BYTE *)(a1 + 20) )
      break;
    v15 = *v13;
    v32 = v15;
LABEL_40:
    NVMeZeroMemory(v15, v6);
    v23 = 16 * v12 * (unsigned __int64)*(unsigned __int16 *)(a1 + 334);
    NVMeSubmissionQueueInit(a1, v14, ++v12, (_DWORD)v32, v34, (__int64)&v31[v23], (__int64)&v30[v23]);
    if ( v12 >= *(unsigned __int16 *)(a1 + 336) )
      goto LABEL_41;
  }
  if ( !(unsigned int)NVMeAllocateDmaBuffer(a1, v6, &v32, &v34, v29) )
  {
    v15 = v32;
    if ( v32 )
      goto LABEL_40;
  }
  v9 = v10;
LABEL_13:
  v5 = v36;
LABEL_14:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v16 = *v9;
    if ( *v9 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 336); ++j )
      {
        v18 = &v16[17 * j];
        if ( *v18 )
        {
          NVMeFreeDmaBuffer(a1, v6, v18, v18[1]);
          v16 = *v9;
        }
      }
    }
    v19 = *v4;
    if ( *v4 )
    {
      for ( k = 0; k < *(unsigned __int16 *)(a1 + 338); ++k )
      {
        v21 = &v19[49 * k];
        if ( *v21 )
        {
          NVMeFreeDmaBuffer(a1, v5, v21, v21[1]);
          v19 = *v4;
        }
      }
    }
    if ( v37 )
      StorPortExtendedFunction(1LL, a1, v37, v8);
    if ( v33 )
      StorPortExtendedFunction(1LL, a1, v33, v8);
    if ( v30 )
      StorPortExtendedFunction(1LL, a1, v30, v8);
    if ( v31 )
      StorPortExtendedFunction(1LL, a1, v31, v8);
    if ( *v4 )
      StorPortExtendedFunction(1LL, a1, *v4, v8);
    if ( *v9 )
      StorPortExtendedFunction(1LL, a1, *v9, v8);
  }
  *(_DWORD *)(a1 + 336) = 0;
  return 0;
}
