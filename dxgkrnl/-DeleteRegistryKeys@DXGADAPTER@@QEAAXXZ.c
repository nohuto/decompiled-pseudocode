void __fastcall DXGADAPTER::DeleteRegistryKeys(DXGADAPTER *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 RegistryPathFromPDO; // rsi
  __int64 v5; // rbx
  __int16 v6; // r11
  const wchar_t *v7; // r9
  __int64 v8; // rdx
  __int16 v9; // cx
  wchar_t *v10; // r10
  size_t v11; // r8
  int v12; // eax
  __int16 v13; // r10
  const wchar_t *v14; // rcx
  __int16 v15; // dx
  _WORD *v16; // r8
  char *v17; // r9
  int v18; // eax
  size_t v19; // [rsp+20h] [rbp-E0h]
  size_t v20; // [rsp+20h] [rbp-E0h]
  ULONG v21; // [rsp+28h] [rbp-D8h]
  ULONG v22; // [rsp+28h] [rbp-D8h]
  size_t pcchDest; // [rsp+50h] [rbp-B0h] BYREF
  size_t pcchDestLength; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *ppszDest; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  char v28; // [rsp+90h] [rbp-70h] BYREF

  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    *(_QWORD *)&DestinationString.Length = 34078720LL;
    UnicodeString = 0LL;
    DestinationString.Buffer = (wchar_t *)&v28;
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v2);
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &UnicodeString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO >= 0 )
    {
      RtlUnicodeStringCopy(&DestinationString, &UnicodeString);
      ppszDest = 0LL;
      pcchDest = 0LL;
      pcchDestLength = 0LL;
      v5 = 0x7FFFLL;
      if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, &pcchDestLength, v19, v21) >= 0 )
      {
        v6 = pcchDestLength;
        v7 = L"\\Classes";
        v8 = 0x7FFFLL;
        v9 = 0;
        v10 = &ppszDest[pcchDestLength];
        v11 = pcchDest - pcchDestLength;
        if ( pcchDest != pcchDestLength )
        {
          do
          {
            if ( !v8 )
              break;
            if ( !*v7 )
              break;
            *v10++ = *v7++;
            --v8;
            ++v9;
          }
          while ( v8 + v11 - 0x7FFF );
        }
        DestinationString.Length = 2 * (v6 + v9);
      }
      v12 = DXGADAPTER::DeleteRegistryKey(this, &DestinationString);
      if ( v12 < 0 )
        WdLogSingleEntry1(3LL, v12);
      RtlUnicodeStringCopy(&DestinationString, &UnicodeString);
      pcchDest = 0LL;
      ppszDest = 0LL;
      pcchDestLength = 0LL;
      if ( RtlUnicodeStringValidateDestWorker(
             &DestinationString,
             (wchar_t **)&pcchDest,
             (size_t *)&ppszDest,
             &pcchDestLength,
             v20,
             v22) >= 0 )
      {
        v13 = pcchDestLength;
        v14 = L"\\MediaFoundation";
        v15 = 0;
        v16 = (_WORD *)(pcchDest + 2 * pcchDestLength);
        v17 = (char *)ppszDest - pcchDestLength;
        if ( ppszDest != (wchar_t *)pcchDestLength )
        {
          do
          {
            if ( !v5 )
              break;
            if ( !*v14 )
              break;
            *v16++ = *v14++;
            --v5;
            ++v15;
          }
          while ( &v17[v5 - 0x7FFF] );
        }
        DestinationString.Length = 2 * (v13 + v15);
      }
      v18 = DXGADAPTER::DeleteRegistryKey(this, &DestinationString);
      if ( v18 < 0 )
        WdLogSingleEntry1(3LL, v18);
      RtlFreeUnicodeString(&UnicodeString);
    }
    else
    {
      WdLogSingleEntry1(2LL, RegistryPathFromPDO);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to read PnP registry key name for DeleteRegistryKeys (status = 0x%I64x).",
        RegistryPathFromPDO,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
