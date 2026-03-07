__int64 __fastcall FsRtlpOplockFsctrlInternal(__int64 *Oplock, PIRP Irp, int a3, int a4, unsigned int a5)
{
  unsigned int v7; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v9; // r12d
  struct _IRP *MasterIrp; // r13
  int MdlAddress; // eax
  int v12; // r12d
  void *v13; // rax
  int v14; // edx
  ULONG Options; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PFAST_MUTEX *v19; // rsi
  bool v20; // cf
  int v22; // r12d
  int v23; // eax
  void *Pool2; // rcx
  unsigned int v25; // r12d
  __int64 v26; // rbx
  _QWORD *v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rax
  char v30; // r9
  int v31; // [rsp+40h] [rbp-58h]
  int v32; // [rsp+44h] [rbp-54h]
  int v33; // [rsp+48h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  void *v35; // [rsp+58h] [rbp-40h]
  PVOID v36; // [rsp+A8h] [rbp+10h] BYREF
  int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v7 = 0;
  v35 = 0LL;
  P = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v7 = FsRtlpAttachOplockKey(Irp);
      if ( !v7 )
        return (unsigned int)FsRtlpRequestExclusiveOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 1, 0, 0xC8u, a5);
    }
    else if ( (Options & 0x10000) != 0 )
    {
      v7 = FsRtlpAttachOplockKey(Irp);
      if ( !v7 )
      {
        v19 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v19 = (PFAST_MUTEX *)FsRtlpAllocateOplock(v18, v17);
          *Oplock = (__int64)v19;
        }
        v36 = v19;
        ExAcquireFastMutexUnsafe(v19[19]);
        v7 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v7 )
        {
          P = (PVOID)ExAllocatePool2(288LL, 72LL, 1869763398LL);
          v7 = FsRtlpRequestShareableOplock(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, (__int64)&P, 0, 0, a5);
        }
        if ( P )
        {
          FsRtlpClearOwner((__int64)v19, (__int64)P);
          ExFreePoolWithTag(P, 0);
        }
        ExReleaseFastMutexUnsafe(v19[19]);
      }
    }
    return v7;
  }
  v9 = 2;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x90000u:
LABEL_51:
      v25 = v9 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && !_bittest((const signed __int32 *)&CurrentStackLocation->FileObject->Flags, 0xEu) )
      {
        return (unsigned int)FsRtlpRequestExclusiveOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               1,
                               0,
                               v25,
                               a5);
      }
LABEL_57:
      v7 = -1073741598;
LABEL_72:
      Irp->IoStatus.Status = v7;
      goto LABEL_73;
    case 0x90004u:
      if ( !a3
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && !_bittest((const signed __int32 *)&CurrentStackLocation->FileObject->Flags, 0xEu) )
      {
        return (unsigned int)FsRtlpRequestShareableOplock(
                               Oplock,
                               (__int64)CurrentStackLocation,
                               (__int64)Irp,
                               0x10u,
                               0LL,
                               1,
                               0,
                               a5);
      }
      v7 = -1073741598;
      Irp->IoStatus.Status = -1073741598;
LABEL_73:
      IofCompleteRequest(Irp, 1);
      return v7;
    case 0x90008u:
