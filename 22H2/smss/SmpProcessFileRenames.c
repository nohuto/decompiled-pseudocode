/*
 * XREFs of SmpProcessFileRenames @ 0x140009054
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWrite @ 0x14000A0B4 (SmpEventWrite.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000BC20 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x14000F248 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     RtlStringCbPrintfExW @ 0x140016690 (RtlStringCbPrintfExW.c)
 *     SmpClearTemporaryFiles @ 0x1400169A0 (SmpClearTemporaryFiles.c)
 *     SmpEventWriteString2 @ 0x140016F20 (SmpEventWriteString2.c)
 *     SmpForceDeleteTargetFile @ 0x140017024 (SmpForceDeleteTargetFile.c)
 *     SmpGetTime @ 0x1400171B4 (SmpGetTime.c)
 *     SmpLogPFROError @ 0x140017440 (SmpLogPFROError.c)
 *     SmpOpenTargetFile @ 0x140017680 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017798 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x140017C34 (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140017E90 (SmpTryOverwriteReadonlyFile.c)
 */

__int64 __fastcall SmpProcessFileRenames(int a1)
{
  char v1; // r12
  bool v2; // r15
  NTSTATUS v3; // eax
  unsigned __int8 v4; // cl
  PVOID *v5; // rax
  int v6; // ebx
  char *v7; // rdi
  _WORD *v8; // r14
  _WORD *v9; // rsi
  char *v10; // r13
  __int64 v11; // rdx
  _WORD *v12; // rax
  __int16 v13; // cx
  int v14; // ebx
  __int64 v15; // r9
  USHORT Length; // cx
  PWSTR Buffer; // rax
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r8
  int v22; // eax
  _WORD *v23; // rax
  char v24; // al
  char *v25; // rax
  char **v26; // rdx
  unsigned __int8 OldValue[4]; // [rsp+78h] [rbp-90h] BYREF
  int ValueData; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v30; // [rsp+80h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  size_t pcbRemaining; // [rsp+A0h] [rbp-68h] BYREF
  int v34; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-58h]
  char *v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]
  __int128 v38; // [rsp+C8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[256]; // [rsp+F8h] [rbp-10h] BYREF

  LODWORD(pcbRemaining) = a1;
  v1 = 0;
  v2 = 1;
  OldValue[0] = 1;
  if ( SmpAllowProtectedRenames )
  {
    v3 = RtlAdjustPrivilege(0x12u, 1u, 0, OldValue);
    v4 = OldValue[0];
    if ( v3 < 0 )
      v4 = 1;
    OldValue[0] = v4;
  }
  if ( SmpClearTempFiles )
    SmpClearTemporaryFiles();
  SmpEventWrite(&SmssEvt_ProcessFileRenames_Start);
  v5 = (PVOID *)SmpFileRenameList;
  v6 = 0;
  v7 = (char *)SmpFileRenameList;
  v30 = 0;
  ValueData = 0;
  while ( v5 != &SmpFileRenameList )
  {
    Handle = 0LL;
    v8 = v7 + 16;
    OldValue[1] = 0;
    v9 = v7 + 32;
    v10 = v7;
    SmpEventWriteString2(&SmpFileRenameList, v7 + 16, v7 + 32);
    v11 = *((unsigned __int16 *)v7 + 8);
    if ( (unsigned __int16)v11 >= 4u )
    {
      v12 = (_WORD *)*((_QWORD *)v7 + 3);
      if ( *v12 == 42 )
      {
        v13 = v12[1];
        LOWORD(v11) = v11 - 4;
        *v8 = v11;
        *((_WORD *)v7 + 9) -= 4;
        *((_QWORD *)v7 + 3) = v12 + 2;
        OldValue[1] = 1;
        v2 = v13 != 48;
      }
    }
    if ( *v9 )
    {
      v35 = 0LL;
      v34 = 48;
      v37 = 64;
      v36 = v7 + 16;
      v38 = 0LL;
      v14 = SmpOpenTargetFile((int)&Handle, 1114112, (int)&v34, 0, 3u);
      if ( v14 < 0 )
        goto LABEL_17;
      if ( v2 && !(unsigned __int8)SmpPathCanBeTrustedIsNotARedirection(Handle) )
      {
        v14 = -1073740533;
        goto LABEL_17;
      }
      RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v7 + 5));
      Length = DestinationString.Length;
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Length >= 4u && *DestinationString.Buffer == 42 )
      {
        DestinationString.MaximumLength -= 4;
        Length = DestinationString.Length - 4;
        Buffer = DestinationString.Buffer + 2;
        DestinationString.Length -= 4;
        DestinationString.Buffer += 2;
      }
      if ( *Buffer == 33 || *Buffer == 64 )
      {
        v18 = 1;
        DestinationString.Buffer = Buffer + 1;
        DestinationString.MaximumLength -= 2;
        DestinationString.Length = Length - 2;
      }
      else
      {
        v18 = 0;
      }
      LOBYTE(v15) = v2;
      v19 = SmpRenameTargetFile(&DestinationString, Handle, v18, v15);
      v14 = v19;
      if ( v19 >= 0 || !v18 )
        goto LABEL_17;
      if ( v19 == -1073741790 )
      {
        LOBYTE(v20) = v2;
        v14 = SmpTryOverwriteReadonlyFile(&DestinationString, Handle, v20);
        if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741638 )
        {
          LOBYTE(v21) = v2;
          v14 = SmpShuffleMove(&DestinationString, Handle, v21);
          v2 = 1;
          v22 = ValueData;
          if ( v14 >= 0 )
            v22 = 1;
          ValueData = v22;
          goto LABEL_18;
        }
