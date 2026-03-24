/*
 * XREFs of NtQueryKey @ 0x140645C90
 * Callers:
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1407709CC (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5E54 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1408A7B94 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C020 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140956140 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall NtQueryKey(HANDLE Handle, unsigned int a2, _OWORD *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v12; // cl
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _KTHREAD *v18; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned __int16 *v20; // r15
  int v21; // eax
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  void *v24; // rcx
  unsigned int v26; // r15d
  unsigned int v27; // eax
  int Key; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v30; // [rsp+40h] [rbp-198h]
  KPROCESSOR_MODE v31; // [rsp+44h] [rbp-194h]
  char v32; // [rsp+45h] [rbp-193h]
  char v33; // [rsp+46h] [rbp-192h]
  BOOLEAN v34; // [rsp+47h] [rbp-191h]
  size_t Size; // [rsp+50h] [rbp-188h] BYREF
  PVOID Object; // [rsp+58h] [rbp-180h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  PADAPTER_OBJECT v38; // [rsp+68h] [rbp-170h] BYREF
  __int64 v39; // [rsp+70h] [rbp-168h]
  _QWORD v40[2]; // [rsp+78h] [rbp-160h] BYREF
  PVOID v41; // [rsp+88h] [rbp-150h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-148h] BYREF
  PADAPTER_OBJECT v43; // [rsp+98h] [rbp-140h] BYREF
  int v44; // [rsp+A0h] [rbp-138h]
  int v45; // [rsp+A4h] [rbp-134h]
  _QWORD *v46; // [rsp+A8h] [rbp-130h]
  int v47; // [rsp+B0h] [rbp-128h]
  __int128 v48; // [rsp+B4h] [rbp-124h]
  __int64 v49; // [rsp+C4h] [rbp-114h]
  int v50; // [rsp+CCh] [rbp-10Ch]
  _QWORD v51[8]; // [rsp+D0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-C8h] BYREF
  char v53; // [rsp+120h] [rbp-B8h]
  _BYTE v54[71]; // [rsp+121h] [rbp-B7h] BYREF
  _OWORD v55[2]; // [rsp+170h] [rbp-68h] BYREF

  v5 = a4;
  Size = a4;
  HandleInformation = 0LL;
  memset(v54, 0, sizeof(v54));
  memset(v55, 0, sizeof(v55));
  v39 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v55, 0x20000LL, v9, v10);
  v32 = 0;
  v33 = 0;
  DmaAdapter = 0LL;
  memset(v51, 0, sizeof(v51));
  *(_OWORD *)Src = 0LL;
  v53 = 0;
  v40[1] = v40;
  v40[0] = v40;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v34 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v34 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Key = -1073741431;
LABEL_34:
    v30 = Key;
    goto LABEL_35;
  }
  if ( a2 > 8 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v41 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v41, 0LL) >= 0 )
        {
          v39 = *((_QWORD *)v41 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v41);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v31 = v12;
  if ( v12 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v13 = (unsigned __int64)a3;
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (unsigned __int64)a3 + v5 - 1;
      if ( (unsigned __int64)a3 > v14 || v14 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v13 = *(_BYTE *)v13;
        v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v13 != v15 );
    }
    v16 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v12 = 1;
  }
  Object = 0LL;
  Key = ObReferenceObjectByHandle(
          Handle,
          ((a2 - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v12,
          &Object,
          &HandleInformation);
  v17 = Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v30 = Key;
  if ( Key < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( a2 != 4 )
    {
      Key = -1073741816;
      goto LABEL_34;
    }
    *a5 = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v30 = -1073741789;
      goto LABEL_35;
    }
    *a3 = 0LL;
    a3[1] = 0LL;
    *((_QWORD *)a3 + 4) = 0LL;
    *((_DWORD *)a3 + 5) = *(_DWORD *)(v17[1] + 96LL);
    goto LABEL_33;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    v39 = *((_QWORD *)Object + 1);
  if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v33 = 1;
  if ( !CmpCallBackCount )
  {
    v20 = (unsigned __int16 *)Object;
    goto LABEL_29;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v20 = (unsigned __int16 *)Object;
  if ( !IsResourceAcquiredSharedLite )
  {
    v51[0] = Object;
    LODWORD(v51[1]) = a2;
    v51[2] = a3;
    LODWORD(v51[3]) = Size;
    v51[4] = a5;
    v21 = CmpCallCallBacksEx(7u, (__int64)v51, 0LL, 1, 0x16u, (__int64)Object, (__int64)v40);
    Key = v21;
    v30 = v21;
    if ( v21 >= 0 )
    {
      v32 = 1;
      goto LABEL_29;
    }
    if ( v21 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
    goto LABEL_34;
  }
LABEL_29:
  if ( a2 == 7 )
  {
    *a5 = 4;
    if ( (unsigned int)Size < 4 )
    {
      Key = -1073741789;
      v30 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)a3 = v20[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, (unsigned __int8)v31, ((a2 - 3) & 0xFFFFFFFB) != 0, &v38);
  v30 = Key;
  if ( Key >= 0 )
  {
    v26 = Size;
    Key = CmpBounceContextStart((__int64)Src, a3, (unsigned int)Size, v31, 2);
    v30 = Key;
    if ( Key >= 0 )
    {
      Key = CmQueryKey((__int64)DmaAdapter, (__int64)v38, a2, (unsigned int *)Src[1], Size, (unsigned int *)&Size + 1);
      v30 = Key;
      if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
      {
        v27 = HIDWORD(Size);
        *a5 = HIDWORD(Size);
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)Size >= v27 )
            v26 = v27;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v26);
        }
      }
    }
  }
LABEL_35:
  if ( v38 )
    HalPutDmaAdapter(v38);
  if ( v32 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v40[0] != v40 )
    {
      v45 = 0;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0;
      v43 = DmaAdapter;
      v44 = Key;
      v47 = Key;
      v46 = v51;
      CmpCallCallBacksEx(0x16u, (__int64)&v43, 0LL, 0, 0x16u, (__int64)DmaAdapter, (__int64)v40);
      Key = v47;
    }
    v30 = Key;
  }
  if ( v33 )
  {
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable++ == -1;
    if ( v23
      && ($C459BD0D405E8E46662177FB3D0A143F *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v22);
    }
    Key = v30;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  v24 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v54 )
  {
    if ( (v53 & 1) != 0 )
    {
      ++dword_140CDB91C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB910 )
      {
        ++dword_140CDB920;
        ((void (__fastcall *)(void *, union _SLIST_HEADER *))qword_140CDB938)(Src[1], &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src[1]);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v24) = 13;
    (*(void (__fastcall **)(void *, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v24,
      v55,
      (unsigned int)Key,
      a2,
      v39,
      0LL);
  }
  if ( v34 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v30;
  }
  return (unsigned int)Key;
}
