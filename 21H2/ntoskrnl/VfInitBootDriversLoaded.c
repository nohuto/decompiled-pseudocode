/*
 * XREFs of VfInitBootDriversLoaded @ 0x140B0DBD4
 * Callers:
 *     MiInitializeDriverImages @ 0x140B05E40 (MiInitializeDriverImages.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     CarInit @ 0x140603974 (CarInit.c)
 *     DifRegisterKernelPlugin @ 0x140604884 (DifRegisterKernelPlugin.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     NtSetDebugFilterState @ 0x14082CCC0 (NtSetDebugFilterState.c)
 *     VfThunkGetNumberOfWdmThunk @ 0x140A7BE44 (VfThunkGetNumberOfWdmThunk.c)
 *     VfDriverLoadImage @ 0x140A7C1B8 (VfDriverLoadImage.c)
 *     VfAvlInitializeTreeEx @ 0x140A7C400 (VfAvlInitializeTreeEx.c)
 *     VfInitVerifierComponents @ 0x140A82480 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x140A83574 (VfObjectContextInit.c)
 *     VfDriverLoadBootDrivers @ 0x140B0DDAC (VfDriverLoadBootDrivers.c)
 *     ViThunkFindAllExportAddresses @ 0x140B0DE04 (ViThunkFindAllExportAddresses.c)
 *     ViLogAndLoadXdv @ 0x140B536A4 (ViLogAndLoadXdv.c)
 *     VfTriageAddDrivers @ 0x140B53724 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140B53B88 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140B53D38 (VfXdvExcludeParseRegistryString.c)
 */

BOOLEAN __fastcall VfInitBootDriversLoaded(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  BOOLEAN result; // al
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx

  ViNumberOfWdmThunks = VfThunkGetNumberOfWdmThunk();
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    CarInit();
  VfBugcheckTmpDataLock = 0LL;
  qword_140C1A8B8 = (__int64)&DifAPIThunkContextHead;
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
    (void (__stdcall *)(PVOID, ULONG))VfUtilFreePoolCheckIRQL,
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
      dword_140C1B248 = 0;
      _InterlockedExchange(&ViTargetInitialized, 1);
    }
  }
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    VfObjectContextInit();
  ViThunkFindAllExportAddresses(a1, &VfRegularThunks, v2, &VfRegularThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfPoolThunks, v3, &VfPoolThunksBitMapHeader);
  ViThunkFindAllExportAddresses(a1, &VfMandatoryThunks, v4, 0LL);
  ViThunkFindAllExportAddresses(a1, &VfDifThunks, v5, &VfDifThunksBitMapHeader);
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead )
    return VfDriverLoadBootDrivers(a1 + 16);
  NtSetDebugFilterState(0x5Du, 0, 1);
  if ( (_DWORD)MmVerifyDriverBufferLength )
    VfSuspectDriversParseRegistryString();
  if ( VfXdvSuppressDriversBufferLength )
    VfXdvExcludeParseRegistryString();
  VfInitVerifierComponents(MmVerifierData, ViVerifyAllDrivers, KernelVerifier, 0);
  ViFullyInitialized = 1;
  VfTriageAddDrivers(a1);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 48) + *(unsigned int *)(v8 + 64);
  ViDriverKernelBase = *(_QWORD *)(v8 + 48);
  ViDriverKernelEnd = v9;
  if ( KernelVerifier )
    VfDriverLoadImage(v8, v7, 1u);
  v10 = *(_QWORD *)v8;
  DifRegisterKernelPlugin();
  result = ViLogAndLoadXdv(a1);
  while ( v10 != a1 + 16 )
  {
    result = RtlEqualUnicodeString((PCUNICODE_STRING)(v10 + 88), &XdvName, 1u);
    if ( !result )
      result = VfDriverLoadImage(v10, v11, 0);
    v10 = *(_QWORD *)v10;
  }
  return result;
}
