/*
 * XREFs of ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C008D41C
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C008D0B0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C008D350 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FDFC0 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpEnsureKey(void **a1, const unsigned __int16 *a2, char a3)
{
  _OWORD *v3; // rbx
  struct _ACL *v4; // rdi
  NTSTATUS v8; // eax
  const char *v9; // rdx
  unsigned int v10; // ebx
  ULONG v11; // ebx
  struct _ACL *v12; // rax
  NTSTATUS Acl; // eax
  const char *v14; // rdx
  void *v15; // rax
  unsigned int v17; // r8d
  int v18; // ecx
  unsigned int v19; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  ULONG Disposition; // [rsp+F0h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v3 = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a3 )
    goto LABEL_8;
  v8 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v10 = v8;
  if ( v8 < 0 )
  {
    v17 = 4539;
    v18 = v8;
LABEL_20:
    CitpLogFailureWorker(v18, v9, v17);
    goto LABEL_15;
  }
  v11 = RtlLengthSid(SeExports->SeLocalSystemSid) + 20;
  v12 = (struct _ACL *)Win32AllocPool(v11, 0x49637355u);
  v4 = v12;
  if ( !v12 )
  {
    v10 = -1073741670;
    v17 = 4548;
    v18 = -1073741670;
    goto LABEL_20;
  }
  Acl = RtlCreateAcl(v12, v11, 2u);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4555;
    goto LABEL_23;
  }
  Acl = RtlAddAccessAllowedAce(v4, 2u, 0xF003Fu, SeExports->SeLocalSystemSid);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4565;
    goto LABEL_23;
  }
  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4572;
    goto LABEL_23;
  }
  v3 = SecurityDescriptor;
LABEL_8:
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  Disposition = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v3;
  Acl = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  v10 = Acl;
  if ( Acl < 0 )
  {
    v19 = 4590;
  }
  else
  {
    if ( Disposition == 1 || !a3 || (Acl = ZwSetSecurityObject(KeyHandle, 4u, SecurityDescriptor), v10 = Acl, Acl >= 0) )
    {
      v15 = KeyHandle;
      KeyHandle = 0LL;
      v10 = 0;
      *a1 = v15;
      goto LABEL_13;
    }
    v19 = 4604;
  }
LABEL_23:
  CitpLogFailureWorker(Acl, v14, v19);
LABEL_13:
  if ( v4 )
    Win32FreePool((__int64)v4);
LABEL_15:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v10;
}
