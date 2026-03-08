/*
 * XREFs of IoSqToIoCqMapping @ 0x1C000B78C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     IsIntelChatham @ 0x1C0007B94 (IsIntelChatham.c)
 *     NVMeLogTelemetry @ 0x1C0008A04 (NVMeLogTelemetry.c)
 *     NVMeCleanUpSqCqMapping @ 0x1C000C4EC (NVMeCleanUpSqCqMapping.c)
 *     NVMeGetCompletionQueueForAssignment @ 0x1C000EF80 (NVMeGetCompletionQueueForAssignment.c)
 *     NVMeLogHeterogeneousQueueMappingFallback @ 0x1C000F954 (NVMeLogHeterogeneousQueueMappingFallback.c)
 */

char __fastcall IoSqToIoCqMapping(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // rax
  unsigned __int16 *v4; // r14
  unsigned int v5; // ebx
  __int64 *v6; // r12
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  __int16 v14; // ax
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  __int64 v19; // r10
  __int64 v20; // rcx
  char v21; // dl
  unsigned int v22; // r13d
  unsigned int i; // r12d
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int j; // r12d
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  const wchar_t *v32; // rdx
  const wchar_t *v33; // rdx
  unsigned int v34; // ebx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  unsigned int v39; // ecx
  unsigned __int16 v40; // r9
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // edx
  __int64 v45; // rcx
  const wchar_t *v47; // [rsp+28h] [rbp-A1h]
  int v48; // [rsp+30h] [rbp-99h]
  int v49; // [rsp+38h] [rbp-91h]
  int v50; // [rsp+40h] [rbp-89h]
  int v51; // [rsp+D0h] [rbp+7h] BYREF
  int v52; // [rsp+D4h] [rbp+Bh]
  unsigned __int16 *v53; // [rsp+D8h] [rbp+Fh]
  unsigned __int16 v54; // [rsp+130h] [rbp+67h] BYREF
  int v55; // [rsp+138h] [rbp+6Fh] BYREF
  int v56; // [rsp+140h] [rbp+77h] BYREF
  int v57; // [rsp+148h] [rbp+7Fh] BYREF

  v1 = 0;
  v56 = 0;
  v54 = 1;
  v55 = 2;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 872) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 880) + 168LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 880) + 176LL) = 0;
    LOBYTE(v3) = IsIntelChatham(a1);
    if ( (_BYTE)v3 )
    {
      v3 = *(_QWORD *)(a1 + 880);
      *(_DWORD *)(v3 + 176) = 1;
    }
    return v3;
  }
  ((void (*)(void))NVMeCleanUpSqCqMapping)();
  v4 = (unsigned __int16 *)(a1 + 280);
  v5 = 0;
  v6 = (__int64 *)(a1 + 288);
  v53 = (unsigned __int16 *)(a1 + 280);
  if ( *(_WORD *)(a1 + 338) )
  {
    do
    {
      v7 = *v4;
      v8 = *v6;
      v9 = v5;
      v10 = *(_QWORD *)(a1 + 880) + 392LL * v5++;
      if ( (_WORD)v7 != 1 )
        v9 = v5 % v7;
      *(_DWORD *)(v10 + 176) = *(_DWORD *)(v8 + 24 * v9);
      *(_QWORD *)(v8 + 24 * v9 + 16) = v10;
      if ( *(_BYTE *)(v10 + 248) && (*(_DWORD *)(a1 + 4044) & 0x10) != 0 )
      {
        v11 = *(__int64 **)(v8 + 24 * v9 + 8);
        v12 = 0;
        v57 = 0;
        do
        {
          v13 = *v11;
          if ( _bittest64(&v13, v12) )
            break;
          ++v12;
        }
        while ( v12 < 0x40u );
        v14 = *((_WORD *)v11 + 4);
        BYTE2(v57) = v12;
        LOWORD(v57) = v14;
        StorPortNotification(4107LL, a1, v10 + 264);
      }
      if ( *(_BYTE *)(a1 + 24) )
      {
        v50 = 0;
        v49 = 4;
        v48 = 64;
        v47 = L"Io SQ to CQ Mapping";
        StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
      }
    }
    while ( v5 < *(unsigned __int16 *)(a1 + 338) );
  }
  else
  {
    v53 = (unsigned __int16 *)(a1 + 280);
  }
  if ( !g_HeteroSystem || *(_WORD *)(a1 + 336) < 2u )
    goto LABEL_66;
  v52 = -1;
  v15 = 0;
  v51 = 0;
  v16 = 0;
  if ( !*(_WORD *)(a1 + 242) )
    goto LABEL_63;
  v17 = 0;
  do
  {
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 272) + 72LL * v1), &v51) )
    {
      if ( v51 )
      {
        v18 = 0;
        if ( *(_WORD *)(a1 + 280) )
        {
          v19 = *v6;
          while ( *(_DWORD *)(v19 + 24LL * v18) != v51 )
          {
            if ( ++v18 >= *(unsigned __int16 *)(a1 + 280) )
              goto LABEL_33;
          }
          v20 = *(_QWORD *)(v19 + 24LL * v18 + 16);
          v21 = *(_BYTE *)(*(_QWORD *)(a1 + 272) + 72LL * v1 + 4);
          if ( v21 )
          {
            if ( v21 == 1 )
            {
              *(_DWORD *)(v20 + 244) = *(_DWORD *)(v20 + 244) & 0xFFFFFFF0 | 1;
              ++v16;
            }
          }
          else
          {
            *(_DWORD *)(v20 + 244) &= 0xFFFFFFF0;
            ++v15;
          }
        }
      }
    }
