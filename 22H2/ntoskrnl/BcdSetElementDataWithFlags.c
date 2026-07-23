/*
 * XREFs of BcdSetElementDataWithFlags @ 0x140783EDC
 * Callers:
 *     PopBcdSetPendingResume @ 0x140777F80 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140782DF4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140786024 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408F58D4 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409246A4 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x14096F498 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140970200 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140972EE0 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14039AE9C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403D6600 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3A74 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140779860 (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BiCreateKey @ 0x140783B10 (BiCreateKey.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140784838 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1407848A8 (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x140784964 (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x140784A50 (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x140784A7C (BiConvertElementToRegistryData.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  NTSTATUS result; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16; // r15
  int v17; // eax
  int *v18; // [rsp+28h] [rbp-49h]
  bool v19; // [rsp+30h] [rbp-41h] BYREF
  char v20; // [rsp+31h] [rbp-40h]
  int v21; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v22; // [rsp+38h] [rbp-39h] BYREF
  ULONG v23; // [rsp+40h] [rbp-31h] BYREF
  __int64 v24; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v23 = BcdElement;
  v21 = 0;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v22 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v24 = 0LL;
  P = 0LL;
  if ( !BufferSize )
  {
    BiDeleteElement(BcdObjectHandle, BcdElement);
    return 0;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)BcdObjectHandle);
  v20 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", BcdElement);
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131101LL, &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_15:
        if ( v22 )
          BiCloseKey(v22);
        if ( v12 >= 0 )
        {
          if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, &v23) )
            BiSetFirmwareModifiedFromObject(BcdObjectHandle);
        }
        LOBYTE(v13) = v20;
        BiReleaseBcdSyncMutant(v13);
        return v12;
      }
      v14 = BiCreateKey(v22, DstBuf, 0x10002u, 1u, &v24, &v19);
      v12 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = v24;
      }
      else
      {
        v18 = &v21;
        v15 = BiConvertElementToRegistryData(BcdElement, Buffer, BufferSize);
        v8 = v24;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15, &P, &v21);
        }
        else
        {
          BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
          LODWORD(v18) = v21;
          v17 = BiSetRegistryValue(v8, L"Element", 0LL);
          v12 = v17;
          if ( v17 < 0 )
            BiLogMessage(
              4LL,
              L"Failed to set registry data for element %s. Status: %x",
              DstBuf,
              (unsigned int)v17,
              v16,
              v18);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
      }
    }
    if ( v12 < 0 && v19 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  return result;
}
