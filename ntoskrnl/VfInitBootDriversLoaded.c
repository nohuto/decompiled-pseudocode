void __fastcall VfInitBootDriversLoaded(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  ViNumberOfWdmThunks = VfThunkGetNumberOfWdmThunk();
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    CarInit();
  VfBugcheckTmpDataLock = 0LL;
  qword_140C364E8 = (__int64)&DifAPIThunkContextHead;
  DifAPIThunkContextHead = (__int64)&DifAPIThunkContextHead;
  DifpPoolTagsSize = (unsigned int)DifpPoolTagsSizeBytes >> 2;
  VfRegularThunksBitMapHeader.Buffer = (unsigned int *)&VfRegularThunksBitMap;
  VfRegularThunksBitMapHeader.SizeOfBitMap = 64;
  RtlSetAllBits(&VfRegularThunksBitMapHeader);
  VfPoolThunksBitMapHeader.SizeOfBitMap = 64;
  VfPoolThunksBitMapHeader.Buffer = (unsigned int *)&VfPoolThunksBitMap;
  RtlSetAllBits(&VfPoolThunksBitMapHeader);
  VfDifThunksBitMapHeader.SizeOfBitMap = 544;
  VfDifThunksBitMapHeader.Buffer = (unsigned int *)&VfDifThunksBitMap;
  RtlSetAllBits(&VfDifThunksBitMapHeader);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&ViAvlNodeLookaside,
    0LL,
    (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
    512,
    48,
    1413572182,
    16,
    VfInitializedWithoutReboot);
  _InterlockedExchange(&ViAvlInitialized, 1);
  if ( !VfSafeMode )
  {
    if ( (int)VfAvlInitializeTreeEx(ViTargetDriversAvl, 0LL, 64, 1, (PRTL_AVL_FREE_ROUTINE)ViTargetDelayFreeAvlNode) < 0 )
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
    }
    else
    {
      dword_140C36F48 = 0;
      _InterlockedExchange(&ViTargetInitialized, 1);
    }
  }
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    VfObjectContextInit();
  ViThunkFindAllExportAddresses(a1, &VfRegularThunks, v2, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfPoolThunks, v3, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfDifThunks, v4, &VfDifThunksBitMapHeader);
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
  {
    NtSetDebugFilterState(0x5Du, 0, 1);
    if ( (_DWORD)MmVerifyDriverBufferLength )
      VfSuspectDriversParseRegistryString();
    if ( VfXdvSuppressDriversBufferLength )
      VfXdvExcludeParseRegistryString();
    VfInitVerifierComponents(MmVerifierData, (unsigned int)ViVerifyAllDrivers, (unsigned int)KernelVerifier, 0);
    ViFullyInitialized = 1;
    VfTriageAddDrivers(a1);
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v6 + 48) + *(unsigned int *)(v6 + 64);
    ViDriverKernelBase = *(_QWORD *)(v6 + 48);
    ViDriverKernelEnd = v7;
    if ( KernelVerifier )
      VfDriverLoadImage(v6, v5, 1u);
    v8 = *(_QWORD *)v6;
    DifRegisterKernelPlugin();
    ViLogAndLoadXdv(a1);
    while ( v8 != a1 + 16 )
    {
      if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v8 + 88), &XdvName, 1u) )
        VfDriverLoadImage(v8, v9, 0);
      v8 = *(_QWORD *)v8;
    }
  }
  else
  {
    VfDriverLoadBootDrivers(a1 + 16);
  }
}
