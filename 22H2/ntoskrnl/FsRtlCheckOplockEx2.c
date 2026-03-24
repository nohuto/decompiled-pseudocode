/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x1402D44D0
 * Callers:
 *     FsRtlCheckOplock @ 0x1402D54B0 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x1402D6540 (FsRtlCheckOplockEx.c)
 * Callees:
 *     FsRtlpComputeShareableOplockState @ 0x140206110 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x140271D9C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1402D5100 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402D55B0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x1402D6290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1402D7250 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x140304D20 (FsRtlpOplockCleanup.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140305248 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140311600 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x14031DE1C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14036CD18 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpClearOwner @ 0x140375A58 (FsRtlpClearOwner.c)
 *     IoSetOplockKeyContext @ 0x140390744 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     FsRtlGetMarkHandleInfo @ 0x1404EFE58 (FsRtlGetMarkHandleInfo.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CE40 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140650610 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x140651070 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140651100 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x14067DB70 (FsRtlAcknowledgeEcp.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        IRP *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v13; // r14d
  __int64 v14; // r13
  volatile signed __int32 *CurrentStackLocation; // r12
  unsigned int v16; // esi
  __int64 v17; // rdx
  _QWORD *v19; // rcx
  struct _ECP_LIST *v20; // r12
  __int64 v21; // r8
  __int64 v22; // rcx
  char v23; // al
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rdi
  unsigned __int8 v26; // dl
  __int64 v27; // rcx
  __int64 v28; // rsi
  int SessionId; // eax
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rdi
  int v32; // esi
  char v33; // al
  int v34; // edi
  int v35; // eax
  char v36; // al
  int v37; // eax
  bool v38; // zf
  int v39; // eax
  char v40; // al
  unsigned int v41; // eax
  ULONG_PTR v42; // rdi
  signed __int32 v43; // eax
  __int64 v44; // rax
  int v45; // eax
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-148h]
  bool v50; // [rsp+71h] [rbp-F7h] BYREF
  char v51; // [rsp+72h] [rbp-F6h]
  bool v52; // [rsp+73h] [rbp-F5h]
  _BYTE v53[4]; // [rsp+74h] [rbp-F4h] BYREF
  int v54; // [rsp+78h] [rbp-F0h]
  unsigned int v55; // [rsp+7Ch] [rbp-ECh]
  unsigned int v56; // [rsp+80h] [rbp-E8h]
  volatile signed __int32 *v57; // [rsp+88h] [rbp-E0h]
  unsigned int v58; // [rsp+90h] [rbp-D8h]
  int v59; // [rsp+94h] [rbp-D4h] BYREF
  PVOID EcpContext; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-C8h]
  int v62; // [rsp+A8h] [rbp-C0h]
  int v63; // [rsp+ACh] [rbp-BCh]
  int v64; // [rsp+B0h] [rbp-B8h]
  unsigned int v65; // [rsp+B8h] [rbp-B0h]
  __int64 v66; // [rsp+C0h] [rbp-A8h]
  __int64 v67; // [rsp+C8h] [rbp-A0h]
  __int64 v68; // [rsp+D0h] [rbp-98h]
  __int64 v69; // [rsp+D8h] [rbp-90h]
  PVOID P; // [rsp+E0h] [rbp-88h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+E8h] [rbp-80h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-78h]
  __int64 v73; // [rsp+F8h] [rbp-70h]
  __int64 v74; // [rsp+100h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp-60h]
  __int64 v76; // [rsp+110h] [rbp-58h]
  GUID EcpType; // [rsp+118h] [rbp-50h] BYREF

  v64 = a4;
  v65 = a3;
  v61 = a5;
  v69 = a6;
  v68 = a7;
  v67 = a9;
  v66 = a10;
  v13 = 0;
  v56 = 0;
  v14 = *a1;
  v74 = *a1;
  if ( a4 )
    return 3221225485LL;
  CurrentStackLocation = (volatile signed __int32 *)a2->Tail.Overlay.CurrentStackLocation;
  v57 = CurrentStackLocation;
  if ( (a3 & 4) != 0 )
  {
    P = 0LL;
    if ( !v14 )
      return 0LL;
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    if ( *(_BYTE *)CurrentStackLocation )
    {
      v13 = -1073741811;
    }
    else if ( (*(_DWORD *)(v14 + 144) & 0x10000) != 0
           && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v14, *((_QWORD *)CurrentStackLocation + 6), &P) )
    {
      v46 = P;
      FsRtlpOplockDequeueRH(P);
      v47 = v46[7];
      v48 = (_QWORD *)v46[8];
      if ( *(_QWORD **)(v47 + 8) != v46 + 7 || (_QWORD *)*v48 != v46 + 7 )
        __fastfail(3u);
      *v48 = v47;
      *(_QWORD *)(v47 + 8) = v48;
      if ( *(_QWORD *)(v14 + 120) == v14 + 120 )
        *(_DWORD *)(v14 + 144) &= 0xFFFCFFFF;
      if ( v46[5] )
        FsRtlpClearOwner(v14, v46);
      ExFreePoolWithTag(v46, 0);
      FsRtlpComputeShareableOplockState(v14);
      FsRtlpReleaseIrpsWaitingForRH(v14);
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v14 + 152));
    return v13;
  }
  if ( (a3 & 0x10000000) == 0 )
  {
    v16 = 0;
    if ( *(_BYTE *)CurrentStackLocation )
      goto LABEL_5;
    v19 = *(_QWORD **)(*((_QWORD *)CurrentStackLocation + 6) + 208LL);
    if ( v19 )
    {
      if ( v19 != IopRevocationExtension )
      {
        v44 = v19[7];
        if ( v44 )
        {
          if ( (*(_BYTE *)(v44 + 2) & 3) != 0 )
            goto LABEL_5;
        }
      }
    }
    EcpContext = 0LL;
    ExtraCreateParameter = 0LL;
    EcpType = 0LL;
    IoGetIrpExtraCreateParameter(a2, &ExtraCreateParameter);
    v20 = ExtraCreateParameter;
    if ( ExtraCreateParameter )
    {
      EcpType = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(ExtraCreateParameter, &EcpType, &EcpContext, 0LL) )
      {
        EcpType = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v20, &EcpType, &EcpContext, 0LL) )
          goto LABEL_15;
        v45 = 1;
      }
      else
      {
        v45 = 2;
      }
      v55 = v45;
      CurrentStackLocation = v57;
      v16 = IoSetOplockKeyContext(*((_QWORD *)v57 + 6), EcpContext, (unsigned __int16)v45);
      if ( (_WORD)v55 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v16 == -1073741823 )
        v16 = 0;
      goto LABEL_5;
    }
