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

NTSTATUS __cdecl NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v10; // cl
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KTHREAD *v16; // rax
  ULONG IsResourceAcquiredSharedLite; // eax
  unsigned __int16 *v18; // r15
  int v19; // eax
  struct _KTHREAD *v20; // rcx
  bool v21; // zf
  void *v22; // rcx
  unsigned int v24; // r15d
  unsigned int v25; // eax
  NTSTATUS Key; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v28; // [rsp+40h] [rbp-198h]
  KPROCESSOR_MODE v29; // [rsp+44h] [rbp-194h]
  char v30; // [rsp+45h] [rbp-193h]
  char v31; // [rsp+46h] [rbp-192h]
  BOOLEAN v32; // [rsp+47h] [rbp-191h]
  size_t Size; // [rsp+50h] [rbp-188h] BYREF
  PVOID Object; // [rsp+58h] [rbp-180h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  PADAPTER_OBJECT v36; // [rsp+68h] [rbp-170h] BYREF
  __int64 v37; // [rsp+70h] [rbp-168h]
  _QWORD v38[2]; // [rsp+78h] [rbp-160h] BYREF
  PVOID v39; // [rsp+88h] [rbp-150h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-148h] BYREF
  PADAPTER_OBJECT v41; // [rsp+98h] [rbp-140h] BYREF
  NTSTATUS v42; // [rsp+A0h] [rbp-138h]
  int v43; // [rsp+A4h] [rbp-134h]
  _QWORD *v44; // [rsp+A8h] [rbp-130h]
  NTSTATUS v45; // [rsp+B0h] [rbp-128h]
  __int128 v46; // [rsp+B4h] [rbp-124h]
  __int64 v47; // [rsp+C4h] [rbp-114h]
  int v48; // [rsp+CCh] [rbp-10Ch]
  _QWORD v49[8]; // [rsp+D0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-C8h] BYREF
  char v51; // [rsp+120h] [rbp-B8h]
  _BYTE v52[71]; // [rsp+121h] [rbp-B7h] BYREF
  _OWORD v53[2]; // [rsp+170h] [rbp-68h] BYREF

  v5 = Length;
  Size = Length;
  HandleInformation = 0LL;
  memset(v52, 0, sizeof(v52));
  memset(v53, 0, sizeof(v53));
  v37 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v53, 0x20000u);
  v30 = 0;
  v31 = 0;
  DmaAdapter = 0LL;
  memset(v49, 0, sizeof(v49));
  *(_OWORD *)Src = 0LL;
  v51 = 0;
  v38[1] = v38;
  v38[0] = v38;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v32 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v32 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    Key = -1073741431;
LABEL_34:
    v28 = Key;
    goto LABEL_35;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v39 = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v39, 0LL) >= 0 )
        {
          v37 = *((_QWORD *)v39 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v39);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_34;
  }
  v10 = KeGetCurrentThread()->PreviousMode;
  v29 = v10;
  if ( v10 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)KeyInformation;
      if ( ((unsigned __int8)KeyInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)KeyInformation + v5 - 1;
      if ( (unsigned __int64)KeyInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
    v14 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v10 = 1;
  }
  Object = 0LL;
  Key = ObReferenceObjectByHandle(
          KeyHandle,
          ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v10,
          &Object,
          &HandleInformation);
  v15 = Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  v28 = Key;
  if ( Key < 0 )
    goto LABEL_35;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( KeyInformationClass != KeyCachedInformation )
    {
      Key = -1073741816;
      goto LABEL_34;
    }
    *ResultLength = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v28 = -1073741789;
      goto LABEL_35;
    }
    *(_OWORD *)KeyInformation = 0LL;
    *((_OWORD *)KeyInformation + 1) = 0LL;
    *((_QWORD *)KeyInformation + 4) = 0LL;
    *((_DWORD *)KeyInformation + 5) = *(_DWORD *)(v15[1] + 96LL);
    goto LABEL_33;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    v37 = *((_QWORD *)Object + 1);
  if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_34;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v31 = 1;
  if ( !CmpCallBackCount )
  {
    v18 = (unsigned __int16 *)Object;
    goto LABEL_29;
  }
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
  v18 = (unsigned __int16 *)Object;
  if ( !IsResourceAcquiredSharedLite )
  {
    v49[0] = Object;
    LODWORD(v49[1]) = KeyInformationClass;
    v49[2] = KeyInformation;
    LODWORD(v49[3]) = Size;
    v49[4] = ResultLength;
    v19 = CmpCallCallBacksEx(7u, (__int64)v49, 0LL, 1, 0x16u, (__int64)Object, (__int64)v38);
    Key = v19;
    v28 = v19;
    if ( v19 >= 0 )
    {
      v30 = 1;
      goto LABEL_29;
    }
    if ( v19 != -1073740541 )
      goto LABEL_35;
LABEL_33:
    Key = 0;
    goto LABEL_34;
  }
LABEL_29:
  if ( KeyInformationClass == KeyHandleTagsInformation )
  {
    *ResultLength = 4;
    if ( (unsigned int)Size < 4 )
    {
      Key = -1073741789;
      v28 = -1073741789;
      goto LABEL_35;
    }
    *(_DWORD *)KeyInformation = v18[25];
    goto LABEL_33;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(
          &DmaAdapter,
          (unsigned __int8)v29,
          ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0,
          &v36);
  v28 = Key;
  if ( Key >= 0 )
  {
    v24 = Size;
    Key = CmpBounceContextStart((__int64)Src, KeyInformation, (unsigned int)Size, v29, 2);
    v28 = Key;
    if ( Key >= 0 )
    {
      Key = CmQueryKey(
              (__int64)DmaAdapter,
              (__int64)v36,
              KeyInformationClass,
              (unsigned int *)Src[1],
              Size,
              (unsigned int *)&Size + 1);
      v28 = Key;
      if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
      {
        v25 = HIDWORD(Size);
        *ResultLength = HIDWORD(Size);
        if ( Key != -1073741789 )
        {
          if ( (unsigned int)Size >= v25 )
            v24 = v25;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v24);
        }
      }
    }
  }
LABEL_35:
  if ( v36 )
    HalPutDmaAdapter(v36);
  if ( v30 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v38[0] != v38 )
    {
      v43 = 0;
      v46 = 0LL;
      v47 = 0LL;
      v48 = 0;
      v41 = DmaAdapter;
      v42 = Key;
      v45 = Key;
      v44 = v49;
      CmpCallCallBacksEx(0x16u, (__int64)&v41, 0LL, 0, 0x16u, (__int64)DmaAdapter, (__int64)v38);
      Key = v45;
    }
    v28 = Key;
  }
  if ( v31 )
  {
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable++ == -1;
    if ( v21
      && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v20);
    }
    Key = v28;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  v22 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v52 )
  {
    if ( (v51 & 1) != 0 )
    {
      ++dword_140CDB91C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CDB910 )
      {
        ++dword_140CDB920;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_140CDB938)(Src[1], &CmpBounceBufferLookaside);
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
    LOBYTE(v22) = 13;
    (*(void (__fastcall **)(void *, _OWORD *, _QWORD, _QWORD, __int64, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v22,
      v53,
      (unsigned int)Key,
      (unsigned int)KeyInformationClass,
      v37,
      0LL);
  }
  if ( v32 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v28;
  }
  return Key;
}
