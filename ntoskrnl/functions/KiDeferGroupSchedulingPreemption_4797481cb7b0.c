bool __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rsi
  bool v8; // r11
  __int64 v10; // r13
  char v11; // r11
  __int64 v12; // r8
  __int64 RescheduleContextEntryForPrcb; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  char v16; // dl
  int v17; // eax
  __int64 v18; // r12
  char v19; // r11
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  unsigned __int8 v22; // dl
  __int64 v23; // r15
  _DWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  _DWORD *v29; // r11
  char v30; // r10
  __int64 v31; // r10
  _DWORD *v32; // rcx
  __int64 i; // r11
  _DWORD *v34; // r10
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r15
  bool v38; // zf
  unsigned __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rcx
  char v42; // al
  char v43; // al
  char v44; // cl
  char v45; // al
  __int64 v46; // rcx
  char v47; // cl
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rdx
  _DWORD *v52; // r11
  char v53; // r10
  __int64 v54; // r10
  _DWORD *v55; // rcx
  char v56; // r15
  __int64 v57; // [rsp+20h] [rbp-E0h]
  char v58[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v59; // [rsp+38h] [rbp-C8h] BYREF
  int ThreadEffectiveRankNonZero; // [rsp+40h] [rbp-C0h]
  __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  _DWORD v64[84]; // [rsp+60h] [rbp-A0h] BYREF

  v63 = a1;
  v3 = a1;
  memset(v64, 0, sizeof(v64));
  v4 = *(_QWORD *)(v3 + 104);
  v61 = 0LL;
  if ( !v4 || !(unsigned __int8)KiShouldPreemptionBeDeferred(v3) )
    return 0;
  while ( 1 )
  {
    ThreadEffectiveRankNonZero = 0;
    v58[0] = 0;
    KiAcquirePrcbLocksForIsolationUnit(a2, 0, &v61);
    v5 = *(_QWORD *)(a2 + 16);
    if ( !*(_QWORD *)(v3 + 104)
      || v5 == *(_QWORD *)(a2 + 24)
      || !(unsigned __int8)KiCheckPrcbAffinityEx(*(_QWORD *)(v3 + 576), a2)
      || ((v7 = *(_QWORD *)(v5 + 104)) == 0
       || (v7 += *(unsigned int *)(a2 + 216)) == 0
       || (LOBYTE(v6) = 1, (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v5, v7, v6, v58)) == 0))
      && *(_BYTE *)(v5 + 195) > *(_BYTE *)(v3 + 195) )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v59 = 0LL;
    memset(v64, 0, sizeof(v64));
    KiStartRescheduleContext((__int64)v64, &v61, 0LL);
    v10 = *(_QWORD *)(a2 + 8);
    v62 = 0LL;
    if ( (*(_DWORD *)(v10 + 120) & 0x1000) == 0 && v10 != *(_QWORD *)(a2 + 34944) )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v64, a2);
      if ( (unsigned __int8)(v11 & 2) <= (unsigned __int8)(*(_BYTE *)(v5 + 120) & 2)
        || (v22 = v64[0], v23 = 0LL, !LOBYTE(v64[0])) )
      {
LABEL_18:
        v14 = *(_QWORD *)RescheduleContextEntryForPrcb;
        v15 = *(_QWORD *)(*(_QWORD *)RescheduleContextEntryForPrcb + 8LL);
        *(_QWORD *)(RescheduleContextEntryForPrcb + 16) = v15;
        v16 = *(_BYTE *)(RescheduleContextEntryForPrcb + 32) & 0xFE | (v15 == *(_QWORD *)(v14 + 24));
        *(_BYTE *)(RescheduleContextEntryForPrcb + 32) = v16;
        LODWORD(v14) = *(_DWORD *)(v15 + 120);
        *(_QWORD *)(RescheduleContextEntryForPrcb + 24) = 0LL;
        *(_BYTE *)(RescheduleContextEntryForPrcb + 33) &= ~1u;
        *(_BYTE *)(RescheduleContextEntryForPrcb + 34) |= 1u;
        *(_BYTE *)(RescheduleContextEntryForPrcb + 32) = v16 & 0xC5 | (2 * (((v14 & 2) != 0) | 2));
        if ( ((*(_BYTE *)(v10 + 120) | *(_BYTE *)(v5 + 120)) & 2) != 0 )
        {
          for ( i = 0LL; (unsigned int)i < LOBYTE(v64[0]); i = (unsigned int)(i + 1) )
          {
            v34 = &v64[10 * i + 4];
            if ( (_DWORD *)RescheduleContextEntryForPrcb != v34 )
            {
              v35 = *(_DWORD *)(v10 + 120);
              v36 = *((_QWORD *)v34 + 3);
              v62 = 0LL;
              v37 = *(_QWORD *)v34;
              v38 = (v35 & 2) == 0;
              v39 = v36 - 1;
              if ( v38 )
              {
                v40 = *(_QWORD *)(v37 + 24);
                if ( v39 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v36) )
                {
                  if ( (*((_BYTE *)v34 + 33) & 1) != 0 )
                    *(_DWORD *)(v46 + 116) |= 2u;
                  *(_BYTE *)(v46 + 565) = 1;
                  KiInsertDeferredReadyList(&v62, v46);
                }
                v47 = *((_BYTE *)v34 + 32) | 1;
                *((_QWORD *)v34 + 2) = v40;
                *((_BYTE *)v34 + 32) = v47;
                *((_BYTE *)v34 + 32) = v47 & 0xC5 | (2 * (((*(_DWORD *)(v40 + 120) & 2) != 0) | 2));
              }
              else
              {
                v40 = *(_QWORD *)(v37 + 34944);
                if ( v39 <= 0xFFFFFFFFFFFFFFFDuLL && !(unsigned __int8)KiIsPrcbThread(v36) )
                {
                  if ( (*((_BYTE *)v34 + 33) & 1) != 0 )
                    *(_DWORD *)(v41 + 116) |= 2u;
                  *(_BYTE *)(v41 + 565) = 1;
                  KiInsertDeferredReadyList(&v62, v41);
                }
                v42 = v34[8] & 0xFE;
                *((_QWORD *)v34 + 2) = v10;
                *((_BYTE *)v34 + 32) = v42;
                v43 = v42 & 0xE5 | (2 * (((*(_DWORD *)(v10 + 120) & 2) != 0) | 2));
                v44 = v43 | 0x20;
                v45 = v43 & 0xDF;
                if ( v10 == v40 )
                  v44 = v45;
                *((_BYTE *)v34 + 32) = v44;
              }
              *((_BYTE *)v34 + 33) &= ~1u;
              *((_QWORD *)v34 + 3) = v40;
              if ( !(unsigned __int8)KiIsPrcbThread(v40) )
                *(_DWORD *)(v40 + 536) = *(_DWORD *)(v37 + 36);
            }
          }
        }
        v64[1] = (*(_DWORD *)(v10 + 120) >> 1) & 1;
        goto LABEL_20;
      }
      while ( 1 )
      {
        v24 = &v64[10 * v23 + 4];
        if ( (_DWORD *)RescheduleContextEntryForPrcb != v24 )
        {
          if ( !(unsigned __int8)KiDoesThreadDominateRescheduleContextEntry(v24, v10, 2LL) )
          {
            v25 = KiFindRescheduleContextEntryForPrcb(v64, a2);
            LOBYTE(v26) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v25, v27, v26, 0LL, v57);
            if ( (v30 & 2) != 0 )
            {
              LOBYTE(v28) = v64[0];
              v31 = 0LL;
              if ( LOBYTE(v64[0]) )
              {
                do
                {
                  v32 = &v64[10 * v31 + 4];
                  if ( v32 != v29 )
                  {
                    LOBYTE(v12) = 1;
                    KiAdjustRescheduleContextEntryForThreadRemoval(v32, v28, v12, 0LL, v57);
                    LOBYTE(v28) = v64[0];
                  }
                  v31 = (unsigned int)(v31 + 1);
                }
                while ( (unsigned int)v31 < (unsigned __int8)v28 );
              }
              goto LABEL_69;
            }
            goto LABEL_20;
          }
          v22 = v64[0];
        }
        v23 = (unsigned int)(v23 + 1);
        if ( (unsigned int)v23 >= v22 )
          goto LABEL_18;
      }
    }
    v48 = KiFindRescheduleContextEntryForPrcb(v64, a2);
    LOBYTE(v49) = 1;
    KiAdjustRescheduleContextEntryForThreadRemoval(v48, v50, v49, 0LL, v57);
    if ( (v53 & 2) != 0 )
    {
      LOBYTE(v51) = v64[0];
      v54 = 0LL;
      if ( LOBYTE(v64[0]) )
      {
        do
        {
          v55 = &v64[10 * v54 + 4];
          if ( v55 != v52 )
          {
            LOBYTE(v12) = 1;
            KiAdjustRescheduleContextEntryForThreadRemoval(v55, v51, v12, 0LL, v57);
            LOBYTE(v51) = v64[0];
          }
          v54 = (unsigned int)(v54 + 1);
        }
        while ( (unsigned int)v54 < (unsigned __int8)v51 );
      }
LABEL_69:
      v64[1] = 0;
    }
