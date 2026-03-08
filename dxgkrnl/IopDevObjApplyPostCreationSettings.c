/*
 * XREFs of IopDevObjApplyPostCreationSettings @ 0x1C03926D0
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C0392540 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C0393830 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 */

NTSTATUS __fastcall IopDevObjApplyPostCreationSettings(PVOID Object, __int64 a2)
{
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  if ( (*(_DWORD *)a2 & 2) == 0 )
    return 0;
  result = SeUtilSecurityInfoFromSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0, IoDeviceObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v5 = ZwSetSecurityObject(Handle, 0, *(PSECURITY_DESCRIPTOR *)(a2 + 8));
      ZwClose(Handle);
      return v5;
    }
  }
  return result;
}
