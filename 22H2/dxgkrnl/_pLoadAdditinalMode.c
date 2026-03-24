/*
 * XREFs of _pLoadAdditinalMode @ 0x1C019A5A0
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C019A3FC (_pGetAdditionalTiming.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A23C (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _pReadDetailTimingFromReg @ 0x1C019A908 (_pReadDetailTimingFromReg.c)
 *     _pPopulateProgressiveTimingList @ 0x1C02F8D20 (_pPopulateProgressiveTimingList.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG v7; // r15d
  const WCHAR *v8; // rdx
  NTSTATUS appended; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int16 *v31; // r13
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  NTSTATUS v37; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  void *KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-51h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  __int128 KeyInformation; // [rsp+90h] [rbp-1h] BYREF
  __int128 v59; // [rsp+A0h] [rbp+Fh]
  __int128 v60; // [rsp+B0h] [rbp+1Fh]

  v1 = (int)a1;
  v2 = WdLogNewEntry5_WdDmmEvent(a1);
  *(_QWORD *)(v2 + 24) = v1;
  WdLogEvent5_WdDmmEvent(v2);
  if ( (_DWORD)v1 == -2 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v39);
  }
  *(_QWORD *)&Destination.Length = 15859712LL;
  Destination.Buffer = (wchar_t *)&unk_1C00B3FC0;
  v7 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( (int)v1 > 5 )
  {
    switch ( (_DWORD)v1 )
    {
      case 6:
        v8 = L"LVDS";
        goto LABEL_11;
      case 8:
        v8 = L"D_JPN";
        goto LABEL_11;
      case 9:
        v8 = L"SDI";
        goto LABEL_11;
    }
    if ( (int)v1 > 9 )
    {
      if ( (int)v1 <= 11 )
      {
        v8 = L"DISPLAYPORT";
        goto LABEL_11;
      }
      if ( (int)v1 <= 13 )
      {
        v8 = L"UDI";
        goto LABEL_11;
      }
      if ( (_DWORD)v1 == 14 )
      {
        v8 = L"SDTVDONGLE";
        goto LABEL_11;
      }
    }
    goto LABEL_56;
  }
  switch ( (_DWORD)v1 )
  {
    case 5:
      v8 = L"HDTV";
      goto LABEL_11;
    case 0x80000000:
      v8 = L"INTERNAL";
      goto LABEL_11;
    case 0xFFFFFFFF:
      v8 = L"OTHER";
      goto LABEL_11;
  }
  if ( (_DWORD)v1 )
  {
    switch ( (_DWORD)v1 )
    {
      case 1:
        v8 = L"SVIDEO";
        goto LABEL_11;
      case 2:
        v8 = L"COMPOSITE";
        goto LABEL_11;
      case 3:
        v8 = L"COMPONENT";
        goto LABEL_11;
      case 4:
        v8 = L"DVI";
        goto LABEL_11;
    }
LABEL_56:
    v41 = WdLogNewEntry5_WdDmmEvent(v6);
    *(_QWORD *)(v41 + 24) = v1;
    WdLogEvent5_WdDmmEvent(v41);
    return 3221226021LL;
  }
  v8 = L"HD15";
LABEL_11:
  appended = RtlAppendUnicodeToString(&Destination, v8);
  v12 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v42);
    }
    v43 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v43 + 24) = v1;
    *(_QWORD *)(v43 + 32) = v12;
    WdLogEvent5_WdError(v43);
    return (unsigned int)v12;
  }
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v13;
  if ( v13 < 0 )
  {
    v44 = WdLogNewEntry5_WdDmmEvent(v15);
    *(_QWORD *)(v44 + 24) = v1;
    *(_QWORD *)(v44 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v44);
    return (unsigned int)v12;
  }
  v16 = KeyHandle;
  if ( !KeyHandle )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL, v14);
    WdLogEvent5_WdAssertion(v45);
    v16 = KeyHandle;
  }
  ResultLength = 0;
  KeyInformation = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v17 = ZwQueryKey(v16, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
  v12 = v17;
  if ( v17 < 0 )
  {
    v52 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v52 + 24) = v1;
    *(_QWORD *)(v52 + 32) = v12;
    WdLogEvent5_WdWarning(v52);
    goto LABEL_33;
  }
  if ( !DWORD1(v59) )
  {
    v51 = WdLogNewEntry5_WdDmmEvent(0LL);
    *(_QWORD *)(v51 + 24) = v1;
    WdLogEvent5_WdDmmEvent(v51);
    LODWORD(v12) = -1073741275;
    goto LABEL_33;
  }
  v21 = 0;
  v24 = operator new[]((unsigned int)(28 * (DWORD1(v59) - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v24 )
  {
    v46 = WdLogNewEntry5_WdLowResource(v23, v22, v25, v26);
    WdLogEvent5_WdLowResource(v46);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v31 = (unsigned __int16 *)operator new[](0x96uLL, 0x4D677844u, PagedPool);
  if ( !v31 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
    WdLogEvent5_WdLowResource(v47);
    operator delete[](v24);
    LODWORD(v12) = -1073741801;
    goto LABEL_33;
  }
  if ( !DWORD1(v59) )
    goto LABEL_72;
  while ( 1 )
  {
    v32 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v31, 0x96u, &ResultLength);
    v12 = v32;
    if ( v32 == -2147483643 || v32 == -1073741789 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
      goto LABEL_68;
    }
    if ( v32 == -2147483622 )
      break;
    v36 = 0LL;
    if ( v32 >= 0 )
    {
      Destination.MaximumLength = v31[6];
      Destination.Length = Destination.MaximumLength;
      Handle = 0LL;
      Destination.Buffer = v31 + 8;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.ObjectName = &Destination;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v37 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v12 = v37;
      if ( v37 >= 0 )
      {
        LODWORD(v12) = pReadDetailTimingFromReg(Handle);
        if ( (int)v12 >= 0 )
          ++v21;
        ZwClose(Handle);
        goto LABEL_28;
      }
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v33, v35);
    v48[5] = v12;
LABEL_68:
    v48[4] = v7;
    v48[3] = v1;
    WdLogEvent5_WdWarning(v48);
LABEL_28:
    if ( ++v7 >= DWORD1(v59) )
      goto LABEL_29;
  }
  v49 = WdLogNewEntry5_WdWarning(v34, v33, v35);
  *(_QWORD *)(v49 + 24) = v1;
  WdLogEvent5_WdWarning(v49);
LABEL_29:
  if ( !v21 )
  {
LABEL_72:
    operator delete[](v24);
    goto LABEL_32;
  }
  *v24 = qword_1C00B3208;
  *((_DWORD *)v24 + 2) = v1;
  *((_DWORD *)v24 + 4) = v21;
  *((_BYTE *)v24 + 12) = 0;
  qword_1C00B3208 = v24;
  if ( !IsAnalogueVideoOutput(v1) )
  {
    v50 = (_QWORD *)pPopulateProgressiveTimingList(v24);
    if ( v50 )
    {
      *v50 = qword_1C00B3208;
      qword_1C00B3208 = v50;
    }
  }
  LODWORD(v12) = 0;
LABEL_32:
  operator delete[](v31);
LABEL_33:
  ZwClose(KeyHandle);
  return (unsigned int)v12;
}
