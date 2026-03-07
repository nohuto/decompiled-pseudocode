__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        __int64 *a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // si
  __int64 v8; // r15
  unsigned __int64 HandlePointer; // r13
  PKWAIT_BLOCK v10; // r12
  int v11; // edi
  unsigned __int64 v12; // rbx
  struct _KWAIT_BLOCK *Pool2; // rax
  struct _KTHREAD *CurrentThread; // r14
  struct _EX_RUNDOWN_REF *Process; // rcx
  unsigned __int64 v16; // rcx
  __int64 *v17; // r9
  __int64 v18; // r12
  __int64 v19; // rbx
  ULONG_PTR v20; // r14
  __int64 v21; // r15
  __int64 *v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int128 v27; // rt0
  unsigned __int8 v28; // tt
  int v29; // eax
  unsigned __int64 v30; // r14
  struct _OBJECT_TYPE *v31; // rsi
  WAIT_TYPE v32; // ecx
  __int64 DefaultObject; // rbx
  ULONG v34; // r15d
  bool v35; // zf
  char v36; // r13
  unsigned int v37; // esi
  struct _EX_RUNDOWN_REF *v38; // r15
  PVOID *v39; // rbx
  int v41; // eax
  void **v42; // r9
  unsigned int v43; // r10d
  unsigned int v44; // ecx
  PVOID v45; // r8
  __int64 v46; // rbx
  PVOID v47; // rdx
  unsigned __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rax
  void *v51; // rsp
  __int64 *v52; // rbx
  int v53; // r8d
  signed __int32 v54[8]; // [rsp+0h] [rbp-40h] BYREF
  char v55; // [rsp+40h] [rbp+0h] BYREF
  char v56; // [rsp+41h] [rbp+1h]
  char v57; // [rsp+42h] [rbp+2h]
  BOOLEAN v58; // [rsp+43h] [rbp+3h]
  WAIT_TYPE WaitType; // [rsp+44h] [rbp+4h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v61; // [rsp+50h] [rbp+10h]
  struct _KTHREAD *v62; // [rsp+58h] [rbp+18h]
  __int128 v63; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v64; // [rsp+70h] [rbp+30h]
  ULONG Count; // [rsp+78h] [rbp+38h]
  unsigned int v66; // [rsp+7Ch] [rbp+3Ch]
  int v67; // [rsp+80h] [rbp+40h]
  unsigned __int64 v68; // [rsp+88h] [rbp+48h]
  unsigned __int64 v69; // [rsp+90h] [rbp+50h]
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v72; // [rsp+A8h] [rbp+68h]
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v74[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v7 = a3;
  v56 = a3;
  v64 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v63 = 0LL;
  memset(v74, 0, sizeof(v74));
  HandlePointer = 0LL;
  memset(Object, 0, sizeof(Object));
  v58 = 0;
  v57 = 0;
  v10 = 0LL;
  WaitBlockArray = 0LL;
  v11 = 0;
  Lookaside = 0LL;
  if ( (unsigned int)v8 > 3 )
  {
    v12 = 48 * v8;
    if ( (unsigned int)v8 > 0xA )
    {
      Lookaside = (PPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside
                                        + 128 * (unsigned __int64)(((int)v8 - 11) / 0xEu));
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocatePool2(64LL, 48 * v8, 1834443343LL);
    }
    v10 = Pool2;
    WaitBlockArray = Pool2;
    if ( Pool2 )
    {
      v57 = 1;
    }
    else
    {
      v58 = KeSetKernelStackSwapEnable(0);
      v50 = v12 + 15;
      if ( v12 + 15 < v12 )
        v50 = 0xFFFFFFFFFFFFFF0LL;
      v51 = alloca(v50 & 0xFFFFFFFFFFFFFFF0uLL);
      v10 = (PKWAIT_BLOCK)&v55;
      WaitBlockArray = (PKWAIT_BLOCK)&v55;
    }
  }
  v55 = 0;
  CurrentThread = KeGetCurrentThread();
  v62 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v61 = Process;
  v72 = Process;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v16 = Process[174].Count;
    v69 = v16;
LABEL_8:
    v17 = v64;
    goto LABEL_9;
  }
  v16 = ObReferenceProcessHandleTable(Process);
  v69 = v16;
  if ( v16 )
  {
    v55 = 1;
    goto LABEL_8;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_8;
  v52 = v64;
  while ( ObpIsKernelHandle(*v52, v7) )
  {
    ++v52;
    if ( v53 + 1 >= (unsigned int)v8 )
    {
      v16 = v69;
LABEL_9:
      v18 = 0LL;
      while ( 2 )
      {
        v19 = 8 * v18;
        v68 = 8 * v18;
        v20 = v17[v18];
        if ( v7 || (v20 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v20 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v21 = v16;
        }
        else
        {
          v20 ^= 0xFFFFFFFF80000000uLL;
          v21 = ObpKernelHandleTable;
        }
        if ( (v20 & 0x3FC) != 0 )
        {
          v22 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v21, v20);
          v23 = v22;
          if ( v22 )
          {
            _m_prefetchw(v22);
            v24 = *v22;
LABEL_15:
            *(_QWORD *)&v63 = v24;
            v25 = v24;
            *((_QWORD *)&v63 + 1) = v23[1];
            while ( (v25 & 0x1FFFE) != 0 )
            {
              if ( (v25 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v21, v23, v25);
                _m_prefetchw(v23);
                v24 = *v23;
                goto LABEL_15;
              }
              *(_QWORD *)&v27 = v25;
              *((_QWORD *)&v27 + 1) = *((_QWORD *)&v63 + 1);
              v28 = _InterlockedCompareExchange128(v23, *((signed __int64 *)&v27 + 1), v25 - 2, (signed __int64 *)&v27);
              v26 = v27;
              v25 = v27;
              v63 = v27;
              if ( v28 )
              {
                if ( (unsigned __int16)(v26 >> 1) == 16 )
                {
                  *(_QWORD *)&v63 = ((unsigned int)v25 ^ (2 * (unsigned int)(v26 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v25;
                  HandlePointer = ExGetHandlePointer((__int64 *)&v63);
                  ObpIncrPointerCountEx((volatile signed __int64 *)HandlePointer, 32752);
                  v49 = ExFastReplenishHandleTableEntry(v23, (signed __int64 *)&v63, 32752);
                  if ( v49 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v49);
                }
                else
                {
                  HandlePointer = ExGetHandlePointer((__int64 *)&v63);
                }
LABEL_21:
                v19 = v68;
                goto LABEL_22;
              }
            }
            if ( ExLockHandleTableEntry(v21, v23) )
            {
              HandlePointer = ExGetHandlePointer(v23);
              v63 = *(_OWORD *)v23;
              v41 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v23);
              ObpIncrPointerCountEx((volatile signed __int64 *)HandlePointer, v41 + 1);
              _InterlockedExchangeAdd64(v23, 1uLL);
              _InterlockedOr(v54, 0);
              if ( *(_QWORD *)(v21 + 48) )
                ExfUnblockPushLock((volatile __int64 *)(v21 + 48), 0LL);
              goto LABEL_21;
            }
            v19 = v68;
          }
        }
        if ( v20 )
          ExHandleLogBadReference(v21, v20, KeGetCurrentThread()->PreviousMode);
        v23 = 0LL;
LABEL_22:
        if ( !v23 )
        {
LABEL_99:
          v37 = -1073741816;
          goto LABEL_100;
        }
        v29 = DWORD2(v63) & 0x1FFFFFF;
        v67 = ++v11;
        v30 = HandlePointer + 48;
        *(_QWORD *)((char *)v74 + v19) = HandlePointer + 48;
        if ( v56 == 1 )
        {
          if ( (~v29 & 0x100000) != 0 )
          {
            v37 = -1073741790;
            goto LABEL_100;
          }
          if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) != 0 )
          {
            v48 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
            if ( *(_BYTE *)(*(_QWORD *)v48 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v48 + 16LL) == 1LL )
              {
                v37 = -1073700858;
LABEL_100:
                CurrentThread = v62;
                v10 = WaitBlockArray;
                goto LABEL_101;
              }
            }
          }
        }
        v31 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
        v32 = WaitType;
        if ( WaitType != WaitAny && v31 == IoCompletionObjectType )
          goto LABEL_99;
        if ( v31 == ExCrossVmMutantObjectType )
        {
          v37 = -1073741788;
          goto LABEL_100;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(HandlePointer, 1, 1u, 0x7457624Fu);
          v32 = WaitType;
        }
        DefaultObject = (__int64)v31->DefaultObject;
        if ( (DefaultObject & 1) != 0 )
        {
          if ( (DefaultObject & 2) != 0 )
          {
            v32 = WaitType;
            if ( (v31->TypeInfo.WaitObjectFlagMask & *(_DWORD *)(v31->TypeInfo.WaitObjectFlagOffset + v30)) == v31->TypeInfo.WaitObjectFlagMask )
            {
              DefaultObject = *(_QWORD *)(v31->TypeInfo.WaitObjectPointerOffset + v30);
            }
            else
            {
              DefaultObject -= 3LL;
LABEL_32:
              DefaultObject += v30;
            }
          }
          else
          {
            DefaultObject = *(_QWORD *)(DefaultObject + v30 - 1);
          }
        }
        else if ( DefaultObject >= 0 )
        {
          goto LABEL_32;
        }
        Object[v68 / 8] = (PVOID)DefaultObject;
        v18 = (unsigned int)(v18 + 1);
        v34 = Count;
        if ( (unsigned int)v18 >= Count )
        {
          if ( v55 )
          {
            v55 = 0;
            ExReleaseRundownProtection_0(v61 + 139);
            v32 = WaitType;
          }
          CurrentThread = v62;
          v35 = v62->KernelApcDisable++ == -1;
          if ( v35
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
            v32 = WaitType;
          }
          v36 = 0;
          v56 = 0;
          if ( v32 == WaitAll && v34 > 1 )
          {
            v42 = &Object[1];
            v43 = 1;
            while ( 2 )
            {
              v44 = v43;
              v45 = *v42;
              do
              {
                v46 = v44 - 1;
                v47 = Object[v46];
                if ( v45 > v47 )
                  break;
                if ( v45 == v47 )
                {
                  v37 = -1073741776;
                  v10 = WaitBlockArray;
                  goto LABEL_102;
                }
                Object[v44--] = v47;
              }
              while ( (_DWORD)v46 );
              Object[v44] = v45;
              ++v43;
              ++v42;
              if ( v43 < v34 )
                continue;
              break;
            }
            v32 = WaitType;
          }
          v10 = WaitBlockArray;
          v37 = KeWaitForMultipleObjects(v34, Object, v32, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v66 = v37;
          v38 = v61;
          goto LABEL_41;
        }
        v7 = v56;
        v16 = v69;
        v17 = v64;
        continue;
      }
    }
  }
  v37 = -1073741558;
LABEL_101:
  v36 = 1;
LABEL_102:
  v38 = v61;
LABEL_41:
  if ( v11 )
  {
    v39 = (PVOID *)&v74[v11];
    do
    {
      ObfDereferenceObjectWithTag(*--v39, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
  }
  if ( v36 )
  {
    if ( v55 )
      ExReleaseRundownProtection_0(v38 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( v10 )
  {
    if ( v57 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v10);
      else
        ExFreePoolWithTag(v10, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v58);
    }
  }
  return v37;
}
