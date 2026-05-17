/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180032920
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18000FDB4 (LdrpCfgProcessLoadConfig.c)
 *     RtlCaptureImageExceptionValues @ 0x180013FF4 (RtlCaptureImageExceptionValues.c)
 *     LdrpGetImportDescriptorForSnap @ 0x1800142DC (LdrpGetImportDescriptorForSnap.c)
 *     LdrpCompleteMapModule @ 0x1800148B4 (LdrpCompleteMapModule.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180014F84 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpInitializeTls @ 0x180053D54 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180054590 (LdrpHandleTlsData.c)
 *     RtlFindExportedRoutineByName @ 0x18007AC90 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x18007E340 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x1800834CC (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x18008489C (LdrRelocateImageWithBias.c)
 *     LdrpCorValidateImage @ 0x1800855B4 (LdrpCorValidateImage.c)
 *     LdrpProcessMachineMismatch @ 0x180087668 (LdrpProcessMachineMismatch.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B160 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CD34C (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CD544 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpCorFixupImage @ 0x1800CE6C8 (LdrpCorFixupImage.c)
 *     LdrpFindDelayloadedMethod @ 0x1800CE968 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800CEAAC (LdrpGetDelayloadDescriptor.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800E0580 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800E0B60 (LdrEnumResources.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800FD834 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     EtwpFindDebugId @ 0x180111910 (EtwpFindDebugId.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180077F70 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  __int64 v6; // rbx
  char v7; // si
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // r9
  int v15; // r10d
  __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = a2;
  v9 = a3;
  v10 = a1;
  v20 = 0LL;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = 0;
    if ( (a1 & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &v20);
  v12 = v20;
  if ( v20 )
  {
    if ( *(_WORD *)(v20 + 24) == 267 )
    {
      if ( (unsigned int)v9 < *(_DWORD *)(v20 + 116) )
      {
        v13 = *(unsigned int *)(v20 + 8 * v9 + 120);
        if ( (_DWORD)v13 )
        {
          *a4 = *(_DWORD *)(v20 + 8 * v9 + 124);
          if ( !v7 && (unsigned int)v13 >= *(_DWORD *)(v12 + 84) )
          {
            v14 = 0;
            v15 = 0;
            v16 = *(unsigned __int16 *)(v12 + 20) + v20 + 24;
            if ( *(_WORD *)(v20 + 6) )
            {
              while ( 1 )
              {
                v17 = *(_DWORD *)(v16 + 12);
                if ( (unsigned int)v13 >= v17 && (unsigned int)v13 < *(_DWORD *)(v16 + 16) + v17 )
                  break;
                v16 += 40LL;
                if ( ++v15 >= (unsigned int)*(unsigned __int16 *)(v20 + 6) )
                  goto LABEL_21;
              }
              v14 = 1;
            }
LABEL_21:
            v18 = -v14;
            if ( (v16 & -(__int64)(v18 != 0)) != 0 )
              v6 = v13
                 + v10
                 + *(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0x14)
                 - (unsigned __int64)*(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0xC);
            *v5 = v6;
            LODWORD(v6) = v6 != 0 ? 0 : 0xC000000D;
            return (unsigned int)v6;
          }
LABEL_10:
          *v5 = v10 + v13;
          return (unsigned int)v6;
        }
LABEL_26:
        LODWORD(v6) = -1073741822;
        return (unsigned int)v6;
      }
    }
    else if ( *(_WORD *)(v20 + 24) == 523 && (unsigned int)v9 < *(_DWORD *)(v20 + 132) )
    {
      v13 = *(unsigned int *)(v20 + 8 * v9 + 136);
      if ( (_DWORD)v13 )
      {
        *a4 = *(_DWORD *)(v20 + 8 * v9 + 140);
        if ( !v7 && (unsigned int)v13 >= *(_DWORD *)(v12 + 84) )
        {
          v19 = RtlAddressInSectionTable(v12, v10, (unsigned int)v13);
          *v5 = v19;
          LODWORD(v6) = v19 == 0 ? 0xC000000D : 0;
          return (unsigned int)v6;
        }
        goto LABEL_10;
      }
      goto LABEL_26;
    }
    LODWORD(v6) = -1073741811;
    return (unsigned int)v6;
  }
  return result;
}
