__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        ULONG Tag,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v11; // ecx
  _KPROCESS *Process; // rdi
  unsigned __int64 v14; // rbx
  signed __int64 *v15; // rax
  signed __int64 *v16; // rsi
  signed __int64 v17; // rbp
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  unsigned __int64 HandlePointer; // rbx
  unsigned __int8 v23; // al
  int v24; // r11d
  int v25; // ebp
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  char v28; // r10
  int v29; // eax
  int v31; // edi
  PVOID v32; // r8
  unsigned int v33; // edi
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  signed __int64 v37; // rbx
  ULONG_PTR v38; // rdi
  signed __int64 BugCheckParameter4; // rbx
  int v40; // ecx
  _QWORD *HandleExtraInfo; // rax
  signed __int32 v42[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v43[3]; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v44; // [rsp+90h] [rbp+8h]
  char v48; // [rsp+B8h] [rbp+30h]
  __int64 v49; // [rsp+C8h] [rbp+40h]

  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v48 = 0;
  Process = CurrentThread->ApcState.Process;
  v44 = (struct _EX_RUNDOWN_REF *)Process;
  *a6 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 != PsProcessType && a3 )
        return 3221225508LL;
      v38 = (ULONG_PTR)CurrentThread->ApcState.Process;
      if ( (a2 & 0xFFE00000) != 0 && a4 )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        if ( a7 )
        {
          a7[1] = 0x1FFFFF;
          *a7 = 0;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v38 - 48, 1, 1u, Tag);
          v11 = 0;
        }
        BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v38 - 48));
        if ( BugCheckParameter4 <= 1 )
          KeBugCheckEx(0x18u, 0LL, v38, 0x10uLL, BugCheckParameter4);
        *a6 = v38;
      }
      return v11;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((__int64)&CurrentThread[-1].SystemAffinityTokenListHead, 1, 1u, Tag);
            v11 = 0;
          }
          v37 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead);
          if ( v37 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v37);
          *a6 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v11;
    }
    if ( a4 )
      return 3221225480LL;
    v14 = ObpKernelHandleTable;
    BugCheckParameter1 ^= 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    v49 = v14;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_111:
      v33 = -1073741816;
      goto LABEL_80;
    }
    v14 = Process[1].Affinity.StaticBitmap[28];
  }
  else
  {
    v14 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Process);
    v48 = 1;
  }
  v49 = v14;
  if ( !v14 )
    goto LABEL_111;
  if ( v14 == ObpKernelHandleTable )
  {
LABEL_83:
    v33 = -1073741816;
    goto LABEL_78;
  }
LABEL_10:
  if ( (BugCheckParameter1 & 0x3FC) == 0
    || (v15 = (signed __int64 *)ExpLookupHandleTableEntry(v14, BugCheckParameter1), (v16 = v15) == 0LL) )
  {
LABEL_81:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(v14, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    goto LABEL_83;
  }
  _m_prefetchw(v15);
  v17 = v15[1];
  v43[0] = *v15;
  v18 = v43[0];
  v43[1] = v17;
  if ( (v43[0] & 0x1FFFE) == 0 )
    goto LABEL_45;
  while ( 1 )
  {
    if ( (v18 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v14, v16, v18);
      _m_prefetchw(v16);
      v17 = v16[1];
      v43[0] = *v16;
      v18 = v43[0];
      v43[1] = v17;
      goto LABEL_72;
    }
    *(_QWORD *)&v20 = v18;
    *((_QWORD *)&v20 + 1) = v17;
    v21 = _InterlockedCompareExchange128(v16, v17, v18 - 2, (signed __int64 *)&v20);
    v19 = v20;
    v18 = v20;
    *(_OWORD *)v43 = v20;
    v17 = *((_QWORD *)&v20 + 1);
    if ( v21 )
      break;
    v14 = v49;
LABEL_72:
    if ( (v18 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_45:
        while ( 1 )
        {
          _m_prefetchw(v16);
          v34 = *v16;
          if ( (*v16 & 1) != 0 )
            break;
          if ( !v34 )
            goto LABEL_81;
          ExpBlockOnLockedHandleEntry(v14, v16, v34);
        }
      }
      while ( v34 != _InterlockedCompareExchange64(v16, v34 - 1, v34) );
      HandlePointer = ExGetHandlePointer(v16);
      *(_OWORD *)v43 = *(_OWORD *)v16;
      v35 = (int)(ExSlowReplenishHandleTableEntry((unsigned __int64 *)v16) + 1);
      v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v35);
      if ( v36 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v35 + v36);
      _InterlockedExchangeAdd64(v16, 1uLL);
      _InterlockedOr(v42, 0);
      if ( *(_QWORD *)(v49 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v49 + 48), 0LL);
      goto LABEL_50;
    }
  }
  if ( (unsigned __int16)(v19 >> 1) != 16 )
  {
    HandlePointer = ExGetHandlePointer(v43);
    goto LABEL_17;
  }
  v43[0] = ((unsigned int)v18 ^ (2 * (unsigned int)(v19 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v18;
  HandlePointer = ExGetHandlePointer(v43);
  ObpIncrPointerCountEx((volatile signed __int64 *)HandlePointer, 32752);
  v40 = ExFastReplenishHandleTableEntry(v16, v43, 32752);
  if ( v40 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v40);
LABEL_50:
  LODWORD(v17) = v43[1];
  v18 = v43[0];
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(HandlePointer, 1, 1u, Tag);
  v23 = ObHeaderCookie ^ *(_BYTE *)(HandlePointer + 24) ^ BYTE1(HandlePointer);
  if ( !a3 || *(_BYTE *)(a3 + 40) != v23 )
  {
    v32 = (PVOID)ObTypeIndexTable[v23];
    if ( !v32 || v32 == MmBadPointer )
      KeBugCheckEx(0x189u, HandlePointer, (ULONG_PTR)v32, 0LL, 0LL);
    if ( a3 )
    {
      v33 = -1073741788;
      goto LABEL_77;
    }
  }
  v24 = a2;
  v25 = v17 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_27;
  if ( (~v25 & a2) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_77;
  }
  if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) == 0
    || (v26 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F],
        !*(_BYTE *)(*(_QWORD *)v26 + 24LL)) )
  {
LABEL_27:
    v27 = v18 >> 17;
    if ( a7 )
    {
      v31 = v27 & 7;
      a7[1] = v25;
      *a7 = v31;
      if ( (v31 & 4) == 0 )
        goto LABEL_29;
    }
    else if ( (v27 & 4) == 0 )
    {
LABEL_29:
      v28 = 0;
      goto LABEL_30;
    }
    v28 = 1;
LABEL_30:
    v29 = v49;
    if ( a8 && *(_DWORD *)(v49 + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v49, BugCheckParameter1);
      if ( HandleExtraInfo )
        *a8 = *HandleExtraInfo;
      v29 = v49;
    }
    if ( v28 && v24 && !(unsigned __int8)ObpAuditObjectAccess(v29, BugCheckParameter1, (_DWORD)v16, HandlePointer, v24) )
    {
      v33 = -1073741816;
      goto LABEL_77;
    }
    *a6 = HandlePointer + 48;
    if ( v48 )
      ExReleaseRundownProtection_0(v44 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v26 + 16LL) != 1LL )
  {
    v18 = v43[0];
    goto LABEL_27;
  }
  v33 = -1073700858;
LABEL_77:
  ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), Tag);
LABEL_78:
  if ( v48 )
    ExReleaseRundownProtection_0(v44 + 139);
LABEL_80:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v33;
}
