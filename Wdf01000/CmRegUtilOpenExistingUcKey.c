/*
 * XREFs of CmRegUtilOpenExistingUcKey @ 0x1C00B1AAC
 * Callers:
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00B1B24 (CmRegUtilOpenExistingWstrKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmRegUtilOpenExistingUcKey(
        void *BaseHandle,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        void **Handle)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+20h] [rbp-30h] BYREF
  void *newHandle; // [rsp+60h] [rbp+10h] BYREF

  *(&objectAttributes.Attributes + 1) = 0;
  newHandle = 0LL;
  *Handle = 0LL;
  objectAttributes.RootDirectory = BaseHandle;
  objectAttributes.ObjectName = KeyName;
  *(_QWORD *)&objectAttributes.Length = 48LL;
  objectAttributes.Attributes = 576;
  *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&newHandle, DesiredAccess, &objectAttributes);
  if ( result >= 0 )
    *Handle = newHandle;
  return result;
}
