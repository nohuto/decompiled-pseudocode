NTSTATUS __stdcall SeEtwWriteKMCveEvent(PCUNICODE_STRING CveId, PCUNICODE_STRING AdditionalDetails)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  REGHANDLE v5; // rcx
  _WORD v6[8]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  _WORD *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int128 v10; // [rsp+70h] [rbp+27h]
  __int128 v11; // [rsp+80h] [rbp+37h]

  v10 = 0LL;
  v11 = 0LL;
  v6[0] = 0;
  if ( !CveId )
    return -1073741811;
  UserData.Ptr = (ULONGLONG)CveId->Buffer;
  v3 = 2;
  UserData.Size = CveId->Length;
  v8 = v6;
  UserData.Reserved = 0;
  v9 = 2LL;
  if ( AdditionalDetails )
  {
    v3 = 3;
    *(_QWORD *)&v10 = AdditionalDetails->Buffer;
    *((_QWORD *)&v10 + 1) = AdditionalDetails->Length;
  }
  v4 = 2LL * v3;
  *(&UserData.Ptr + v4) = (ULONGLONG)v6;
  v5 = EtwCVEAuditProvRegHandle;
  *((_QWORD *)&UserData.Size + v4) = 2LL;
  return EtwWriteEx(v5, &CVE_AUDIT_DETECT_KM, 0LL, 0, 0LL, 0LL, v3 + 1, &UserData);
}