LABEL_15:
    CurrentStackLocation = v57;
LABEL_5:
    v56 = v16;
  }
  FsRtlpOplockStoreKeyForDeleteOperation(a1, a2, a3);
  if ( v14 != *a1 )
  {
    v14 = *a1;
    v74 = *a1;
  }
  if ( (a3 & 2) == 0 && v14 && (a2->Flags & 2) == 0 && !v56 )
  {
    v50 = (a3 & 0x20000000) != 0;
    v51 = 1;
    while ( 1 )
    {
      v53[0] = 0;
      v21 = a3 & 0x10;
      v55 = a3 & 0x10;
      if ( (a3 & 0x10) == 0 && !v50 )
      {
        v58 = *(_DWORD *)(v14 + 144);
        v22 = *(_QWORD *)(v14 + 8);
        v76 = v22;
        v23 = *(_BYTE *)CurrentStackLocation;
        v17 = v58;
        if ( *(_BYTE *)CurrentStackLocation == 3 && (v58 & 0xFFFF4FFE) == 0 )
          v51 = 0;
        if ( v23 == 4 && (v58 & 0xFFFFDFFE) == 0 )
          v51 = 0;
        if ( (a3 & 8) == 0 && v23 != 18 && v22 && v22 == *((_QWORD *)CurrentStackLocation + 6) )
        {
          v51 = 0;
          goto LABEL_133;
        }
      }
      if ( !v51 )
        goto LABEL_133;
      if ( !v50 )
        break;
LABEL_47:
      v50 = 1;
      v32 = *(_DWORD *)(v14 + 144);
      if ( v32 != 1 )
      {
        LOBYTE(v17) = 0;
        v55 = v17;
        v52 = 0;
        v33 = 0;
        v34 = 0;
        v54 = 0;
        if ( (_DWORD)v21 )
          goto LABEL_65;
        v35 = *(unsigned __int8 *)CurrentStackLocation;
        if ( v35 == 3 )
        {
          if ( (v32 & 8) != 0 )
          {
LABEL_83:
            v34 = 0x4000;
            v54 = 0x4000;
          }
          else
          {
            LOBYTE(v17) = 1;
            v52 = 1;
            v34 = 0x4000;
            v54 = 0x4000;
          }
          goto LABEL_52;
        }
        if ( v35 == 4 )
        {
LABEL_64:
          v33 = 1;
LABEL_65:
          v34 = 20480;
          v54 = 20480;
        }
        else
        {
          switch ( *(_BYTE *)CurrentStackLocation )
          {
            case 0:
              if ( ((v32 & 0x7000) == 0 || (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEDFE7F) == 0)
                && ((v32 & 0x1E) == 0 || (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEFFE7F) == 0)
                && (CurrentStackLocation[4] & 0x100000) == 0
                || (v32 & 8) != 0
                && (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 1) + 16LL) & 0xFFEDFE56) == 0
                && (*((_BYTE *)CurrentStackLocation + 26) & 1) != 0 )
              {
                break;
              }
              v36 = *((_BYTE *)CurrentStackLocation + 19);
              if ( ((v36 & 0xFA) != 0 || v36 == 1) && (CurrentStackLocation[4] & 0x100000) == 0 )
                goto LABEL_82;
              goto LABEL_64;
            case 2:
              if ( (*(_DWORD *)(*((_QWORD *)CurrentStackLocation + 6) + 80LL) & 0x4000) != 0 )
                break;
              goto LABEL_73;
            case 6:
              v37 = *((_DWORD *)CurrentStackLocation + 4);
              if ( v37 == 20 )
              {
                v38 = *((_BYTE *)CurrentStackLocation + 33) == 0;
                goto LABEL_92;
              }
              if ( v37 == 19 )
                goto LABEL_64;
              switch ( v37 )
              {
                case 10:
                case 11:
                case 40:
                case 65:
                  v34 = 0x2000;
                  v54 = 0x2000;
                  if ( (v32 & 0xC) == 0 )
                    goto LABEL_52;
                  v33 = 1;
                  break;
                case 13:
                  if ( a2->AssociatedIrp.MasterIrp->Type )
                    goto LABEL_97;
                  goto LABEL_52;
                case 39:
                  goto LABEL_64;
                case 64:
                  if ( (*(_DWORD *)a2->AssociatedIrp.MasterIrp & 1) != 0 )
                  {
                    v34 = 0x2000;
                    v54 = 0x2000;
                  }
                  goto LABEL_52;
                default:
                  goto LABEL_52;
              }
              goto LABEL_53;
            case 9:
LABEL_82:
              LOBYTE(v17) = 1;
              v52 = 1;
              goto LABEL_83;
            case 0xD:
              v41 = *((_DWORD *)CurrentStackLocation + 6);
              if ( v41 > 0x98268 )
              {
                if ( v41 == 623428 || v41 == 623592 )
                  goto LABEL_64;
                v38 = v41 == 639668;
LABEL_92:
                if ( v38 )
                  goto LABEL_64;
              }
              else
              {
                switch ( v41 )
                {
                  case 0x98268u:
                    goto LABEL_64;
                  case 0x900FCu:
                    if ( (FsRtlGetMarkHandleInfo(a2, v17, v21, 0x140000000uLL) & 0x4000) == 0 )
                    {
LABEL_76:
                      v17 = v55;
                      goto LABEL_52;
                    }
                    v34 = 0x2000;
                    v54 = 0x2000;
                    v17 = v55;
                    if ( (v32 & 0xC) != 0 )
                    {
                      v33 = 1;
                      goto LABEL_53;
                    }
                    break;
                  case 0x94264u:
                    v17 = (v32 & 8) == 0;
                    v52 = (v32 & 8) == 0;
                    v34 = 0x4000;
                    v54 = 0x4000;
                    goto LABEL_52;
                  case 0x980C8u:
                  case 0x98208u:
                    goto LABEL_64;
                }
              }
              break;
            case 0x11:
              if ( (v32 & 8) != 0 )
                break;
              goto LABEL_64;
            case 0x12:
LABEL_73:
              FsRtlpOplockCleanup(v14, CurrentStackLocation, v21, 0x140000000uLL);
              if ( *(_BYTE *)CurrentStackLocation == 18 && (a3 & 0x20) != 0 )
              {
                v34 = 0x2000;
                v54 = 0x2000;
              }
              goto LABEL_76;
            case 0x15:
LABEL_97:
              v34 = 0x2000;
              v54 = 0x2000;
              break;
            default:
              break;
          }
LABEL_52:
          v33 = 0;
        }
LABEL_53:
        if ( (_BYTE)v17 )
        {
          if ( (*(_DWORD *)(v14 + 144) & 0x1F0FFDF) != 0x10
            && !(unsigned __int8)FsRtlpOplockKeysEqual(*((_QWORD *)CurrentStackLocation + 6), *(_QWORD *)(v14 + 8), 0LL) )
          {
            v56 = FsRtlpOplockBreakToII(
                    v14,
                    (_DWORD)CurrentStackLocation,
                    (_DWORD)a2,
                    a3,
                    BugCheckParameter4,
                    v61,
                    v69,
                    v68,
                    a8,
                    v67,
                    v66,
                    (__int64)&v50,
                    (__int64)v53);
          }
        }
        else if ( v33
               && ((*(_DWORD *)(v14 + 144) & 0x1F0FFDF) == 0x10
                || !(unsigned __int8)FsRtlpOplockKeysEqual(
                                       *((_QWORD *)CurrentStackLocation + 6),
                                       *(_QWORD *)(v14 + 8),
                                       0LL)) )
        {
          v56 = FsRtlpOplockBreakToNone(
                  v14,
                  (_DWORD)CurrentStackLocation,
                  (_DWORD)a2,
                  a3,
                  BugCheckParameter4,
                  v61,
                  v69,
                  v68,
                  a8,
                  v67,
                  v66,
                  (__int64)&v50,
                  (__int64)v53);
        }
        if ( !v56 && (*(_DWORD *)(v14 + 144) & v34) != 0 )
        {
          BugCheckParameter4 = v64;
          v56 = FsRtlpOplockBreakByCacheFlags(v14, CurrentStackLocation, a2, a3);
        }
      }
