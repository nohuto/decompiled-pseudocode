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

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        char **a5)
{
  char **v5; // r14
  char *v6; // rbx
  char v7; // si
  __int64 v9; // rbp
  char *v10; // rdi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  __int64 VirtualAddress; // rdx
  char v14; // r9
  int v15; // r10d
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // r9
  char *v19; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = a2;
  v9 = a3;
  v10 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = 0;
    if ( (BaseOfImage & 1) == 0 )
      v7 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v12 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      if ( (unsigned int)v9 < HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
      {
        VirtualAddress = *((unsigned int *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9);
        if ( (_DWORD)VirtualAddress )
        {
          *a4 = *((_DWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v9 + 1);
          if ( !v7 && (unsigned int)VirtualAddress >= v12->OptionalHeader.SizeOfHeaders )
          {
            v14 = 0;
            v15 = 0;
            v16 = (unsigned __int64)&OutHeaders->OptionalHeader + v12->FileHeader.SizeOfOptionalHeader;
            if ( OutHeaders->FileHeader.NumberOfSections )
            {
              while ( 1 )
              {
                v17 = *(_DWORD *)(v16 + 12);
                if ( (unsigned int)VirtualAddress >= v17 && (unsigned int)VirtualAddress < *(_DWORD *)(v16 + 16) + v17 )
                  break;
                v16 += 40LL;
                if ( ++v15 >= (unsigned int)OutHeaders->FileHeader.NumberOfSections )
                  goto LABEL_21;
              }
              v14 = 1;
            }
LABEL_21:
            v18 = -v14;
            if ( (v16 & -(__int64)(v18 != 0)) != 0 )
              v6 = &v10[*(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0x14)
                      - (unsigned __int64)*(unsigned int *)((v16 & -(__int64)(v18 != 0)) + 0xC)
                      + VirtualAddress];
            *v5 = v6;
            LODWORD(v6) = v6 != 0LL ? 0 : 0xC000000D;
            return (int)v6;
          }
LABEL_10:
          *v5 = &v10[VirtualAddress];
          return (int)v6;
        }
LABEL_26:
        LODWORD(v6) = -1073741822;
        return (int)v6;
      }
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523
           && (unsigned int)v9 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[v9].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[v9].Size;
        if ( !v7 && (unsigned int)VirtualAddress >= v12->OptionalHeader.SizeOfHeaders )
        {
          v19 = (char *)RtlAddressInSectionTable(v12, v10, VirtualAddress);
          *v5 = v19;
          LODWORD(v6) = v19 == 0LL ? 0xC000000D : 0;
          return (int)v6;
        }
        goto LABEL_10;
      }
      goto LABEL_26;
    }
    LODWORD(v6) = -1073741811;
    return (int)v6;
  }
  return result;
}