LABEL_33:
    ++v1;
  }
  while ( v1 < *(unsigned __int16 *)(a1 + 242) );
  LODWORD(v3) = *(unsigned __int16 *)(a1 + 338);
  if ( !v15 || !v16 || v16 + v15 != (_DWORD)v3 )
  {
LABEL_63:
    v33 = L"CQ count is 0 for CE 0 or CE 1";
LABEL_64:
    NVMeLogHeterogeneousQueueMappingFallback(a1, (_DWORD)v33, 0, v15, v16);
    *(_DWORD *)(a1 + 4336) |= 0x10u;
LABEL_65:
    v4 = v53;
LABEL_66:
    LODWORD(v3) = *(_DWORD *)(a1 + 4336);
    if ( (v3 & 0x10) != 0 )
    {
      NVMeLogTelemetry(
        a1,
        0LL,
        0LL,
        3,
        "QueueMappingFallback",
        (int)v47,
        v48,
        v49,
        v50,
        "Total SQ Count",
        *(unsigned __int16 *)(a1 + 336),
        "Total CQ Count",
        *(unsigned __int16 *)(a1 + 338),
        "CE 0 processor count",
        *(unsigned int *)(a1 + 316),
        "CE 1 processor count",
        *(unsigned int *)(a1 + 320),
        "CE 0 module count",
        *(unsigned int *)(a1 + 308),
        "CE 1 module count",
        *(unsigned int *)(a1 + 312),
        "Total message count",
        *v4,
        "Total processor count",
        *(unsigned __int16 *)(a1 + 242));
      LOBYTE(v3) = NVMeCleanUpSqCqMapping(a1);
    }
    v34 = 0;
    v56 = 0;
    if ( *(_WORD *)(a1 + 336) )
    {
      while ( 1 )
      {
        v35 = *(_QWORD *)(a1 + 872) + 136LL * v34;
        LOBYTE(v3) = NVMeGetCompletionQueueForAssignment(
                       a1,
                       (unsigned int)&v56,
                       (unsigned int)&v54,
                       (unsigned int)&v55,
                       0LL);
        if ( !(_BYTE)v3 )
          break;
        v36 = v54;
        *(_WORD *)(v35 + 50) = v54;
        v37 = *(_QWORD *)(a1 + 880);
        v38 = 392 * v36;
        if ( v55 )
        {
          if ( v55 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)(v38 + v37 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v38 + v37 - 176))++) = v35;
            ++*(_DWORD *)(v38 + v37 - 180);
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v38 + v37 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v38 + v37 - 208))++) = v35;
          ++*(_DWORD *)(v38 + v37 - 212);
        }
        LODWORD(v3) = *(unsigned __int16 *)(a1 + 336);
        if ( ++v34 >= (unsigned int)v3 )
          goto LABEL_78;
      }
      if ( *(_BYTE *)(a1 + 22) )
        LOBYTE(v3) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    }
