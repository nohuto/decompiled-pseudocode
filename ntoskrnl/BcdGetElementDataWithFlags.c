/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14082E398
 * Callers:
 *     BcdGetElementData @ 0x14082B504 (BcdGetElementData.c)
 *     PopBcdEstablishResumeObject @ 0x14082B658 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14082BFD0 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14082C610 (PopBcdReadElement.c)
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x1409987C0 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE004 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A59AB0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiGetElement @ 0x140A59CEC (BiGetElement.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x1403903FC (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403D8C70 (_ultow_s.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x14082EE3C (BiGetObjectIdentifier.c)
 *     BiConvertElementFormatToValueType @ 0x14082EFD8 (BiConvertElementFormatToValueType.c)
 *     BiConvertRegistryDataToElement @ 0x14082F010 (BiConvertRegistryDataToElement.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rcx
  char v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  wchar_t *Buffer; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  int RegistryValue; // eax
  PVOID v16; // r15
  __int64 v17; // rcx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // [rsp+20h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-71h]
  unsigned int v24; // [rsp+48h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-59h]
  __int64 v27; // [rsp+60h] [rbp-51h] BYREF
  PVOID P; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  __int64 v30; // [rsp+80h] [rbp-31h]
  __int128 v31; // [rsp+88h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+98h] [rbp-19h] BYREF

  v30 = a4;
  v24 = 0;
  DestinationString = 0LL;
  v31 = 0LL;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  LOBYTE(v6) = BiIsOfflineHandle(a1);
  v22 = v6;
  v7 = v6;
  v8 = BiAcquireBcdSyncMutant(v6);
  if ( v8 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
    return v20;
  }
  else
  {
    v25 = 0LL;
    v27 = 0LL;
    v9 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    Buffer = L"N/A";
    if ( (int)BiGetObjectIdentifier(a1, &v31) >= 0
      && (int)RtlStringFromGUIDEx((unsigned int *)&v31, (__int64)&DestinationString, 1) >= 0 )
    {
      Buffer = DestinationString.Buffer;
    }
    v11 = BiOpenKey(a1, L"Elements", 131097LL, &v25);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        Buffer,
        (unsigned int)v11);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v12 = -1073741823;
    }
    else
    {
      v13 = BiOpenKey(v25, DstBuf, 131097LL, &v27);
      if ( v13 < 0 )
      {
        v19 = 4LL;
        if ( v13 == -1073741772 )
          v19 = 2LL;
        BiLogMessage(
          v19,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          Buffer,
          DstBuf,
          v13);
        v9 = v27;
        v12 = -1073741275;
      }
      else
      {
        v14 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
        v9 = v27;
        v26 = v14;
        RegistryValue = BiGetRegistryValue(v27, L"Element", 0LL, v14, &P, &v24);
        v16 = P;
        v12 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          LODWORD(v21) = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            Buffer,
            v26,
            v21);
        }
        else
        {
          v12 = BiConvertRegistryDataToElement(a1, P, v24, a2, 0, v30, a5);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        v7 = v22;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 )
      BiCloseKey(v9);
    if ( v25 )
      BiCloseKey(v25);
    LOBYTE(v17) = v7;
    BiReleaseBcdSyncMutant(v17);
    return v12;
  }
}