LABEL_20:
    *(_BYTE *)(v5 + 388) = 1;
    if ( v7 )
    {
      LOBYTE(v12) = 1;
      v17 = KiGetThreadEffectiveRankNonZero(v5, v7, v12, v58);
    }
    else
    {
      v17 = ThreadEffectiveRankNonZero;
    }
    if ( v17 )
      KiAddThreadToScbQueue(a2, v7, v5, 1LL);
    else
      KiAddThreadToPrcbQueue(a2, v5, *(char *)(v5 + 195), 1, v58[0]);
    KiSearchForNewThreadsForRescheduleContext(v64, (__int64)&v59);
    KiCommitRescheduleContext(v64, a2, 0LL, &v59);
    v18 = *(_QWORD *)(a2 + 16);
    KiReleasePrcbLocksForIsolationUnit(&v61);
    if ( v19 )
    {
      KiCompleteRescheduleContext(v64, a2);
      v20 = a2 + 12760;
      KiFlushSoftwareInterruptBatch(a2 + 12760);
    }
    else
    {
      v20 = a2 + 12760;
    }
    v21 = v59;
    if ( !v59 )
      break;
    v56 = 0;
    v59 = (_QWORD *)*v59;
    do
    {
      KiDeferredReadySingleThread(a2, (unsigned __int64)(v21 - 27), (__int64)&v59);
      v21 = v59;
      ++v56;
      if ( v59 )
        v59 = (_QWORD *)*v59;
      if ( (v56 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(v20);
    }
    while ( v21 );
    KiFlushSoftwareInterruptBatch(v20);
    v8 = v18 == 0;
    if ( v18 )
      goto LABEL_9;
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_28;
    v3 = v63;
  }
  v8 = v18 == 0;
  if ( v18 )
    goto LABEL_9;
LABEL_28:
  KiInsertDeferredPreemptionApc(a2, v63, 0LL);
  v8 = v18 == 0;
LABEL_9:
  if ( v61 )
    KiReleasePrcbLocksForIsolationUnit(&v61);
  return v8;
}
