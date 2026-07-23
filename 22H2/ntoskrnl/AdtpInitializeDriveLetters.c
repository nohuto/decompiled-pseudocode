/*
 * XREFs of AdtpInitializeDriveLetters @ 0x14079EDE8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x14079E8B0 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x1403B4690 (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     NtOpenSymbolicLinkObject @ 0x140666020 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x140666310 (NtQuerySymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r13
  int v6; // esi
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v8; // ebx
  char v9; // r14
  UNICODE_STRING *v10; // rsi
  char *v12; // r14
  PVOID PoolWithTag; // rax
  void *v14; // r15
  HANDLE v15; // rcx
  size_t v16; // [rsp+28h] [rbp-69h]
  HANDLE LinkHandle; // [rsp+38h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  LinkHandle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  v6 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    Buffer[12] = v6 + 65;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
      break;
LABEL_3:
    if ( (unsigned int)++v6 >= 0x1A )
      goto LABEL_4;
  }
  *((_WORD *)&DriveMappingArray + 12 * v4) = Buffer[12];
  v12 = (char *)&DriveMappingArray + 24 * v4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6B416553u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = LinkHandle;
    *((_DWORD *)v12 + 2) = 0x1000000;
    *((_QWORD *)v12 + 2) = PoolWithTag;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(v15, (PUNICODE_STRING)(v12 + 8), 0LL);
    NtClose(LinkHandle);
    if ( SymbolicLinkObject < 0 )
    {
      ExFreePoolWithTag(v14, 0);
      RtlInitUnicodeString((PUNICODE_STRING)(v12 + 8), 0LL);
    }
    else
    {
      ++v4;
    }
    goto LABEL_3;
  }
  SymbolicLinkObject = -1073741801;
LABEL_4:
  if ( SymbolicLinkObject == -1073741801 )
    return 3221225495LL;
  v8 = 0;
  while ( v8 < v4 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v9 = 0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v8 + 8 * v8 + 8);
    ObjectAttributes.ObjectName = v10;
    if ( NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      if ( NtQuerySymbolicLinkObject(LinkHandle, v10, 0LL) < 0 )
      {
        ExFreePoolWithTag(v10->Buffer, 0);
        RtlInitUnicodeString(v10, 0LL);
      }
      else
      {
        v9 = 1;
      }
      NtClose(LinkHandle);
      if ( v9 )
        continue;
    }
    ++v8;
  }
  return 0LL;
}
