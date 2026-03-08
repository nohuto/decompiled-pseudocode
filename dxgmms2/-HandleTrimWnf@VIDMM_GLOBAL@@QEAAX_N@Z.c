/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00A70D0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0011A14 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0092260 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00A7720 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C00A7AC4 (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  struct _KTHREAD *v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r10
  struct _RTL_BALANCED_NODE *v11; // rax
  _QWORD *i; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *j; // rcx
  struct _RTL_BALANCED_NODE *v23; // rax
  _QWORD *k; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  _QWORD **v32; // rdx
  _QWORD *v33; // rax
  _QWORD *m; // rdx
  __int64 v35; // rcx
  signed __int64 v36; // rax
  char v37; // r15
  __int64 v38; // rcx
  signed __int64 v39; // rbx
  char v40; // r12
  char v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // r9d
  struct _KTHREAD *v45; // rcx
  char v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  char *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  struct _KTHREAD **n; // r15
  int v53; // ebx
  char IsHighPriorityProcess; // al
  bool v55; // cc
  unsigned __int64 v56; // r12
  struct VIDMM_PROCESS *v57; // rsi
  __int64 v58; // rax
  int v59; // eax
  signed __int64 v60; // rcx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  signed __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // r9d
  __int64 v68; // rcx
  char *v69; // rcx
  __int64 v71; // [rsp+58h] [rbp-41h]
  __int64 v72; // [rsp+60h] [rbp-39h]
  unsigned __int64 v73; // [rsp+68h] [rbp-31h] BYREF
  __int64 v74; // [rsp+70h] [rbp-29h]
  _BYTE v75[8]; // [rsp+78h] [rbp-21h] BYREF
  char *v76; // [rsp+80h] [rbp-19h]
  int v77; // [rsp+88h] [rbp-11h]
  struct _KTHREAD *v78; // [rsp+90h] [rbp-9h]
  _BYTE v79[8]; // [rsp+98h] [rbp-1h] BYREF
  DXGPUSHLOCK *v80; // [rsp+A0h] [rbp+7h]
  int v81; // [rsp+A8h] [rbp+Fh]
  _BYTE v82[20]; // [rsp+B0h] [rbp+17h] BYREF
  int v83; // [rsp+C4h] [rbp+2Bh]

  v2 = (struct _KTHREAD *)*((_QWORD *)this + 579);
  v3 = -1LL;
  v78 = v2;
  v72 = -1LL;
  v5 = -1LL;
  v74 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v6 = *((unsigned int *)this + 1754);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)this + 5028);
    v8 = 0LL;
    v73 = v7;
    v9 = 0LL;
    v10 = (unsigned int)v6;
    v71 = v6;
    while ( (*(_BYTE *)(v7 + v9 + 520) & 1) != 0 )
    {
      v11 = VIDMM_PARTITION::_PartitionTree;
      for ( i = 0LL; v11; v11 = v11->Children[0] )
        i = v11->Children;
      if ( i )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(i[5] + 384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + 24);
          v14 = *(_QWORD *)(v13 + v8 + 16);
          if ( v14 )
            break;
LABEL_17:
          v20 = (_QWORD **)i[1];
          v21 = i;
          if ( v20 )
          {
            i = (_QWORD *)i[1];
            for ( j = *v20; j; j = (_QWORD *)*j )
              i = j;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v21 )
                break;
              v21 = i;
            }
          }
          if ( !i )
          {
            v7 = v73;
            goto LABEL_22;
          }
        }
        v15 = 100LL * *(_QWORD *)(v13 + v8 + 120);
        if ( v14 == 3971335373 )
          v16 = v15 / 0xECB5C4CD;
        else
          v16 = v15 / v14;
        v17 = 100 - v16;
        if ( (__int64)(100 - v16) <= (unsigned int)dword_1C00764B4 )
        {
          if ( v17 <= (unsigned int)dword_1C00764B8 )
          {
            v18 = (unsigned int)dword_1C00764C8;
            v19 = (unsigned int)dword_1C00764C4;
            goto LABEL_13;
          }
          v18 = (unsigned int)dword_1C00764C8
              + (v17 - (unsigned int)dword_1C00764B8)
              * (unsigned int)(dword_1C00764C4 - dword_1C00764C8)
              / (unsigned int)(dword_1C00764B4 - dword_1C00764B8);
        }
        else
        {
          v18 = (unsigned int)dword_1C00764BC;
        }
        v19 = (unsigned int)dword_1C00764C0;
LABEL_13:
        if ( v3 >= v18 )
          v3 = v18;
        if ( v5 >= v19 )
          v5 = v19;
        goto LABEL_17;
      }
