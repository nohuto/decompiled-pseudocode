__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2, _DWORD *SchedulerAssist)
{
  int v4; // r12d
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 Irp; // rax
  int v8; // r9d
  IRP *v9; // rsi
  PVOID *v10; // r15
  void *v11; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v13; // ecx
  PMDL *v14; // rax
  const void **v15; // r13
  ULONG Flags; // edx
  _DWORD *v17; // rdx
  PVOID *v18; // rdi
  __int64 v20; // r9
  int v21; // edx
  __int64 Mdl; // rax
  int v23; // r8d
  int v24; // edx
  unsigned int v25; // eax
  struct _IRP *Pool2; // rax
  unsigned __int8 v27; // cl
  struct _KPRCB *CurrentPrcb; // r9
  int v29; // eax
  bool v30; // zf
  char v31; // cl
  struct _IO_STATUS_BLOCK *v32; // rdi
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF
  IRP **v34; // [rsp+88h] [rbp+10h]
  __int64 v35; // [rsp+90h] [rbp+18h]
  PVOID *v36; // [rsp+98h] [rbp+20h]

  v34 = a2;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v5 + 80) & 0x4000000) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v20) = 4;
        else
          v20 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v20;
      }
      LODWORD(v33) = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)(v5 + 152), 7u) )
      {
        do
          KeYieldProcessorEx(&v33);
        while ( (*(_DWORD *)(v5 + 152) & 0x80u) != 0 );
      }
      *(_DWORD *)(v5 + 156) = 0;
      _InterlockedAnd((volatile signed __int32 *)(v5 + 152), 0xFFFFFF7F);
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  LOBYTE(SchedulerAssist) = *(_BYTE *)(a1 + 9) == 0;
  Irp = IopAllocateIrpExReturn(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 76LL), SchedulerAssist);
  v9 = (IRP *)Irp;
  v33 = Irp;
  v10 = (PVOID *)(a1 + 16);
  if ( !Irp )
  {
    v4 = -1073741670;
    v18 = (PVOID *)(a1 + 32);
    goto LABEL_57;
  }
  v35 = a1 + 16;
  *(_QWORD *)(Irp + 192) = *v10;
  *(_QWORD *)(Irp + 152) = *(_QWORD *)a1;
  *(_QWORD *)(Irp + 160) = 0LL;
  *(_BYTE *)(Irp + 64) = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(Irp + 65) = 0;
  *(_BYTE *)(Irp + 68) = 0;
  *(_QWORD *)(Irp + 104) = 0LL;
  *(_DWORD *)(Irp + 16) = 0;
  v36 = (PVOID *)(a1 + 32);
  *(_QWORD *)(Irp + 80) = *(_QWORD *)(a1 + 32);
  v11 = *(void **)(a1 + 96);
  if ( v11 )
  {
    v32 = *(struct _IO_STATUS_BLOCK **)(a1 + 104);
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 96), 0x49526F49u);
    v9->Flags |= 0x200000u;
    v9->UserIosb = v32;
  }
  else
  {
    *(_QWORD *)(Irp + 72) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(Irp + 88) = *(_QWORD *)(a1 + 40);
    v11 = *(void **)(a1 + 48);
  }
  v9->Overlay.AsynchronousParameters.UserApcContext = v11;
  CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*v10;
  if ( (*((_DWORD *)*v10 + 20) & 0x10) != 0 || (*(_DWORD *)(a1 + 112) & 1) != 0 )
    CurrentStackLocation[-1].Flags = 4;
  v9->AssociatedIrp.MasterIrp = 0LL;
  v9->MdlAddress = 0LL;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( (v13 & 4) != 0 )
  {
    v25 = *(_DWORD *)(a1 + 72);
    if ( v25 )
    {
      v15 = (const void **)(a1 + 64);
      if ( *(_QWORD *)(a1 + 128) )
      {
        v9->AssociatedIrp.MasterIrp = (struct _IRP *)*v15;
        v9->Flags |= 0x10u;
        v9->UserBuffer = (PVOID)*v15;
      }
      else
      {
        Pool2 = (struct _IRP *)ExAllocatePool2(105LL, v25, 1112764233LL);
        v9->AssociatedIrp.MasterIrp = Pool2;
        memmove(Pool2, *v15, *(unsigned int *)(a1 + 72));
        v9->Flags |= 0x30u;
      }
      goto LABEL_15;
    }
    v9->Flags |= 0x10u;
    goto LABEL_64;
  }
  if ( (v13 & 0x10) != 0 )
  {
    v21 = *(_DWORD *)(a1 + 72);
    if ( v21 )
    {
      v15 = (const void **)(a1 + 64);
      Mdl = IopAllocateMdl(*(_QWORD *)(a1 + 64), v21, 0, v8, (__int64)v9, 0);
      if ( !Mdl )
        RtlRaiseStatus(3221225626LL);
      if ( *(_QWORD *)(a1 + 128) )
        v24 = 0;
      else
        v24 = *(unsigned __int8 *)(a1 + 8);
      IopProbeAndLockPages_0(Mdl, v24, v23, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      goto LABEL_15;
    }
LABEL_64:
    v15 = (const void **)(a1 + 64);
    goto LABEL_15;
  }
  v9->UserBuffer = *(PVOID *)(a1 + 64);
  v14 = *(PMDL **)(a1 + 120);
  v15 = (const void **)(a1 + 64);
  if ( v14 )
  {
    v15 = (const void **)(a1 + 64);
    if ( *v14 )
    {
      v9->MdlAddress = *v14;
      **(_QWORD **)(a1 + 120) = 0LL;
      v15 = (const void **)(a1 + 64);
      if ( *(_QWORD *)(a1 + 96) )
      {
        v9->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v9->Overlay.AsynchronousParameters.UserApcContext | 1);
        goto LABEL_64;
      }
    }
  }
LABEL_15:
  v9->Flags |= 0x200u;
  Flags = v9->Flags;
  if ( (*((_DWORD *)*v10 + 20) & 8) != 0 )
  {
    Flags |= 1u;
    v9->Flags = Flags;
  }
  if ( *(_BYTE *)(a1 + 10) )
    v9->Flags = Flags | 0x800;
  if ( !*(_QWORD *)(a1 + 128)
    || (v9->RequestorMode = 0,
        v9->UserBuffer = (PVOID)*v15,
        v4 = IopSetCopyInformationExtension(v9, *(_QWORD *)(a1 + 128)),
        v4 >= 0) )
  {
    CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
    CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
    v17 = (_DWORD *)*((_QWORD *)*v10 + 26);
    if ( v17 )
    {
      if ( (*v17 & 0x10) != 0 )
        CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
    }
  }
  v18 = v36;
  if ( v4 >= 0 )
  {
    *v34 = v9;
    return (unsigned int)v4;
  }
LABEL_57:
  v31 = *(_BYTE *)(a1 + 9);
  if ( v9 )
  {
    IopExceptionCleanupEx(*v10, v9, *v18, 0LL, v31);
  }
  else
  {
    if ( v31 )
      IopReleaseFileObjectLock(*v10);
    if ( *v18 )
    {
      ObfDereferenceObjectWithTag(*v18, 0x746C6644u);
      *v18 = 0LL;
    }
    ObfDereferenceObjectWithTag(*v10, 0x746C6644u);
    *v10 = 0LL;
  }
  return (unsigned int)v4;
}
