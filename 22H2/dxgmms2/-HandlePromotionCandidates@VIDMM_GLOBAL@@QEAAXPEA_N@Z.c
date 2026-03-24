/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0085110
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C008C500 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00010B8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchIsDeviceBusy @ 0x1C0015888 (VidSchIsDeviceBusy.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0024E50 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0062050 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00857FC (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B8578 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00C5940 (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r8d
  unsigned int v8; // edx
  char *v9; // rcx
  int v10; // r9d
  __int64 v11; // rbx
  ULONG TimeIncrement; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // r12
  _QWORD *v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r11
  _QWORD **v29; // rcx
  _QWORD *v30; // r15
  _QWORD *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // r14
  _QWORD *v35; // rbp
  __int64 v36; // r10
  __int64 *v37; // rax
  struct _VIDMM_GLOBAL_ALLOC ***v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned int v41; // r9d
  __int64 v42; // r11
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  __int64 v44; // r9
  unsigned __int64 LargestGap; // rax
  __int64 v46; // rax
  struct _VIDMM_GLOBAL_ALLOC **v47; // rdx
  VIDMM_WORKER_THREAD *v48; // rcx
  __int64 v49; // [rsp+20h] [rbp-A8h]
  int v50; // [rsp+28h] [rbp-A0h]
  __int64 v51; // [rsp+30h] [rbp-98h]
  _QWORD *v52; // [rsp+38h] [rbp-90h]
  struct _VIDMM_GLOBAL_ALLOC ***v53; // [rsp+40h] [rbp-88h]
  __int64 v54; // [rsp+48h] [rbp-80h]
  __int64 v55; // [rsp+50h] [rbp-78h]
  __int64 v56; // [rsp+58h] [rbp-70h]
  _BYTE v57[8]; // [rsp+60h] [rbp-68h] BYREF
  char *v58; // [rsp+68h] [rbp-60h]
  int v59; // [rsp+70h] [rbp-58h]
  _BYTE v60[8]; // [rsp+78h] [rbp-50h] BYREF
  DXGPUSHLOCK *v61; // [rsp+80h] [rbp-48h]
  int v62; // [rsp+88h] [rbp-40h]
  char v63; // [rsp+D0h] [rbp+8h]
  bool v64; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v65; // [rsp+E8h] [rbp+20h]

  if ( (*((_DWORD *)this + 1762) & 0x2000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 11154) )
    goto LABEL_93;
  if ( !*((_BYTE *)this + 44624) )
    goto LABEL_4;
  if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this) )
  {
LABEL_93:
    *a2 = 1;
    return;
  }
  v11 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  *((_BYTE *)this + 44624) = 0;
  *((_QWORD *)this + 5575) = v11 * TimeIncrement;
LABEL_4:
  v58 = (char *)this + 41040;
  if ( this != (VIDMM_GLOBAL *)-41040LL && *((struct _KTHREAD **)this + 5131) == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v13 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v58, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *((_DWORD *)v58 + 6);
      if ( v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (const EVENT_DESCRIPTOR *)"g", v6, v10);
    }
    ExAcquirePushLockSharedEx(v58, 0LL);
  }
  v7 = *((_DWORD *)this + 1750);
  v59 = 1;
  v8 = 0;
  if ( !v7 )
  {
LABEL_11:
    v9 = v58;
    *((_DWORD *)this + 11155) = 0;
    *a2 = 0;
    v59 = 0;
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  while ( *(_QWORD *)(1584LL * v8 + *((_QWORD *)this + 5027) + 480LL) == 1584LL * v8 + *((_QWORD *)this + 5027) + 480LL )
  {
    if ( ++v8 >= v7 )
      goto LABEL_11;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
  v14 = *((_QWORD *)this + 5575);
  v15 = *((_QWORD *)this + 5576);
  v16 = *((_QWORD *)this + 577) - v14;
  *a2 = 1;
  if ( v16 < v15 )
  {
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v16 - v15, 7);
    return;
  }
  if ( !v14 || *((_DWORD *)this + 11155) )
  {
    *((_DWORD *)this + 11155) = 0;
    *((_QWORD *)this + 5576) = qword_1C0050468;
  }
  else
  {
    v17 = 2 * v15;
    *((_QWORD *)this + 5576) = v17;
    if ( v17 > qword_1C0050470 )
      *((_QWORD *)this + 5576) = qword_1C0050470;
  }
  v65 = 0;
  v51 = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60, (struct _KTHREAD **)this + 5130, 0);
  DXGPUSHLOCK::AcquireShared(v61);
  v18 = 0;
  v62 = 1;
  if ( *((_DWORD *)this + 1750) )
  {
    do
    {
      v19 = *((_QWORD *)this + 5027) + 1584LL * v18;
      if ( *(char *)(v19 + 437) < 0 )
      {
        v20 = (_QWORD *)(v19 + 480);
        v21 = *(_QWORD **)(v19 + 480);
        v56 = v19 + 480;
        if ( v21 != (_QWORD *)(v19 + 480) )
        {
          do
          {
            v22 = v21;
            v21 = (_QWORD *)*v21;
            if ( v22[36] || v22[35] )
            {
              v63 = 1;
            }
            else
            {
              v63 = 0;
              if ( !v22[32] && !v22[33] && !v22[34] || v22[25] >= v22[3] )
              {
                v23 = *v22;
                if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v24 = (_QWORD *)v22[1], (_QWORD *)*v24 != v22) )
                  __fastfail(3u);
                *v24 = v23;
                *(_QWORD *)(v23 + 8) = v24;
                *v22 = 0LL;
                v22[1] = 0LL;
                continue;
              }
            }
            v25 = 0;
            v50 = 0;
            if ( *((_DWORD *)this + 926) )
            {
              v49 = 0LL;
              do
              {
                v26 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v25);
                if ( *(_DWORD *)(v26 + 380) == v18 && (*(_DWORD *)(v26 + 80) & 0x1001) != 0 )
                {
                  v27 = v22[2];
                  v28 = 184LL * v25;
                  v54 = v27;
                  v55 = v28;
                  v29 = (_QWORD **)(*(_QWORD *)(v27 + 16) + v28 + 40);
                  v30 = *v29;
                  if ( *v29 != v29 )
                  {
                    while ( 1 )
                    {
                      v31 = v30;
                      v52 = v30;
                      v30 = (_QWORD *)*v30;
                      v32 = v31[4];
                      v33 = *(_QWORD *)(v32 + 32);
                      if ( v33
                        && (*(_BYTE *)(v32 + 52) & 7u) < 3
                        && (*(_QWORD *)(v33 + 192) >= *((_QWORD *)this + 5575) || VidSchIsDeviceBusy(v33)) )
                      {
                        v34 = (_QWORD *)v31[2];
                        v35 = v31 + 2;
                        if ( v34 != v31 + 2 )
                        {
                          v36 = v49;
                          while ( 1 )
                          {
                            v37 = (__int64 *)*(v34 - 7);
                            v38 = (struct _VIDMM_GLOBAL_ALLOC ***)(v34 - 7);
                            v53 = (struct _VIDMM_GLOBAL_ALLOC ***)(v34 - 7);
                            v39 = *v37;
                            do
                              v34 = (_QWORD *)*v34;
                            while ( v34 != v35 && (__int64 *)*(v34 - 7) == v37 );
                            if ( (*(_DWORD *)(v39 + 76) & 0x400) != 0 )
                              goto LABEL_79;
                            v40 = *(_QWORD *)(v39 + 496);
                            if ( *(_WORD *)(v40 + 4) || *(int *)(v40 + 12) > 0 )
                              goto LABEL_79;
                            if ( v63 )
                              break;
                            if ( (unsigned __int64)(v36 + *(_QWORD *)(v39 + 16)) <= v22[3] - v22[25] )
                            {
                              v38 = v53;
                              goto LABEL_62;
                            }
LABEL_79:
                            if ( v34 == v35 )
                            {
                              v27 = v54;
                              v28 = v55;
                              goto LABEL_81;
                            }
                          }
                          if ( *(_DWORD *)(v39 + 368) < 0xA0000000 )
                            goto LABEL_79;
LABEL_62:
                          if ( (*(_DWORD *)(v39 + 80) & 0x10000) != 0 && *(_DWORD *)(v39 + 336) )
                            goto LABEL_79;
                          v41 = v65;
                          v42 = v51;
                          if ( v65
                            && (v51 + *(_QWORD *)(v39 + 16) > (unsigned __int64)qword_1C0050478 || v65 > dword_1C0050480) )
                          {
                            goto LABEL_90;
                          }
                          if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 348LL) & 0x200) == 0
                            || *(_DWORD *)(v39 + 368) >= 0xA0000000 )
                          {
                            goto LABEL_75;
                          }
                          MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(
                                                   this,
                                                   *(_DWORD *)(v39 + 76) & 0x3F,
                                                   *(struct _D3DDDI_SEGMENTPREFERENCE *)(v39 + 72),
                                                   &v64);
                          if ( !MostPreferredSegment )
                          {
                            v31 = v52;
                            v36 = v49;
                            goto LABEL_74;
                          }
                          if ( *((_QWORD *)MostPreferredSegment + 26) - *((_QWORD *)MostPreferredSegment + 27) >= (unsigned __int64)(3LL * *(_QWORD *)(v39 + 16)) )
                          {
                            LOBYTE(v44) = 1;
                            LargestGap = VIDMM_SEGMENT::GetLargestGap(MostPreferredSegment, v39, 0LL, v44);
                            v31 = v52;
                            v36 = v49;
                            if ( LargestGap < *(_QWORD *)(v39 + 16) )
                              goto LABEL_79;
LABEL_74:
                            v42 = v51;
                            v41 = v65;
                            v38 = v53;
LABEL_75:
                            if ( (*(_BYTE *)(v31[4] + 50LL) & 4) == 0 )
                            {
                              ++*((_DWORD *)this + 11154);
                              *(_BYTE *)(v31[4] + 50LL) |= 4u;
                            }
                            v46 = *(_QWORD *)(v39 + 16);
                            v47 = *v38;
                            v48 = *(VIDMM_WORKER_THREAD **)this;
                            v65 = v41 + 1;
                            v51 = v46 + v42;
                            v49 = v46 + v36;
                            VIDMM_WORKER_THREAD::SuspendAccessToAllocation(v48, *v47);
                            *((_DWORD *)**v53 + 19) |= 0x1000000u;
                          }
                          v36 = v49;
                          v31 = v52;
                          goto LABEL_79;
                        }
LABEL_81:
                        if ( !*v30 )
                          v30 = *(_QWORD **)(*(_QWORD *)(v27 + 16) + v28 + 40);
                      }
                      if ( v30 == (_QWORD *)(*(_QWORD *)(v27 + 16) + v28 + 40) )
                      {
                        v25 = v50;
                        break;
                      }
                    }
                  }
                }
                v50 = ++v25;
              }
              while ( v25 < *((_DWORD *)this + 926) );
              v20 = (_QWORD *)v56;
            }
          }
          while ( v21 != v20 );
        }
      }
      ++v18;
    }
    while ( v18 < *((_DWORD *)this + 1750) );
    if ( v65 )
LABEL_90:
      *((_BYTE *)this + 44624) = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v60);
}
