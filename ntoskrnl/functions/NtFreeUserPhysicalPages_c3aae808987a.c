NTSTATUS __fastcall NtFreeUserPhysicalPages(HANDLE Handle, unsigned __int64 *a2, void *a3)
{
  unsigned __int64 *v3; // r12
  int v5; // ebx
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  NTSTATUS result; // eax
  __int64 v10; // rsi
  PMDL v11; // r14
  unsigned __int64 v12; // r10
  __int64 v13; // r13
  _KPROCESS *v14; // rdi
  int v15; // esi
  __int64 AwePageSize; // rcx
  IRP *Irp; // r10
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  struct _MDL *v20; // rcx
  struct _KTHREAD *v21; // rax
  __int64 ByteOffset; // rax
  __int64 v23; // r8
  int v24; // r9d
  unsigned __int64 v25; // rcx
  __int64 ProcessPartition; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  __int16 v29; // ax
  bool v30; // zf
  char v31; // al
  __int64 v32; // rax
  void *v33; // rcx
  KPROCESSOR_MODE v34; // [rsp+30h] [rbp-1128h]
  PVOID Object; // [rsp+38h] [rbp-1120h] BYREF
  __int64 v36; // [rsp+40h] [rbp-1118h]
  __int64 v37; // [rsp+48h] [rbp-1110h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-1108h]
  void *Src; // [rsp+58h] [rbp-1100h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-10F8h]
  unsigned __int64 *v41; // [rsp+68h] [rbp-10F0h]
  _KPROCESS *Process; // [rsp+70h] [rbp-10E8h]
  unsigned __int64 v43; // [rsp+78h] [rbp-10E0h]
  _QWORD *v44; // [rsp+80h] [rbp-10D8h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-10D0h]
  __int64 ByteCount; // [rsp+90h] [rbp-10C8h]
  __int64 AweInfoPartition; // [rsp+98h] [rbp-10C0h]
  __int64 v48; // [rsp+A0h] [rbp-10B8h]
  $115DCDF994C6370D29323EAB0E0C9502 v49; // [rsp+B0h] [rbp-10A8h] BYREF
  _BYTE Mdl[4144]; // [rsp+E0h] [rbp-1078h] BYREF

  Src = a3;
  v3 = a2;
  v41 = a2;
  memset(&v49, 0, sizeof(v49));
  memset(Mdl, 0, sizeof(Mdl));
  Object = 0LL;
  v37 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v34 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)v3;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    v7 = *v3;
    v38 = *v3;
    *v3 = 0LL;
  }
  else
  {
    v7 = *v3;
    v38 = *v3;
  }
  if ( !v7 )
    return -1073741584;
  v10 = 0LL;
  v36 = 0LL;
  v11 = (PMDL)Mdl;
  v44 = 0LL;
  result = MiReferenceAweHandle(Handle, 2u, PreviousMode, &Object, &v37);
  v12 = 0LL;
  if ( result >= 0 )
  {
    v13 = v37;
    if ( v37 )
    {
      v10 = *(_QWORD *)(MiSectionControlArea(v37) + 8);
      v36 = v10;
    }
    else
    {
      v14 = (_KPROCESS *)Object;
      if ( Object )
        goto LABEL_14;
      v5 = 4;
    }
    v14 = Process;
    Object = Process;
LABEL_14:
    v43 = v12;
    if ( v10 || (v10 = *(_QWORD *)(v14[1].ActiveProcessors.StaticBitmap[28] + 376), (v36 = v10) != 0) )
    {
      AwePageSize = MiGetAwePageSize(v10);
      v45 = AwePageSize;
      v11 = (PMDL)Irp;
      v18 = 512LL;
      if ( v7 > 0x200 )
      {
        v19 = 786432LL;
        if ( AwePageSize != 1 )
          v19 = 0xFFFFFLL;
        v18 = v7;
        if ( v7 > v19 )
          v18 = v19;
        while ( v18 > 0x200 )
        {
          v11 = IoAllocateMdl(0LL, (_DWORD)v18 << 12, 0, 0, Irp);
          Irp = 0LL;
          if ( v11 )
          {
            v5 |= 8u;
            break;
          }
          v18 >>= 1;
        }
      }
      if ( !v11 )
      {
        v11 = (PMDL)Mdl;
        v18 = 512LL;
      }
      while ( 1 )
      {
        if ( v7 < v18 )
          v18 = v7;
        v11->Next = (struct _MDL *)Irp;
        v11->Size = 8 * ((((v18 << 12) + 4095) >> 12) + 6);
        v11->MdlFlags = (__int16)Irp;
        v11->StartVa = Irp;
        v11->ByteOffset = (unsigned int)Irp;
        v11->ByteCount = (_DWORD)v18 << 12;
        v5 &= ~1u;
        v20 = v11 + 1;
        if ( v34 == (_BYTE)Irp )
        {
          memmove(v20, Src, 8 * v18);
        }
        else
        {
          v15 = MiCaptureUlongPtrArray(v20, (unsigned int *)Src, v18);
          if ( v15 < 0 )
            goto LABEL_67;
          v10 = v36;
        }
        v21 = CurrentThread;
        if ( CurrentThread->ApcState.Process != v14 )
        {
          KiStackAttachProcess(v14, 0, (__int64)&v49);
          v5 |= 1u;
          v21 = CurrentThread;
        }
        if ( !v13 )
        {
          LOCK_ADDRESS_SPACE((__int64)v21, (__int64)v14);
          if ( (v14[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            break;
        }
        v15 = MiFreePhysicalPages(v10, (unsigned int *)v11, (__int64 *)&v44);
        ByteOffset = v11->ByteOffset;
        v48 = ByteOffset;
        Irp = 0LL;
        if ( ByteOffset )
        {
          if ( !v13 )
            MiReturnProcessCommitment((__int64)v14, v45 * (unsigned int)ByteOffset);
          v43 += ByteOffset;
        }
        if ( !v13 )
        {
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v14);
          Irp = 0LL;
        }
        ByteCount = v11->ByteCount;
        if ( ByteCount )
        {
          AweInfoPartition = MiGetAweInfoPartition(v36);
          if ( v44 )
          {
            MiFreePhysicalPageChain(v23, v44);
          }
          else
          {
            v11->MdlFlags |= 2u;
            v11->ByteCount = v24 << 12;
            MiPreparePhysicalPagesMdlForFree((__int64)v11, v45);
            MiFreePagesFromMdl((ULONG_PTR)v11, 0);
            v25 = -ByteCount;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 17832), -ByteCount);
            v13 = v37;
            if ( !v37 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 254, v25);
              v13 = v37;
            }
            ProcessPartition = MiGetProcessPartition((__int64)Process);
            if ( v28 != ProcessPartition )
              MiReturnCrossPartitionCharges(v28, 4, 1, v27);
            v14 = (_KPROCESS *)Object;
            v7 = v38;
          }
          Irp = 0LL;
        }
        v7 -= v48;
        v38 = v7;
        if ( v15 || !v7 )
          goto LABEL_67;
        if ( (v5 & 1) != 0 )
        {
          KiUnstackDetachProcess(&v49);
          v5 &= ~1u;
          Irp = 0LL;
        }
        if ( (IRP *)v14[1].Affinity.StaticBitmap[30] == Irp )
          goto LABEL_64;
        v29 = WORD2(v14[2].Affinity.StaticBitmap[20]);
        if ( v29 == 332 || (v30 = v29 == 452, v31 = (char)Irp, v30) )
          v31 = 1;
        v30 = v31 == 0;
        v32 = 4LL;
        if ( v30 )
LABEL_64:
          v32 = 8LL;
        Src = (char *)Src + v18 * v32;
        v10 = v36;
      }
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)v14);
      v15 = -1073741558;
LABEL_67:
      v3 = v41;
    }
    else
    {
      v15 = -1073741585;
    }
    if ( (v5 & 8) != 0 )
    {
      v11->MdlFlags &= ~2u;
      IoFreeMdl(v11);
    }
    if ( (v5 & 1) != 0 )
      KiUnstackDetachProcess(&v49);
    if ( (v5 & 4) == 0 )
    {
      v33 = (void *)v13;
      if ( !v13 )
        v33 = v14;
      ObfDereferenceObjectWithTag(v33, 0x68506D4Du);
    }
    *v3 = v43;
    return v15;
  }
  return result;
}
