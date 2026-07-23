/*
 * XREFs of RtlIsSandboxedTokenHandle @ 0x140251410
 * Callers:
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1403FADC0 (ZwDuplicateToken.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 */

char __fastcall RtlIsSandboxedTokenHandle(void *a1)
{
  struct _SECURITY_SUBJECT_CONTEXT *v1; // rbx
  char IsSandboxedToken; // di
  NTSTATUS v4; // eax
  HANDLE Handle; // [rsp+38h] [rbp-29h] BYREF
  PVOID Object; // [rsp+40h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-19h] BYREF
  __int128 v8; // [rsp+78h] [rbp+17h] BYREF
  __int128 v9; // [rsp+88h] [rbp+27h]
  __int64 v10; // [rsp+98h] [rbp+37h] BYREF
  int v11; // [rsp+A0h] [rbp+3Fh]

  Handle = 0LL;
  v1 = 0LL;
  v10 = 0LL;
  v11 = 0;
  IsSandboxedToken = 1;
  v8 = 0LL;
  v9 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v10;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v10 = 0x20000000CLL;
    LOWORD(v11) = 1;
    if ( ZwDuplicateToken(a1, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle) < 0 )
      goto LABEL_4;
    Object = 0LL;
    *((_QWORD *)&v9 + 1) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
    *(_QWORD *)&v9 = Object;
    if ( v4 < 0 )
      goto LABEL_4;
    *(_QWORD *)&v8 = 0LL;
    v1 = (struct _SECURITY_SUBJECT_CONTEXT *)&v8;
  }
  IsSandboxedToken = RtlIsSandboxedToken(v1);
  if ( v1 )
    ObfDereferenceObjectWithTag(v1->PrimaryToken, 0x746C6644u);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  return IsSandboxedToken;
}