LABEL_23:
      if ( (*(_BYTE *)(v7 + v9 + 544) & 1) != 0 )
      {
        v23 = VIDMM_PARTITION::_PartitionTree;
        for ( k = 0LL; v23; v23 = v23->Children[0] )
          k = v23->Children;
        if ( k )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(k[5] + 384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + 24);
            v26 = *(_QWORD *)(v8 + v25 + 16);
            if ( v26 )
              break;
LABEL_37:
            v32 = (_QWORD **)k[1];
            v33 = k;
            if ( v32 )
            {
              k = (_QWORD *)k[1];
              for ( m = *v32; m; m = (_QWORD *)*m )
                k = m;
            }
            else
            {
              for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*k == v33 )
                  break;
                v33 = k;
              }
            }
            if ( !k )
            {
              v7 = v73;
              v10 = v71;
              goto LABEL_42;
            }
          }
          v27 = 100LL * *(_QWORD *)(v8 + v25 + 120);
          if ( v26 == 3971335373 )
            v28 = v27 / 0xECB5C4CD;
          else
            v28 = v27 / v26;
          v29 = 100 - v28;
          if ( (__int64)(100 - v28) > (unsigned int)dword_1C00764B4 )
          {
            v30 = (unsigned int)dword_1C00764BC;
            goto LABEL_32;
          }
          if ( v29 > (unsigned int)dword_1C00764B8 )
          {
            v30 = (unsigned int)dword_1C00764C8
                + (v29 - (unsigned int)dword_1C00764B8)
                * (unsigned int)(dword_1C00764C4 - dword_1C00764C8)
                / (unsigned int)(dword_1C00764B4 - dword_1C00764B8);
LABEL_32:
            v31 = (unsigned int)dword_1C00764C0;
          }
          else
          {
            v30 = (unsigned int)dword_1C00764C8;
            v31 = (unsigned int)dword_1C00764C4;
          }
          if ( v3 >= v30 )
            v3 = v30;
          if ( v5 >= v31 )
            v5 = v31;
          goto LABEL_37;
        }
        goto LABEL_42;
      }
      v48 = *(_QWORD *)(v7 + v9 + 912);
      if ( v48 )
      {
        v63 = 100 - 100LL * *(_QWORD *)(v7 + v9 + 1016) / v48;
        if ( v63 > (unsigned int)dword_1C00764B4 )
        {
          v64 = (unsigned int)dword_1C00764BC;
          goto LABEL_134;
        }
        v10 = v71;
        if ( v63 > (unsigned int)dword_1C00764B8 )
        {
          v64 = (unsigned int)dword_1C00764C8
              + (v63 - (unsigned int)dword_1C00764B8)
              * (unsigned int)(dword_1C00764C4 - dword_1C00764C8)
              / (unsigned int)(dword_1C00764B4 - dword_1C00764B8);
          v7 = v73;
LABEL_134:
          v65 = (unsigned int)dword_1C00764C0;
        }
        else
        {
          v64 = (unsigned int)dword_1C00764C8;
          v65 = (unsigned int)dword_1C00764C4;
        }
        if ( v3 < v64 )
          v64 = v3;
        v3 = v64;
        if ( v5 >= v65 )
          v5 = v65;
      }
LABEL_42:
      v9 += 1616LL;
      v8 += 344LL;
      v71 = --v10;
      if ( !v10 )
      {
        v2 = v78;
        v74 = v5;
        v72 = v3;
        goto LABEL_44;
      }
    }
    v47 = *(_QWORD *)(v7 + v9 + 568);
    if ( !v47 )
      goto LABEL_23;
    v60 = 100 - 100LL * *(_QWORD *)(v7 + v9 + 672) / v47;
    if ( v60 <= (unsigned int)dword_1C00764B4 )
    {
      if ( v60 <= (unsigned int)dword_1C00764B8 )
      {
        v61 = (unsigned int)dword_1C00764C8;
        v62 = (unsigned int)dword_1C00764C4;
        goto LABEL_122;
      }
      v61 = (unsigned int)dword_1C00764C8
          + (v60 - (unsigned int)dword_1C00764B8)
          * (unsigned int)(dword_1C00764C4 - dword_1C00764C8)
          / (unsigned int)(dword_1C00764B4 - dword_1C00764B8);
      v7 = v73;
    }
    else
    {
      v61 = (unsigned int)dword_1C00764BC;
    }
    v62 = (unsigned int)dword_1C00764C0;
LABEL_122:
    if ( v3 < v61 )
      v61 = v3;
    v3 = v61;
    if ( v5 >= v62 )
      v5 = v62;
LABEL_22:
    v10 = v71;
    goto LABEL_23;
  }
