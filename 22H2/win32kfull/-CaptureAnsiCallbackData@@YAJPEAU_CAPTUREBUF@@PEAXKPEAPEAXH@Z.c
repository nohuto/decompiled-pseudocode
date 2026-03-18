/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013CD84
 * Callers:
 *     SfnINSTRINGNULL @ 0x1C0023340 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0023990 (SfnINLPCREATESTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C02097E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C020D030 (SfnINSTRING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C02103E8 (fnHkINLPCBTCREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0024614 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage @ 0x1C013D070 (Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(
        struct _CAPTUREBUF *a1,
        PCWCH UnicodeString,
        ULONG MaxBytesInMultiByteString,
        void **a4,
        int a5)
{
  __int64 v6; // rsi
  ULONG BytesInUnicodeString; // edi
  ULONG v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  CHAR *v14; // r14
  ULONG v15; // edx
  ULONG v16; // ecx
  ULONG v17[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+10h] BYREF

  v6 = MaxBytesInMultiByteString;
  BytesInMultiByteString = 0;
  v17[0] = 0;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( !(unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage() )
  {
    if ( 2 * v6 <= (unsigned __int64)*((unsigned int *)a1 + 1) )
    {
      BytesInUnicodeString = 2 * v6;
      goto LABEL_21;
    }
    return 2147483653LL;
  }
  BytesInUnicodeString = 2 * v6;
  if ( a5 )
  {
    if ( RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString, BytesInUnicodeString - 2) < 0 )
      return 3221225473LL;
    v11 = BytesInMultiByteString + 2;
    if ( BytesInMultiByteString + 2 < BytesInMultiByteString )
    {
      v13 = -2147024362;
      v11 = -1;
    }
    else
    {
      v13 = 0;
    }
    BytesInMultiByteString = v11;
    v12 = v11;
    if ( v13 < 0 )
      return 2147483653LL;
  }
  else
  {
    v11 = 2 * v6;
    if ( (*gpsi & 2) == 0 )
      v11 = v6;
    BytesInMultiByteString = v11;
    v12 = v11;
  }
  if ( v11 > *((_DWORD *)a1 + 1) || v12 >= 0x7FFFFFFF )
    return 2147483653LL;
LABEL_21:
  v14 = (CHAR *)*((_QWORD *)a1 + 2);
  if ( (unsigned int)Feature_Servicing_DialogCaptionUTF8DisplayIssue__private_IsEnabledDeviceUsage() )
  {
    if ( RtlUnicodeToMultiByteN(v14, BytesInMultiByteString, v17, UnicodeString, BytesInUnicodeString) < 0 )
      return 3221225473LL;
LABEL_28:
    v16 = v17[0];
    *((_QWORD *)a1 + 2) = &v14[(v17[0] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v16;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v14);
    return 0LL;
  }
  v15 = BytesInUnicodeString;
  if ( (*gpsi & 2) == 0 )
    v15 = v6;
  if ( RtlUnicodeToMultiByteN(v14, v15, v17, UnicodeString, BytesInUnicodeString) >= 0 )
    goto LABEL_28;
  return 3221225473LL;
}
