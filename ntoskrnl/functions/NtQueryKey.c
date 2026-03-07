__int64 __fastcall NtQueryKey(HANDLE Handle, unsigned int a2, unsigned __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r13
  KPROCESSOR_MODE v9; // cl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  NTSTATUS Key; // ebx
  _QWORD *v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v17; // r14
  int v18; // eax
  unsigned int v20; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v22; // rcx
  KPROCESSOR_MODE v23; // [rsp+40h] [rbp-1A8h]
  char v24; // [rsp+41h] [rbp-1A7h]
  char v25; // [rsp+42h] [rbp-1A6h]
  char v26; // [rsp+43h] [rbp-1A5h]
  PVOID v27; // [rsp+48h] [rbp-1A0h] BYREF
  int v28; // [rsp+50h] [rbp-198h]
  ACCESS_MASK v29; // [rsp+54h] [rbp-194h]
  unsigned int v30; // [rsp+58h] [rbp-190h] BYREF
  PVOID v31; // [rsp+60h] [rbp-188h] BYREF
  PVOID Object; // [rsp+68h] [rbp-180h] BYREF
  PVOID v33; // [rsp+70h] [rbp-178h] BYREF
  __int64 v34; // [rsp+78h] [rbp-170h]
  _QWORD v35[2]; // [rsp+80h] [rbp-168h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-158h] BYREF
  __int128 v37; // [rsp+98h] [rbp-150h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-140h] BYREF
  __int128 *v39; // [rsp+B8h] [rbp-130h]
  NTSTATUS v40; // [rsp+C0h] [rbp-128h]
  __int128 v41; // [rsp+C4h] [rbp-124h]
  __int64 v42; // [rsp+D4h] [rbp-114h]
  int v43; // [rsp+DCh] [rbp-10Ch]
  __int128 v44[4]; // [rsp+E0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-C8h] BYREF
  char v46; // [rsp+130h] [rbp-B8h]
  _BYTE v47[71]; // [rsp+131h] [rbp-B7h] BYREF
  _OWORD v48[2]; // [rsp+180h] [rbp-68h] BYREF

  v5 = a4;
  LODWORD(v27) = a2;
  v37 = 0LL;
  HandleInformation = 0LL;
  v29 = 0;
  v30 = 0;
  memset(v47, 0, sizeof(v47));
  memset(v48, 0, sizeof(v48));
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v48, 0x20000LL);
  v24 = 0;
  v25 = 0;
  v31 = 0LL;
  memset(v44, 0, sizeof(v44));
  *(_OWORD *)Src = 0LL;
  v46 = 0;
  v35[1] = v35;
  v35[0] = v35;
  CmpInitializeThreadInfo((__int64)&v37);
  v33 = 0LL;
  v26 = CmpAcquireShutdownRundown();
  if ( !v26 )
  {
    Key = -1073741431;
    goto LABEL_33;
  }
  if ( a2 > 8 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v27 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v27, 0LL) >= 0 )
        {
          v34 = *((_QWORD *)v27 + 1);
          ObfDereferenceObject(v27);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_33;
  }
  v9 = KeGetCurrentThread()->PreviousMode;
  v23 = v9;
  if ( v9 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v10 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a3 + v5 - 1;
      if ( a3 > v11 || v11 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
    v13 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v9 = 1;
  }
  v29 = ((a2 - 3) & 0xFFFFFFFB) != 0;
  Object = 0LL;
  Key = ObReferenceObjectByHandle(Handle, v29, (POBJECT_TYPE)CmKeyObjectType, v9, &Object, &HandleInformation);
  v15 = Object;
  v31 = Object;
  if ( Key < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( a2 != 4 )
    {
      Key = -1073741816;
      goto LABEL_33;
    }
    *a5 = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v28 = -1073741789;
      goto LABEL_33;
    }
    *(_OWORD *)a3 = 0LL;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(v15[1] + 96LL);
LABEL_32:
    Key = 0;
    goto LABEL_33;
  }
  if ( CmpTraceRoutine )
    v34 = *((_QWORD *)Object + 1);
  if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_33;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    v17 = (unsigned __int16 *)Object;
    goto LABEL_28;
  }
  v17 = (unsigned __int16 *)Object;
  *(_QWORD *)&v44[0] = Object;
  DWORD2(v44[0]) = a2;
  *(_QWORD *)&v44[1] = a3;
  DWORD2(v44[1]) = v5;
  *(_QWORD *)&v44[2] = a5;
  v18 = CmpCallCallBacksEx(7u, v44, 0LL, 1, 0x16u, (__int64)Object, (__int64)v35);
  Key = v18;
  if ( v18 < 0 )
  {
    if ( v18 != -1073740541 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v24 = 1;
LABEL_28:
  if ( a2 == 7 )
  {
    *a5 = 4;
    if ( (unsigned int)v5 < 4 )
    {
      Key = -1073741789;
      v28 = -1073741789;
      goto LABEL_33;
    }
    *(_DWORD *)a3 = v17[25];
    goto LABEL_32;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&v31, (unsigned __int8)v23, v29, &v33);
  if ( Key >= 0 )
  {
    Key = CmpBounceContextStart(Src, a3, v5, (unsigned int)v23, 2);
    if ( Key >= 0 )
    {
      Key = CmQueryKey((_DWORD)v31, (_DWORD)v33, v5, (__int64)&v30);
      if ( Key >= 0 || Key == -1073741789 || Key == -2147483643 )
      {
        v20 = v30;
        *a5 = v30;
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)v5 >= v20 )
            LODWORD(v5) = v20;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], (unsigned int)v5);
        }
      }
    }
  }
LABEL_33:
  if ( v33 )
    ObfDereferenceObject(v33);
  if ( v24 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v35[0] != v35 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0;
    *(_QWORD *)&v38 = v31;
    *((_QWORD *)&v38 + 1) = (unsigned int)Key;
    v40 = Key;
    v39 = v44;
    CmpCallCallBacksEx(0x16u, &v38, 0LL, 0, 0x16u, (__int64)v31, (__int64)v35);
    Key = v40;
  }
  if ( v25 )
    KeLeaveCriticalRegion();
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v47 )
  {
    if ( (v46 & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, Src[1]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  }
  if ( CmpTraceRoutine )
  {
    v22 = v34;
    LOBYTE(v22) = 13;
    CmpTraceRoutine(v22, v48, (unsigned int)Key, a2, v34, 0LL);
  }
  if ( v26 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v37);
  return (unsigned int)Key;
}
