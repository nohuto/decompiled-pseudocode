/*
 * XREFs of CmRegUtilCreateUcKey @ 0x1C039392C
 * Callers:
 *     CmRegUtilCreateWstrKey @ 0x1C03939D4 (CmRegUtilCreateWstrKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilCreateUcKey(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        ULONG *a6,
        _QWORD *a7)
{
  NTSTATUS v7; // r8d
  void *v8; // rdx
  ULONG v9; // ecx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+10h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+28h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  Disposition = 0;
  KeyHandle = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  v7 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( v7 >= 0 )
  {
    v9 = Disposition;
    v8 = KeyHandle;
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
  }
  *a7 = v8;
  if ( a6 )
    *a6 = v9;
  return (unsigned int)v7;
}