LABEL_78:
    v39 = *(unsigned __int16 *)(a1 + 336);
    v40 = 1;
    if ( v34 < v39 )
    {
      do
      {
        LOWORD(v3) = v39;
        v41 = *(_QWORD *)(a1 + 872) + 136LL * v34;
        if ( v40 > *(_WORD *)(a1 + 338) )
          goto LABEL_81;
        v42 = *(_QWORD *)(a1 + 880);
        ++v34;
        *(_WORD *)(v41 + 50) = v40;
        v3 = v40++;
        v43 = 392 * v3;
        *(_QWORD *)(*(_QWORD *)(392 * v3 + v42 - 200) + 8LL * *(unsigned int *)(392 * v3 + v42 - 208)) = v41;
        ++*(_DWORD *)(v43 + v42 - 208);
        ++*(_DWORD *)(v43 + v42 - 212);
        LOWORD(v3) = *(_WORD *)(a1 + 336);
        if ( v40 > *(_WORD *)(a1 + 338) )
LABEL_81:
          v40 = 1;
        LOWORD(v39) = v3;
      }
      while ( v34 < (unsigned __int16)v3 );
    }
    goto LABEL_83;
  }
  if ( *(_WORD *)(a1 + 336) )
  {
    v22 = v52;
    while ( 2 )
    {
      v57 = 1;
      for ( i = 0; i < v16; ++i )
      {
        if ( v17 >= *(unsigned __int16 *)(a1 + 336) )
          break;
        v24 = *(_QWORD *)(a1 + 872) + 136LL * v17;
        if ( !(unsigned __int8)NVMeGetCompletionQueueForAssignment(
                                 a1,
                                 (unsigned int)&v56,
                                 (unsigned int)&v54,
                                 (unsigned int)&v55,
                                 (__int64)&v57) )
        {
          v32 = L"Class efficiency 1: No CQ Found";
LABEL_60:
          NVMeLogHeterogeneousQueueMappingFallback(a1, (_DWORD)v32, *(unsigned __int16 *)(v24 + 40), v15, v16);
          *(_DWORD *)(a1 + 4336) |= 0x10u;
          goto LABEL_65;
        }
        v25 = v55;
        v26 = *(_QWORD *)(a1 + 880);
        v27 = 392LL * v54;
        *(_WORD *)(v24 + 50) = v54;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)(v27 + v26 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v27 + v26 - 176))++) = v24;
            ++*(_DWORD *)(v27 + v26 - 180);
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v27 + v26 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v27 + v26 - 208))++) = v24;
          ++*(_DWORD *)(v27 + v26 - 212);
        }
        ++v17;
      }
      v57 = 0;
      for ( j = 0; j < v15; ++j )
      {
        if ( v17 >= *(unsigned __int16 *)(a1 + 336) )
          break;
        v24 = *(_QWORD *)(a1 + 872) + 136LL * v17;
        if ( !(unsigned __int8)NVMeGetCompletionQueueForAssignment(
                                 a1,
                                 (unsigned int)&v56,
                                 (unsigned int)&v54,
                                 (unsigned int)&v55,
                                 (__int64)&v57) )
        {
          v32 = L"Class efficiency 0: No CQ Found";
          goto LABEL_60;
        }
        v29 = v55;
        v30 = *(_QWORD *)(a1 + 880);
        v31 = 392LL * v54;
        *(_WORD *)(v24 + 50) = v54;
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)(v31 + v30 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v31 + v30 - 176))++) = v24;
            ++*(_DWORD *)(v31 + v30 - 180);
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v31 + v30 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v31 + v30 - 208))++) = v24;
          ++*(_DWORD *)(v31 + v30 - 212);
        }
        ++v17;
      }
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 336);
      if ( v17 >= (unsigned int)v3 )
        goto LABEL_83;
      if ( v22 == -1 || v22 < v17 )
      {
        v22 = v17;
        continue;
      }
      break;
    }
    v33 = L"No progress for queue mapping";
    goto LABEL_64;
  }
LABEL_83:
  v44 = 0;
  if ( *(_WORD *)(a1 + 338) )
  {
    do
    {
      v3 = v44++;
      v45 = *(_QWORD *)(a1 + 880) + 392 * v3;
      *(_DWORD *)(v45 + 184) = 0;
      *(_DWORD *)(v45 + 216) = 0;
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 338);
    }
    while ( v44 < (unsigned int)v3 );
  }
  return v3;
}
