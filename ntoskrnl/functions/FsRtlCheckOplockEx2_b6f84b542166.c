__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v13; // r14d
  __int64 v14; // r15
  struct _KTHREAD *v15; // r12
  unsigned int v16; // esi
  BOOL v17; // r8d
  int v18; // esi
  int v19; // r9d
  void *v20; // rcx
  UCHAR Type; // al
  __int64 v22; // rsi
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v26; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v30; // esi
  char v31; // al
  int v32; // ebx
  int v33; // eax
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  unsigned __int8 *p_WaitListHead; // rdx
  unsigned __int8 v37; // al
  int Blink; // eax
  bool v39; // zf
  unsigned int SListFaultAddress; // eax
  ULONG_PTR v41; // rbx
  signed __int32 v42; // eax
  _QWORD *v44; // rcx
  struct _ECP_LIST *v45; // r12
  __int64 v46; // rax
  int v47; // eax
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  _QWORD *v50; // rax
  int v51; // [rsp+20h] [rbp-1C8h]
  bool v52; // [rsp+81h] [rbp-167h] BYREF
  char v53; // [rsp+82h] [rbp-166h]
  bool v54; // [rsp+83h] [rbp-165h]
  _BYTE v55[4]; // [rsp+84h] [rbp-164h] BYREF
  int v56; // [rsp+88h] [rbp-160h]
  unsigned int v57; // [rsp+8Ch] [rbp-15Ch]
  int v58; // [rsp+90h] [rbp-158h]
  int v59; // [rsp+94h] [rbp-154h]
  struct _KTHREAD *v60; // [rsp+98h] [rbp-150h]
  PVOID P; // [rsp+A0h] [rbp-148h] BYREF
  int v62; // [rsp+A8h] [rbp-140h]
  unsigned int v63; // [rsp+ACh] [rbp-13Ch]
  PVOID EcpContext; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-130h]
  unsigned int v66; // [rsp+C0h] [rbp-128h] BYREF
  int v67; // [rsp+C4h] [rbp-124h] BYREF
  int v68; // [rsp+C8h] [rbp-120h] BYREF
  int v69; // [rsp+CCh] [rbp-11Ch]
  unsigned int v70; // [rsp+D0h] [rbp-118h]
  _BOOL8 v71; // [rsp+D8h] [rbp-110h]
  __int64 v72; // [rsp+E0h] [rbp-108h]
  __int64 v73; // [rsp+E8h] [rbp-100h]
  __int64 v74; // [rsp+F0h] [rbp-F8h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+F8h] [rbp-F0h] BYREF
  ULONG_PTR v76; // [rsp+100h] [rbp-E8h]
  __int64 v77; // [rsp+108h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+110h] [rbp-D8h]
  _QWORD v79[2]; // [rsp+118h] [rbp-D0h] BYREF
  GUID EcpType; // [rsp+128h] [rbp-C0h] BYREF
  char v81[32]; // [rsp+140h] [rbp-A8h] BYREF
  int *v82; // [rsp+160h] [rbp-88h]
  __int64 v83; // [rsp+168h] [rbp-80h]
  int *v84; // [rsp+170h] [rbp-78h]
  __int64 v85; // [rsp+178h] [rbp-70h]
  _QWORD *v86; // [rsp+180h] [rbp-68h]
  __int64 v87; // [rsp+188h] [rbp-60h]
  int *v88; // [rsp+190h] [rbp-58h]
  __int64 v89; // [rsp+198h] [rbp-50h]

  v69 = a4;
  v70 = a3;
  v65 = a5;
  P = a6;
  v74 = a7;
  v73 = a9;
  v72 = a10;
  v13 = 0;
  v57 = 0;
  v14 = *a1;
  v77 = *a1;
  if ( a4 )
    return 3221225485LL;
  v15 = *(struct _KTHREAD **)(a2 + 184);
  v60 = v15;
  if ( (a3 & 4) != 0 )
  {
    P = 0LL;
    if ( !v14 )
      return 0LL;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    if ( v15->Header.Type )
    {
      v13 = -1073741811;
    }
    else if ( (*(_DWORD *)(v14 + 144) & 0x10000) != 0
           && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v14, v15->StackLimit, &P) )
    {
      v48 = P;
      FsRtlpOplockDequeueRH(P);
      v49 = v48[7];
      v50 = (_QWORD *)v48[8];
      if ( *(_QWORD **)(v49 + 8) != v48 + 7 || (_QWORD *)*v50 != v48 + 7 )
        __fastfail(3u);
      *v50 = v49;
      *(_QWORD *)(v49 + 8) = v50;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v48[5] )
        FsRtlpClearOwner(v14, (__int64)v48);
      ExFreePoolWithTag(v48, 0);
      FsRtlpComputeShareableOplockState(v14);
      FsRtlpReleaseIrpsWaitingForRH(v14);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    return v13;
  }
  if ( (a3 & 0x10000000) == 0 )
  {
    v16 = 0;
    if ( v15->Header.Type )
      goto LABEL_5;
    v44 = (_QWORD *)*((_QWORD *)v15->StackLimit + 26);
    if ( v44 )
    {
      if ( v44 != IopRevocationExtension )
      {
        v46 = v44[7];
        if ( v46 )
        {
          if ( (*(_BYTE *)(v46 + 2) & 3) != 0 )
            goto LABEL_5;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    EcpType = 0LL;
    IoGetIrpExtraCreateParameter((PIRP)a2, &ExtraCreateParameter);
    v45 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v45, &EcpType, &EcpContext, 0LL) )
          goto LABEL_132;
        v47 = 1;
      }
      else
      {
        v47 = 2;
      }
      v59 = v47;
      v15 = v60;
      v16 = IoSetOplockKeyContext(v60->StackLimit, EcpContext, (unsigned __int16)v47);
      if ( (_WORD)v59 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v16 == -1073741823 )
        v16 = 0;
      goto LABEL_5;
    }