LABEL_17:
        v2 = 1;
LABEL_18:
        v9 = v7 + 32;
        goto LABEL_19;
      }
      v9 = v7 + 32;
    }
    else
    {
      v23 = (_WORD *)*((_QWORD *)v7 + 3);
      if ( *v23 == 64 )
      {
        LOWORD(v11) = v11 - 2;
        *((_QWORD *)v7 + 3) = v23 + 1;
        *v8 = v11;
      }
      LOBYTE(v11) = v2;
      v14 = SmpForceDeleteTargetFile(v7 + 16, v11);
    }
    v2 = 1;
LABEL_19:
    if ( Handle )
      NtClose(Handle);
    if ( v14 < 0 )
    {
      v24 = SmpLogPFROError(v7 + 16, v9, (unsigned int)v14);
      v6 = v30;
      v1 |= v24;
    }
    else
    {
      v6 = ++v30;
    }
    if ( OldValue[1] == 1 )
    {
      *v8 += 4;
      *((_WORD *)v7 + 9) += 4;
      *((_QWORD *)v7 + 3) -= 4LL;
    }
    v25 = *(char **)v7;
    v7 = v25;
    if ( *((char **)v25 + 1) != v10 || (v26 = (char **)*((_QWORD *)v10 + 1), *v26 != v10) )
      __fastfail(3u);
    *v26 = v25;
    *((_QWORD *)v25 + 1) = v26;
    SmpDeallocSavedRegistryEntry(v10);
    v5 = (PVOID *)SmpFileRenameList;
  }
  if ( !OldValue[0] )
    RtlAdjustPrivilege(0x12u, 0, 0, OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( (_DWORD)pcbRemaining )
  {
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( ValueData )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &ValueData, 4u);
  if ( SmpLogFileHandle )
  {
    if ( v1 )
    {
      SmpGetTime(&TimeFields);
      if ( RtlStringCbPrintfExW(
             pszDest,
             0x200uLL,
             0LL,
             &pcbRemaining,
             0,
             L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
             TimeFields.Month,
             TimeFields.Day,
             TimeFields.Year,
             TimeFields.Hour,
             TimeFields.Minute,
             TimeFields.Second,
             v6) >= 0 )
        NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, pszDest, 512 - pcbRemaining, 0LL, 0LL);
    }
    NtClose(SmpLogFileHandle);
    SmpLogFileHandle = 0LL;
  }
  return SmpEventWrite(&SmssEvt_ProcessFileRenames_Stop);
}