LABEL_50:
      v9 *= 2;
      goto LABEL_51;
    case 0x9000Cu:
      v30 = 1;
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v30, a5);
    case 0x90010u:
      return (unsigned int)FsRtlpOpBatchBreakClosePending(*Oplock, Irp->Tail.Overlay.CurrentStackLocation, Irp);
    case 0x90014u:
      return (unsigned int)FsRtlpOplockBreakNotify(*Oplock, Irp, Irp);
    case 0x90050u:
      v30 = 0;
      return (unsigned int)FsRtlpAcknowledgeOplockBreak(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v30, a5);
    case 0x9005Cu:
      v9 = 4;
      goto LABEL_50;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 590400 )
  {
    v7 = -1073741811;
LABEL_66:
    Irp->IoStatus.Status = v7;
    goto LABEL_73;
  }
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v7 = -1073741789;
    goto LABEL_66;
  }
  if ( MasterIrp->Type > 1u )
    goto LABEL_68;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MdlAddress & 1) == 0 )
  {
    if ( (MdlAddress & 2) != 0 )
    {
      LODWORD(v36) = *(_DWORD *)(&MasterIrp->Size + 1);
      v22 = (((unsigned __int8)v36 & 1) << 12) | (((unsigned __int8)v36 & 6) << 12);
      if ( !v22 || v22 == 4096 || v22 == 12288 || v22 == 20480 || v22 == 28672 )
      {
        if ( IoIsOperationSynchronous(Irp) )
          goto LABEL_71;
        if ( !_bittest((const signed __int32 *)&CurrentStackLocation->FileObject->Flags, 0xEu) )
        {
          if ( (v22 & 0x2000) != 0 )
          {
            Pool2 = (void *)ExAllocatePool2(288LL, 72LL, 1869763398LL);
            P = Pool2;
            v23 = *(_DWORD *)(&MasterIrp->Size + 1);
          }
          else
          {
            LOBYTE(v23) = (_BYTE)v36;
            Pool2 = v35;
          }
          v7 = FsRtlpAcknowledgeOplockBreakByCacheFlags(
                 (__int64 *)*Oplock,
                 (__int64)CurrentStackLocation,
                 (__int64)Irp,
                 ((v23 & 1) << 12) | ((unsigned __int8)(v23 & 6) << 12),
                 (__int64 *)((unsigned __int64)&P & -(__int64)(Pool2 != 0LL)),
                 a5);
          goto LABEL_24;
        }
        *(_OWORD *)&MasterIrp->Type = 0LL;
        *(_QWORD *)&MasterIrp->Flags = 0LL;
        *(_DWORD *)&MasterIrp->Type = 1572865;
        Irp->IoStatus.Information = 24LL;
        Irp->IoStatus.Status = 0;
        goto LABEL_73;
      }
    }
LABEL_68:
    v7 = -1073741811;
    Irp->IoStatus.Status = -1073741811;
    goto LABEL_73;
  }
  v33 = *(_DWORD *)(&MasterIrp->Size + 1);
  v31 = (v33 & 1) << 12;
  LODWORD(v36) = v33 & 4;
  v32 = (v33 & 2) << 12;
  v12 = v31 | v32 | ((_DWORD)v36 != 0 ? 0x4000 : 0);
  if ( v12 )
  {
    if ( v12 == 12288 )
    {
LABEL_17:
      if ( !a3 && !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        if ( (v12 & 0x2000) != 0 )
        {
          v13 = (void *)ExAllocatePool2(288LL, 72LL, 1869763398LL);
          P = v13;
          v14 = *(_DWORD *)(&MasterIrp->Size + 1);
        }
        else
        {
          v13 = v35;
          LOBYTE(v14) = v33;
        }
        v7 = FsRtlpRequestShareableOplock(
               Oplock,
               (__int64)CurrentStackLocation,
               (__int64)Irp,
               ((v14 & 1) << 12) | ((unsigned __int8)(v14 & 6) << 12),
               (unsigned __int64)&P & -(__int64)(v13 != 0LL),
               1,
               0,
               a5);
LABEL_24:
        if ( P )
        {
          FsRtlpClearOwner(*Oplock, (__int64)P);
          ExFreePoolWithTag(P, 0);
        }
        return v7;
      }
      goto LABEL_57;
    }
    if ( v12 != 28672 )
    {
      if ( v12 == 4096 )
        goto LABEL_17;
      if ( v12 != 20480 )
      {
LABEL_71:
        v7 = -1073741811;
        goto LABEL_72;
      }
    }
    if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
    {
      v20 = (_DWORD)v36 != 0;
      LODWORD(v36) = -(int)v36;
      return (unsigned int)FsRtlpRequestExclusiveOplock(
                             Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             v37,
                             v38,
                             v32 | v31 | (v20 ? 16448 : 64),
                             a5);
    }
    goto LABEL_57;
  }
  v26 = *Oplock;
  if ( *Oplock )
  {
    v36 = 0LL;
    if ( _bittest((const signed __int32 *)(v26 + 144), 0x10u) )
    {
      if ( FsRtlpCallerIsAtomicRequestor(v26, (__int64)CurrentStackLocation->FileObject, &v36) )
      {
        v27 = v36;
        FsRtlpOplockDequeueRH((__int64)v36);
        v28 = v27[7];
        v29 = (_QWORD *)v27[8];
        if ( *(_QWORD **)(v28 + 8) != v27 + 7 || (_QWORD *)*v29 != v27 + 7 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        if ( *(_QWORD *)(v26 + 120) == v26 + 120 )
          *(_DWORD *)(v26 + 144) &= 0xFFFCFFFF;
        if ( v27[5] )
          FsRtlpClearOwner(v26, (__int64)v27);
        ExFreePoolWithTag(v27, 0);
        FsRtlpComputeShareableOplockState((_QWORD *)v26);
        FsRtlpReleaseIrpsWaitingForRH(v26);
      }
    }
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0;
}