LABEL_133:
      if ( v50 && (a3 & 0x20000000) == 0 )
      {
        v42 = *(_QWORD *)(v14 + 152);
        *(_QWORD *)(v42 + 8) = 0LL;
        v43 = _InterlockedCompareExchange((volatile signed __int32 *)v42, 1, 0);
        if ( v43 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v42, v43);
        KeAbPostRelease(v42);
      }
      if ( !v53[0] )
        return v56;
    }
    v24 = *(_QWORD *)(v14 + 152);
    v57 = (volatile signed __int32 *)v24;
    CurrentThread = KeGetCurrentThread();
    v73 = 0LL;
    v59 = 0;
    v25 = (ULONG_PTR)CurrentThread;
    --CurrentThread->SpecialApcDisable;
    if ( ++*(_BYTE *)(v25 + 794) != 1 )
      KeBugCheckEx(0x192u, v25, v24, KeGetCurrentIrql(), 0LL);
    v73 = 0LL;
    v72 = 0LL;
    v63 = 0;
    v26 = *(_BYTE *)(v25 + 792);
    if ( v26
      || ((v39 = 0, *(_BYTE *)(v25 + 870))
        ? (v40 = *(_BYTE *)(v25 + 870),
           *(_BYTE *)(v25 + 870) = 0,
           *(_BYTE *)(v25 + 792) |= v40,
           v26 = *(_BYTE *)(v25 + 792),
           v39 = 1)
        : (v26 = 0),
          (v62 = v39) != 0) )
    {
      _BitScanForward((unsigned int *)&v27, v26);
      v63 = v27;
      *(_BYTE *)(v25 + 792) = v26 & ~(1 << v27);
      v28 = *(_QWORD *)(v25 + 800) + 96 * v27;
      v72 = v28;
    }
    else
    {
      v28 = 0LL;
      v72 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
      {
LABEL_33:
        v73 = v28;
        if ( !v28 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(v25 + 120), 0x10u);
LABEL_39:
          --*(_BYTE *)(v25 + 794);
          KiAbThreadRemoveBoosts(v25, v24, &v59);
          v38 = (*(_WORD *)(v25 + 486))++ == 0xFFFF;
          if ( v38 && *(_QWORD *)(v25 + 152) != v25 + 152 )
            KiCheckForKernelApcDelivery(v30);
          v31 = v57;
          if ( !_interlockedbittestandreset(v57, 0) )
            ExpAcquireFastMutexContended((ULONG_PTR)v31, v28);
          if ( v28 )
            *(_BYTE *)(v28 + 26) |= 1u;
          *((_QWORD *)v31 + 1) = CurrentThread;
          v21 = v55;
          goto LABEL_47;
        }
        if ( v24 >= 0xFFFF800000000000uLL )
        {
          if ( byte_140C4F9C8[((v24 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(*(_QWORD *)(v25 + 184));
            v24 = (ULONG_PTR)v57;
            goto LABEL_38;
          }
          v24 = (ULONG_PTR)v57;
        }
        SessionId = -1;
LABEL_38:
        *(_DWORD *)(v28 + 40) = SessionId;
        *(_QWORD *)(v28 + 32) = v24 & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_39;
      }
      EtwTraceAutoBoostEntryExhaustion(v25, v24);
    }
    v24 = (ULONG_PTR)v57;
    goto LABEL_33;
  }
  return v56;
}