LABEL_44:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v35 = *((_QWORD *)this + 5559);
  if ( v35 && (__int64)v3 > (__int64)v2 - v35 )
  {
    v36 = (signed __int64)v2 - v35 - v3;
    v37 = 0;
  }
  else
  {
    *((_QWORD *)this + 5559) = v2;
    v36 = -(__int64)v3;
    v37 = 1;
  }
  v38 = *((_QWORD *)this + 5560);
  if ( v38 && (__int64)v5 > (__int64)v2 - v38 )
  {
    v39 = (signed __int64)v2 - v38 - v5;
    if ( v36 > v39 )
      v39 = v36;
    v40 = 0;
  }
  else
  {
    *((_QWORD *)this + 5560) = v2;
    v39 = -(__int64)v5;
    v40 = 1;
    if ( v36 > -(__int64)v5 )
      v39 = v36;
  }
  v41 = 0;
  v76 = (char *)this + 41072;
  if ( this != (VIDMM_GLOBAL *)-41072LL && *((struct _KTHREAD **)this + 5135) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(v66, 262146LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v76, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v67 = *((_DWORD *)v76 + 6);
      if ( v67 != -1 && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v42, &EventBlockThread, v43, v67);
    }
    ExAcquirePushLockSharedEx(v76, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v76 + 4);
  v77 = 1;
  if ( !v37 )
  {
    if ( !v40 )
    {
      VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v39, 5LL);
      goto LABEL_59;
    }
    v45 = (VIDMM_GLOBAL *)((char *)this + 44504);
    goto LABEL_80;
  }
  v50 = *((_QWORD *)this + 578);
  v45 = (VIDMM_GLOBAL *)((char *)this + 44504);
  if ( *((_QWORD *)this + 5561) == v50 )
  {
    ++*(_DWORD *)v45;
  }
  else
  {
    *(_DWORD *)v45 = 0;
    *((_QWORD *)this + 5561) = v50;
  }
  if ( v40 )
  {
LABEL_80:
    v51 = *((_QWORD *)this + 578);
    if ( *((_QWORD *)this + 5562) == v51 )
    {
      ++*((_DWORD *)this + 11127);
    }
    else
    {
      *((_DWORD *)this + 11127) = 0;
      *((_QWORD *)this + 5562) = v51;
    }
  }
  if ( *(_DWORD *)v45 <= 1u || *((_DWORD *)this + 11127) <= 1u )
  {
    v41 = 1;
    VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v39, 5LL);
    v46 = a2;
    goto LABEL_84;
  }
LABEL_59:
  v46 = a2;
  if ( !a2 )
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v75);
    return;
  }
LABEL_84:
  for ( n = (struct _KTHREAD **)*((_QWORD *)this + 5140);
        n != (struct _KTHREAD **)((char *)this + 41120);
        n = (struct _KTHREAD **)*n )
  {
    v53 = 0;
    if ( !v41 )
      goto LABEL_94;
    v45 = (struct _KTHREAD *)*((_QWORD *)n[2] + 4);
    if ( !v45 )
      goto LABEL_94;
    if ( (!*((_BYTE *)v45 + 337) || (*((_DWORD *)v45 + 106) & 2) != 0) && (*((_DWORD *)v45 + 106) & 1) == 0 )
      goto LABEL_94;
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v45);
    v45 = n[61];
    if ( IsHighPriorityProcess )
    {
      if ( v45 )
      {
        v55 = v74 <= v2 - v45;
LABEL_92:
        if ( !v55 )
          goto LABEL_94;
      }
    }
    else if ( v45 )
    {
      v55 = v72 <= v2 - v45;
      goto LABEL_92;
    }
    v53 = 1;
    n[61] = v2;
LABEL_94:
    v56 = 0LL;
    v73 = 0LL;
    if ( v46 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79, n + 42, 0);
      DXGPUSHLOCK::AcquireShared(v80);
      v81 = 1;
      VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)(n - 3), &v73, 0, 1u);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
      v56 = v73;
      v46 = a2;
      if ( v73 )
        v53 |= 4u;
    }
    if ( v53 )
    {
      v57 = n[2];
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v45) + 24) = *(_QWORD *)v57;
      v83 = 0;
      v58 = *((_QWORD *)this + 3);
      *(_OWORD *)&v82[4] = 0LL;
      *(_QWORD *)v82 = *(_QWORD *)(v58 + 404);
      *(_DWORD *)&v82[16] = v53;
      *(_QWORD *)&v82[8] = v56;
      v59 = VIDMM_GLOBAL::SendWnfNotificationToProcess(v57, *(const struct _WNF_STATE_NAME **)v82, v82, v44);
      if ( v59 < 0 )
      {
        WdLogSingleEntry1(1LL, v59);
        DxgkLogInternalTriageEvent(v68, 0x40000LL);
      }
      v46 = a2;
    }
  }
  if ( v77 == 1 )
  {
    v49 = v76;
    v77 = 0;
    _InterlockedDecrement((volatile signed __int32 *)v76 + 4);
    ExReleasePushLockSharedEx(v49, 0LL);
LABEL_67:
    KeLeaveCriticalRegion();
    return;
  }
  if ( v77 == 2 )
  {
    v69 = v76;
    v77 = 0;
    *((_QWORD *)v76 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v69, 0LL);
    goto LABEL_67;
  }
}
