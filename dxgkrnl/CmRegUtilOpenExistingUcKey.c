/*
 * XREFs of CmRegUtilOpenExistingUcKey @ 0x1C0393A34
 * Callers:
 *     CmRegUtilOpenExistingWstrKey @ 0x1C0393AAC (CmRegUtilOpenExistingWstrKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmRegUtilOpenExistingUcKey(void *a1, struct _UNICODE_STRING *a2, ACCESS_MASK a3, void **a4)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *a4 = 0LL;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  if ( result >= 0 )
    *a4 = KeyHandle;
  return result;
}