LABEL_132:
    v15 = v60;
LABEL_5:
    v57 = v16;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(a1, a2, a3);
  if ( v14 != *a1 )
  {
    v14 = *a1;
    v77 = *a1;
  }
  if ( (a3 & 2) == 0 && v14 && (*(_DWORD *)(a2 + 16) & 2) == 0 && !v57 )
  {
    v18 = a3 & 0x20000000;
    v59 = a3 & 0x20000000;
    v52 = (a3 & 0x20000000) != 0;
    v53 = 1;
    while ( 1 )
    {
      v55[0] = 0;
      v19 = a3 & 0x10;
      v58 = v19;
      if ( (a3 & 0x10) != 0 || v52 )
        break;
      v62 = *(_DWORD *)(v14 + 144);
      v20 = *(void **)(v14 + 8);
      v79[1] = v20;
      Type = v15->Header.Type;
      if ( v15->Header.Type == 3 && (v62 & 0xFFFF4FFE) == 0 )
        v53 = 0;
      if ( Type == 4 && (v62 & 0xFFFFDFFE) == 0 )
        v53 = 0;
      if ( (a3 & 8) != 0 || Type == 18 || !v20 || v20 != v15->StackLimit )
        break;
      v53 = 0;
LABEL_121:
      if ( v52 && !v18 )
      {
        v41 = *(_QWORD *)(v14 + 152);
        *(_QWORD *)(v41 + 8) = 0LL;
        v42 = _InterlockedCompareExchange((volatile signed __int32 *)v41, 1, 0);
        if ( v42 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v41, v42);
        KeAbPostRelease(v41);
      }
      if ( !v55[0] )
        return v57;
    }
    if ( !v53 )
      goto LABEL_121;
    if ( !v52 )
    {
      v22 = *(_QWORD *)(v14 + 152);
      CurrentThread = KeGetCurrentThread();
      v63 = 0;
      v71 = 0LL;
      v23 = (ULONG_PTR)CurrentThread;
      v60 = CurrentThread;
      v24 = 0LL;
      v76 = 0LL;
      _disable();
      AbEntrySummary = v60->AbEntrySummary;
      if ( v60->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v22, CurrentThread), v23 = (ULONG_PTR)v60, AbEntrySummary) )
      {
        _BitScanForward(&v26, AbEntrySummary);
        v63 = v26;
        *(_BYTE *)(v23 + 792) = AbEntrySummary & ~(unsigned __int8)(1 << v26);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v34 = *SchedulerAssist;
          do
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange(SchedulerAssist, v34 & 0xFFDFFFFF, v34);
          }
          while ( v35 != v34 );
          if ( (v34 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v23 = (ULONG_PTR)v60;
          }
        }
        _enable();
        v24 = v23 + 96LL * v63 + 1696;
        v76 = v24;
        if ( (unsigned __int64)(v22 - qword_140C65668) < 0x8000000000LL )
        {
          SessionId = MmGetSessionIdEx(*(_QWORD *)(v23 + 184));
          v23 = (ULONG_PTR)v60;
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v24 + 8) = SessionId;
        *(_QWORD *)v24 = v22 & 0x7FFFFFFFFFFFFFFCLL;
      }
      v17 = v71;
      v60 = (struct _KTHREAD *)v71;
      if ( v71 )
        KiAbThreadRemoveBoostsSlow(v23);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v22, 0) )
        ExpAcquireFastMutexContended(v22, v24);
      if ( v24 )
        *(_BYTE *)(v24 + 18) = 1;
      *(_QWORD *)(v22 + 8) = CurrentThread;
      v19 = v58;
    }
    v52 = 1;
    v30 = *(_DWORD *)(v14 + 144);
    if ( v30 == 1 )
    {
LABEL_50:
      v18 = v59;
      goto LABEL_121;
    }
    LOBYTE(v17) = 0;
    v58 = v17;
    v54 = 0;
    v31 = 0;
    v32 = 0;
    v56 = 0;
    if ( !v19 )
    {
      v33 = v15->Header.Type;
      if ( v33 == 3 )
      {
        if ( (v30 & 8) != 0 )
        {
LABEL_74:
          v32 = 0x4000;
          v56 = 0x4000;
        }
        else
        {
          LOBYTE(v17) = 1;
          v54 = 1;
          v32 = 0x4000;
          v56 = 0x4000;
        }
LABEL_42:
        v31 = 0;
LABEL_43:
        if ( v17 )
        {
          if ( (*(_DWORD *)(v14 + 144) & 0x1F0FFDF) != 0x10
            && !(unsigned __int8)FsRtlpOplockKeysEqual(v15->StackLimit, *(_QWORD *)(v14 + 8), 0LL) )
          {
            v57 = FsRtlpOplockBreakToII(
                    v14,
                    (_DWORD)v15,
                    a2,
                    a3,
                    v51,
                    v65,
                    (__int64)P,
                    v74,
                    a8,
                    v73,
                    v72,
                    (__int64)&v52,
                    (__int64)v55);
          }
        }
        else if ( v31
               && ((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
                || !(unsigned __int8)FsRtlpOplockKeysEqual(v15->StackLimit, *(_QWORD *)(v14 + 8), 0LL)) )
        {
          v57 = FsRtlpOplockBreakToNone(
                  v14,
                  (_DWORD)v15,
                  a2,
                  a3,
                  v51,
                  v65,
                  (__int64)P,
                  v74,
                  a8,
                  v73,
                  v72,
                  (__int64)&v52,
                  (__int64)v55);
        }
        if ( !v57 && (*(_DWORD *)(v14 + 144) & v32) != 0 )
        {
          v51 = v69;
          v57 = FsRtlpOplockBreakByCacheFlags(v14, v15, a2, a3);
        }
        goto LABEL_50;
      }
      if ( v33 != 4 )
      {
        switch ( v15->Header.Type )
        {
          case 0u:
            p_WaitListHead = (unsigned __int8 *)&v15->Header.WaitListHead;
            if ( ((v30 & 0x7000) == 0 || (*(_DWORD *)(*(_QWORD *)p_WaitListHead + 16LL) & 0xFFEDFE7F) == 0)
              && ((v30 & 0x1E) == 0 || (*(_DWORD *)(*(_QWORD *)p_WaitListHead + 16LL) & 0xFFEFFE7F) == 0)
              && ((__int64)v15->Header.WaitListHead.Blink & 0x100000) == 0
              || (v30 & 8) != 0
              && (*(_DWORD *)(*(_QWORD *)p_WaitListHead + 16LL) & 0xFFEDFE56) == 0
              && (BYTE2(v15->SListFaultAddress) & 1) != 0 )
            {
              goto LABEL_42;
            }
            v37 = BYTE3(v15->Header.WaitListHead.Blink);
            if ( ((v37 & 0xFA) != 0 || v37 == 1) && ((__int64)v15->Header.WaitListHead.Blink & 0x100000) == 0 )
              goto LABEL_73;
            goto LABEL_56;
          case 2u:
            if ( (*((_DWORD *)v15->StackLimit + 20) & 0x4000) != 0 )
              goto LABEL_42;
            goto LABEL_65;
          case 6u:
            Blink = (int)v15->Header.WaitListHead.Blink;
            if ( Blink == 20 )
            {
              v39 = BYTE1(v15->QuantumTarget) == 0;
              goto LABEL_82;
            }
            if ( Blink == 19 )
              goto LABEL_56;
            switch ( Blink )
            {
              case 10:
              case 11:
              case 40:
              case 65:
                v32 = 0x2000;
                v56 = 0x2000;
                if ( (v30 & 0xC) == 0 )
                  goto LABEL_42;
                v31 = 1;
                break;
              case 13:
                if ( **(_BYTE **)(a2 + 24) )
                  goto LABEL_87;
                goto LABEL_42;
              case 39:
                goto LABEL_56;
              case 64:
                if ( (**(_DWORD **)(a2 + 24) & 1) != 0 )
                {
                  v32 = 0x2000;
                  v56 = 0x2000;
                }
                goto LABEL_42;
              default:
                goto LABEL_42;
            }
            goto LABEL_43;
          case 9u:
LABEL_73:
            LOBYTE(v17) = 1;
            v54 = 1;
            goto LABEL_74;
          case 0xDu:
            SListFaultAddress = (unsigned int)v15->SListFaultAddress;
            if ( SListFaultAddress > 0x98268 )
            {
              if ( SListFaultAddress == 623428 || SListFaultAddress == 623592 )
                goto LABEL_56;
              v39 = SListFaultAddress == 639668;
LABEL_82:
              if ( v39 )
                goto LABEL_56;
            }
            else
            {
              switch ( SListFaultAddress )
              {
                case 0x98268u:
                  goto LABEL_56;
                case 0x900FCu:
                  if ( (FsRtlGetMarkHandleInfo(a2) & 0x4000) == 0 )
                  {
LABEL_67:
                    v17 = v58;
                    goto LABEL_42;
                  }
                  v32 = 0x2000;
                  v56 = 0x2000;
                  v17 = v58;
                  if ( (v30 & 0xC) != 0 )
                  {
                    v31 = 1;
                    goto LABEL_43;
                  }
                  break;
                case 0x94264u:
                  v17 = (v30 & 8) == 0;
                  v54 = (v30 & 8) == 0;
                  v32 = 0x4000;
                  v56 = 0x4000;
                  goto LABEL_42;
                case 0x980C8u:
                case 0x98208u:
                  goto LABEL_56;
              }
            }
            break;
          case 0x11u:
            if ( (v30 & 8) != 0 )
              goto LABEL_42;
            goto LABEL_56;
          case 0x12u:
LABEL_65:
            FsRtlpOplockCleanup(v14, v15);
            if ( v15->Header.Type == 18 && (a3 & 0x20) != 0 )
            {
              v32 = 0x2000;
              v56 = 0x2000;
              if ( (unsigned int)dword_140C03770 > 5 )
              {
                v66 = a3;
                v82 = (int *)&v66;
                v83 = 4LL;
                v67 = 0x2000;
                v84 = &v67;
                v85 = 4LL;
                v79[0] = v14;
                v86 = v79;
                v87 = 8LL;
                v68 = *(_DWORD *)(v14 + 144);
                v88 = &v68;
                v89 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, &dword_14002B0D4, 0LL, 0LL, 6, v81);
              }
            }
            goto LABEL_67;
          case 0x15u:
LABEL_87:
            v32 = 0x2000;
            v56 = 0x2000;
            goto LABEL_42;
          default:
            goto LABEL_42;
        }
        goto LABEL_42;
      }
LABEL_56:
      v31 = 1;
    }
    v32 = 20480;
    v56 = 20480;
    goto LABEL_43;
  }
  return v57;
}
