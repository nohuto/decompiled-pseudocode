/*
 * XREFs of AdtpInitializeDriveLetters @ 0x140841630
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140841394 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x14039A9CC (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     NtQuerySymbolicLinkObject @ 0x140755C30 (NtQuerySymbolicLinkObject.c)
 *     NtOpenSymbolicLinkObject @ 0x1407563E0 (NtOpenSymbolicLinkObject.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r13
  unsigned int i; // esi
  int SymbolicLinkObject; // ebx
  unsigned int v8; // ebx
  char v9; // r14
  UNICODE_STRING *v10; // rsi
  char *v12; // r14
  __int64 Pool2; // rax
  void *v14; // r15
  HANDLE v15; // rcx
  size_t v16; // [rsp+28h] [rbp-69h]
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-41h]
  int v21; // [rsp+58h] [rbp-39h]
  int v22; // [rsp+5Ch] [rbp-35h]
  __int128 v23; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  v18[1] = 0;
  DestinationString = 0LL;
  v22 = 0;
  v4 = 0;
  Handle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  for ( i = 0; i < 0x1A; ++i )
  {
    v18[0] = 48;
    Buffer[12] = i + 65;
    v19 = 0LL;
    p_DestinationString = &DestinationString;
    v21 = 576;
    v23 = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject((unsigned __int64)&Handle, 1, (__int64)v18);
    if ( SymbolicLinkObject >= 0 )
    {
      *((_WORD *)&DriveMappingArray + 12 * v4) = Buffer[12];
      v12 = (char *)&DriveMappingArray + 24 * v4;
      Pool2 = ExAllocatePool2(256LL, 256LL, 1799447891LL);
      v14 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v15 = Handle;
      *((_DWORD *)v12 + 2) = 0x1000000;
      *((_QWORD *)v12 + 2) = Pool2;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(v15, (unsigned __int64)(v12 + 8), 0LL);
      NtClose(Handle);
      if ( SymbolicLinkObject < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        RtlInitUnicodeString((PUNICODE_STRING)(v12 + 8), 0LL);
      }
      else
      {
        ++v4;
      }
    }
  }
  if ( SymbolicLinkObject == -1073741801 )
    return (unsigned int)SymbolicLinkObject;
  v8 = 0;
  while ( v8 < v4 )
  {
    v18[0] = 48;
    v19 = 0LL;
    v9 = 0;
    v21 = 576;
    v23 = 0LL;
    v10 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v8 + 8 * v8 + 8);
    p_DestinationString = v10;
    if ( (int)NtOpenSymbolicLinkObject((unsigned __int64)&Handle, 1, (__int64)v18) >= 0 )
    {
      if ( (int)NtQuerySymbolicLinkObject(Handle, (unsigned __int64)v10, 0LL) < 0 )
      {
        ExFreePoolWithTag(v10->Buffer, 0);
        RtlInitUnicodeString(v10, 0LL);
      }
      else
      {
        v9 = 1;
      }
      NtClose(Handle);
      if ( v9 )
        continue;
    }
    ++v8;
  }
  return 0LL;
}
