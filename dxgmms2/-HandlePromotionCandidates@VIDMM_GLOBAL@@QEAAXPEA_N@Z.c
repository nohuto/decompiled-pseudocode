/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00AEEA0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C0018158 (VidSchIsDeviceBusy.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C002F528 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00A7720 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00E3CC8 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00EDCE8 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00FD5A0 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r8d
  unsigned int v7; // edx
  volatile signed __int32 *v8; // rcx
  int v9; // r9d
  __int64 v10; // rbx
  ULONG TimeIncrement; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  _QWORD *v19; // r10
  _QWORD *v20; // r12
  _QWORD *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // r11
  _QWORD **v28; // rcx
  _QWORD *v29; // r15
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r14
  _QWORD *v34; // r13
  __int64 *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rax
  unsigned int v38; // edx
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v40; // r9
  __int64 v41; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v43; // rax
  VIDMM_WORKER_THREAD *v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-D8h]
  __int64 v46; // [rsp+28h] [rbp-D0h]
  __int64 v47; // [rsp+30h] [rbp-C8h]
  __int64 v48; // [rsp+38h] [rbp-C0h]
  int v49; // [rsp+50h] [rbp-A8h]
  int v50; // [rsp+54h] [rbp-A4h]
  __int64 v51; // [rsp+58h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-98h]
  _QWORD *v53; // [rsp+68h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC ***v54; // [rsp+70h] [rbp-88h]
  __int64 v55; // [rsp+78h] [rbp-80h]
  __int64 v56; // [rsp+80h] [rbp-78h]
  __int64 v57; // [rsp+88h] [rbp-70h]
  char v58[8]; // [rsp+90h] [rbp-68h] BYREF
  char *v59; // [rsp+98h] [rbp-60h]
  int v60; // [rsp+A0h] [rbp-58h]
  char v61[8]; // [rsp+A8h] [rbp-50h] BYREF
  DXGPUSHLOCK *v62; // [rsp+B0h] [rbp-48h]
  int v63; // [rsp+B8h] [rbp-40h]
  char v64; // [rsp+100h] [rbp+8h]
  bool v65; // [rsp+110h] [rbp+18h] BYREF
  unsigned int v66; // [rsp+118h] [rbp+20h]

  if ( (*((_DWORD *)this + 1764) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( !*((_DWORD *)this + 11164) )
  {
    if ( !*((_BYTE *)this + 44664) )
      goto LABEL_4;
    if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this) )
    {
      v10 = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      *((_BYTE *)this + 44664) = 0;
      *((_QWORD *)this + 5580) = v10 * TimeIncrement;
LABEL_4:
      v59 = (char *)this + 41072;
      if ( this != (VIDMM_GLOBAL *)-41072LL && *((struct _KTHREAD **)this + 5135) == KeGetCurrentThread() )
      {
        WdLogSingleEntry1(1LL, 1453LL);
        v48 = 0LL;
        v47 = 0LL;
        v46 = 0LL;
        v45 = 1453LL;
        DxgkLogInternalTriageEvent(v12, 262146LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v59, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v9 = *((_DWORD *)v59 + 6);
          if ( v9 != -1 && (byte_1C00769C1 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v4, &EventBlockThread, v5, v9);
        }
        ExAcquirePushLockSharedEx(v59, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v59 + 4);
      v6 = *((_DWORD *)this + 1754);
      v7 = 0;
      v60 = 1;
      if ( !v6 )
      {
LABEL_11:
        v8 = (volatile signed __int32 *)v59;
        *((_DWORD *)this + 11165) = 0;
        *a2 = 0;
        v60 = 0;
        _InterlockedDecrement(v8 + 4);
        ExReleasePushLockSharedEx(v8, 0LL);
        KeLeaveCriticalRegion();
        return;
      }
      while ( *(_QWORD *)(1616LL * v7 + *((_QWORD *)this + 5028) + 488LL) == 1616LL * v7
                                                                           + *((_QWORD *)this + 5028)
                                                                           + 488LL )
      {
        if ( ++v7 >= v6 )
          goto LABEL_11;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
      v13 = *((_QWORD *)this + 5580);
      v14 = *((_QWORD *)this + 5581);
      v15 = *((_QWORD *)this + 579) - v13;
      *a2 = 1;
      if ( v15 < v14 )
      {
        VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v15 - v14, 7);
        return;
      }
      if ( !v13 || *((_DWORD *)this + 11165) )
      {
        *((_DWORD *)this + 11165) = 0;
        *((_QWORD *)this + 5581) = qword_1C0076518;
      }
      else
      {
        v16 = 2 * v14;
        *((_QWORD *)this + 5581) = v16;
        if ( v16 > qword_1C0076520 )
          *((_QWORD *)this + 5581) = qword_1C0076520;
      }
      v66 = 0;
      v52 = 0LL;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v61, (struct _KTHREAD **)this + 5134, 0);
      DXGPUSHLOCK::AcquireShared(v62);
      v17 = 0;
      v63 = 1;
      v50 = 0;
      if ( !*((_DWORD *)this + 1754) )
        goto LABEL_85;
LABEL_28:
      v18 = *((_QWORD *)this + 5028) + 1616LL * v17;
      if ( (*(_BYTE *)(v18 + 446) & 2) == 0 )
        goto LABEL_82;
      v19 = (_QWORD *)(v18 + 488);
      v20 = *(_QWORD **)(v18 + 488);
      v57 = v18 + 488;
      if ( v20 == (_QWORD *)(v18 + 488) )
        goto LABEL_82;
      while ( 1 )
      {
        v21 = v20;
        v20 = (_QWORD *)*v20;
        if ( v21[36] || v21[35] )
          break;
        v64 = 0;
        v51 = 0LL;
        if ( (v21[32] || v21[33] || v21[34]) && v21[25] < v21[3] )
          goto LABEL_40;
        v22 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v23 = (_QWORD *)v21[1], (_QWORD *)*v23 != v21) )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *v21 = 0LL;
        v21[1] = 0LL;
LABEL_81:
        if ( v20 == v19 )
        {
LABEL_82:
          v50 = ++v17;
          if ( v17 >= *((_DWORD *)this + 1754) )
          {
            if ( v66 )
LABEL_84:
              *((_BYTE *)this + 44664) = 1;
LABEL_85:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
            return;
          }
          goto LABEL_28;
        }
      }
      v64 = 1;
      v51 = 0LL;
LABEL_40:
      v24 = 0;
      v49 = 0;
      if ( !*((_DWORD *)this + 926) )
        goto LABEL_81;
      while ( 1 )
      {
        v25 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v24);
        if ( *(_DWORD *)(v25 + 380) == v17 && (*(_DWORD *)(v25 + 80) & 0x1001) != 0 )
        {
          v26 = v21[2];
          v27 = 184LL * v24;
          v55 = v26;
          v28 = (_QWORD **)(v27 + *(_QWORD *)(v26 + 16) + 40LL);
          v56 = v27;
          v29 = *v28;
          if ( *v28 != v28 )
          {
            do
            {
              v30 = v29;
              v29 = (_QWORD *)*v29;
              v53 = v30;
              v31 = v30[4];
              v32 = *(_QWORD *)(v31 + 32);
              if ( v32
                && (*(_BYTE *)(v31 + 60) & 7u) < 3
                && (*(_QWORD *)(v32 + 192) >= *((_QWORD *)this + 5580) || VidSchIsDeviceBusy(v32)) )
              {
                v33 = (_QWORD *)v30[2];
                v34 = v30 + 2;
                if ( v33 != v30 + 2 )
                {
                  while ( 1 )
                  {
                    v54 = (struct _VIDMM_GLOBAL_ALLOC ***)(v33 - 7);
                    v35 = (__int64 *)*(v33 - 7);
                    v36 = *v35;
                    do
                      v33 = (_QWORD *)*v33;
                    while ( v33 != v34 && (__int64 *)*(v33 - 7) == v35 );
                    if ( (*(_DWORD *)(v36 + 68) & 0x400) != 0 )
                      goto LABEL_73;
                    v37 = *(_QWORD *)(v36 + 536);
                    if ( *(_WORD *)(v37 + 4) || *(int *)(v37 + 12) > 0 )
                      goto LABEL_73;
                    if ( v64 )
                    {
                      if ( *(_DWORD *)(v36 + 400) < 0xA0000000 )
                        goto LABEL_73;
                    }
                    else if ( (unsigned __int64)(*(_QWORD *)(v36 + 16) + v51) > v21[3] - v21[25] )
                    {
                      goto LABEL_73;
                    }
                    if ( (*(_DWORD *)(v36 + 72) & 0x10000) == 0 || !*(_DWORD *)(v36 + 360) )
                    {
                      v38 = v66;
                      if ( v66
                        && (*(_QWORD *)(v36 + 16) + v52 > (unsigned __int64)qword_1C0076528 || v66 > dword_1C0076530) )
                      {
                        goto LABEL_84;
                      }
                      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x200) == 0
                        || *(_DWORD *)(v36 + 400) >= 0xA0000000 )
                      {
                        goto LABEL_70;
                      }
                      MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(
                                               this,
                                               *(_DWORD *)(v36 + 68) & 0x3F,
                                               *(struct _D3DDDI_SEGMENTPREFERENCE *)(v36 + 64),
                                               &v65);
                      if ( !MostPreferredSegment
                        || *((_QWORD *)MostPreferredSegment + 26) - *((_QWORD *)MostPreferredSegment + 27) >= (unsigned __int64)(3LL * *(_QWORD *)(v36 + 16))
                        && (LOBYTE(v40) = 1,
                            (unsigned __int64)VIDMM_SEGMENT::GetLargestGap(
                                                MostPreferredSegment,
                                                v36,
                                                0LL,
                                                v40,
                                                v45,
                                                v46,
                                                v47,
                                                v48) >= *(_QWORD *)(v36 + 16)) )
                      {
                        v38 = v66;
LABEL_70:
                        if ( (*(_BYTE *)(v30[4] + 58LL) & 4) == 0 )
                        {
                          ++*((_DWORD *)this + 11164);
                          v41 = v30[4];
                          *(_BYTE *)(v41 + 58) |= 4u;
                          PerformanceCounter = KeQueryPerformanceCounter(0LL);
                          v38 = v66;
                          *(LARGE_INTEGER *)(v41 + 48) = PerformanceCounter;
                          v30 = v53;
                        }
                        v43 = *(_QWORD *)(v36 + 16);
                        v44 = *(VIDMM_WORKER_THREAD **)this;
                        v52 += v43;
                        v51 += v43;
                        v66 = v38 + 1;
                        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(v44, **v54);
                        *((_DWORD *)**v54 + 17) |= 0x2000000u;
                      }
                    }
LABEL_73:
                    if ( v33 == v34 )
                    {
                      v26 = v55;
                      v27 = v56;
                      break;
                    }
                  }
                }
                if ( !*v29 )
                  v29 = *(_QWORD **)(v27 + *(_QWORD *)(v26 + 16) + 40);
              }
            }
            while ( v29 != (_QWORD *)(v27 + *(_QWORD *)(v26 + 16) + 40LL) );
            v17 = v50;
            v24 = v49;
          }
        }
        v49 = ++v24;
        if ( v24 >= *((_DWORD *)this + 926) )
        {
          v19 = (_QWORD *)v57;
          goto LABEL_81;
        }
      }
    }
  }
  *a2 = 1;
}
