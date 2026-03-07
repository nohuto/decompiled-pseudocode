char __fastcall DxgkIsGraphicsPartitionApplication(PEPROCESS Process)
{
  char v2; // si
  PACCESS_TOKEN v3; // rdi
  NTSTATUS v4; // eax
  int v5; // ebx
  char v6; // r12
  int v7; // r15d
  int v9; // eax
  char v10; // cl
  int v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // cl
  PACCESS_TOKEN v15; // rdi
  int v16; // ebx
  __int16 v17; // ax
  _WORD *v18; // rcx
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  _WORD *i; // rdi
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  _WORD v28[2]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+8Ch] [rbp-7Ch]
  _BYTE *v30; // [rsp+90h] [rbp-78h]
  _QWORD v31[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v33[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v34[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+0h] BYREF
  _WORD Src[128]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v38[144]; // [rsp+218h] [rbp+110h] BYREF

  v2 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 1427LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ExGetPreviousMode() == UserMode", 1427LL, 0LL, 0LL, 0LL, 0LL);
  }
  TokenInformation = 0LL;
  v3 = PsReferencePrimaryToken(Process);
  v4 = SeQueryInformationToken(v3, TokenIsAppContainer, &TokenInformation);
  v31[0] = 1441812LL;
  v5 = v4;
  v31[1] = L"WIN://BGKD";
  v6 = SeSecurityAttributePresent(v3, v31);
  v24 = 0LL;
  RtlQueryPackageClaims(v3, 0LL, 0LL, 0LL, 0LL, 0LL, &v24, 0LL);
  v7 = v24 & 5;
  PsDereferencePrimaryToken(v3);
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL, Process);
    return 0;
  }
  if ( !TokenInformation && v7 != 5 || v6 == 1 )
    return 0;
  v32[0] = 2097182LL;
  v32[1] = L"shellExperience";
  v33[1] = L"hevcPlayback";
  v34[1] = L"expandedResources";
  v33[0] = 1703960LL;
  v34[0] = 2359330LL;
  LOWORD(v22) = 0;
  BYTE2(v22) = 0;
  if ( v7 != 5 )
  {
    v9 = RtlCapabilityCheck(0LL, v32, (char *)&v22 + 1);
    v10 = BYTE1(v22);
    if ( v9 < 0 )
      v10 = 0;
    BYTE1(v22) = v10;
    v11 = RtlCapabilityCheck(0LL, v33, &v22);
    v12 = v22;
    if ( v11 < 0 )
      v12 = 0;
    LOBYTE(v22) = v12;
    v13 = RtlCapabilityCheck(0LL, v34, (char *)&v22 + 2);
    v14 = BYTE2(v22);
    if ( v13 < 0 )
      v14 = 0;
    BYTE2(v22) = v14;
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) )
  {
    if ( (_BYTE)v22 )
      goto LABEL_36;
    if ( __PAIR16__(BYTE1(v22), 0) != BYTE2(v22) )
      return 0;
    WORD1(v22) = 0;
    v26 = 256LL;
    v15 = PsReferencePrimaryToken(Process);
    v16 = RtlQueryPackageIdentity(v15, Src, &v26, 0LL, 0LL, (char *)&v22 + 3);
    PsDereferencePrimaryToken(v15);
    if ( v16 >= 0 && BYTE3(v22) )
    {
      v29 = 0;
      v30 = v38;
      v17 = Src[0];
      v18 = Src;
      *(&ObjectAttributes.Length + 1) = 0;
      v19 = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      v28[1] = 130;
      while ( v17 != 95 && v17 )
      {
        v19 += 2;
        v17 = *++v18;
      }
      v20 = 0;
      for ( i = (_WORD *)((char *)&DestinationString.Buffer + v26 + 6); *i != 95 && i != Src; --i )
        v20 += 2;
      if ( (unsigned __int64)(v20 + v19) + 2 <= 0x82 )
      {
        KeyHandle = 0LL;
        DestinationString = 0LL;
        memmove(v38, Src, v19);
        memmove(&v30[v19], i, v20 + 2LL);
        v28[0] = v20 + v19;
        RtlInitUnicodeString(
          &DestinationString,
          L"\\REGISTRY\\MACHINE\\OSDATA\\Software\\Microsoft\\Durango\\LiveSettings\\HevcOverride");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
        {
          ObjectAttributes.RootDirectory = KeyHandle;
          Handle = 0LL;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v28;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
          {
            LOBYTE(v22) = 1;
            ZwClose(Handle);
          }
          ZwClose(KeyHandle);
        }
      }
    }
  }
  if ( !(_BYTE)v22 )
    return 0;
LABEL_36:
  if ( *(_WORD *)((char *)&v22 + 1) )
    return 0;
  return v2;
}
