/*
 * XREFs of PfpSourceGetPrefetchSupport @ 0x14097BE40
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     NtOpenProcess @ 0x1406AC1B0 (NtOpenProcess.c)
 *     NtOpenSession @ 0x1407940F0 (NtOpenSession.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PfpSourceGetPrefetchSupport(int *a1, __int64 a2)
{
  PVOID v2; // rsi
  HANDLE v3; // rdi
  HANDLE UniqueProcess; // r14
  int v6; // ecx
  int v8; // ecx
  int v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  PVOID Object; // [rsp+40h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-81h] BYREF
  CLIENT_ID ClientId; // [rsp+50h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-39h] BYREF
  wchar_t pszDest[40]; // [rsp+A0h] [rbp-29h] BYREF

  v2 = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  UniqueProcess = 0LL;
  *(_DWORD *)a2 = *a1;
  v6 = *a1;
  Object = 0LL;
  ProcessHandle = 0LL;
  ClientId.UniqueProcess = 0LL;
  memset(&ObjectAttributes, 0, 32);
  DestinationString = 0LL;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_16;
  }
  v8 = v6 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return (unsigned int)-1073741637;
    v10 = (unsigned int)a1[1];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ClientId.UniqueThread = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = (HANDLE)v10;
    v9 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    if ( v9 < 0 )
    {
      v3 = ProcessHandle;
LABEL_19:
      if ( !v3 )
        return (unsigned int)v9;
      NtClose(v3);
      goto LABEL_21;
    }
    v3 = ProcessHandle;
    v11 = ObpReferenceObjectByHandleWithTag(
            (ULONG_PTR)ProcessHandle,
            0x1FFFFF,
            (__int64)PsProcessType,
            0,
            0x73576650u,
            &Object,
            0LL,
            0LL);
    v2 = Object;
    v9 = v11;
    if ( v11 < 0 )
    {
LABEL_17:
      if ( v2 )
        ObfDereferenceObjectWithTag(v2, 0x73576650u);
      goto LABEL_19;
    }
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 && v12 != ((*((_QWORD *)Object + 136) ^ *((_QWORD *)Object + 141)) & 0x1FFFFFFFFFFFFFFFLL) )
    {
      v9 = -1073741275;
      goto LABEL_17;
    }
    *(_QWORD *)(a2 + 8) = v3;
    v3 = 0LL;
LABEL_16:
    v9 = 0;
    goto LABEL_17;
  }
  RtlStringCbPrintfW(pszDest, 0x50uLL, L"\\KernelObjects\\Session%d", (unsigned int)a1[1]);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtOpenSession(&ClientId, 983043, (__int64)&ObjectAttributes);
  if ( v9 >= 0 )
  {
    *(_QWORD *)(a2 + 8) = ClientId.UniqueProcess;
    goto LABEL_16;
  }
  UniqueProcess = ClientId.UniqueProcess;
LABEL_21:
  if ( UniqueProcess )
    NtClose(UniqueProcess);
  return (unsigned int)v9;
}
