/*
 * XREFs of IoCreateSymbolicLink @ 0x14076D2F0
 * Callers:
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140A69AA0 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x140A95268 (RamdiskStart.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1403FB240 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = SymbolicLinkName;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 592;
  v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, DeviceName);
  if ( v2 >= 0 )
    ZwClose(LinkHandle);
  return v2;
}
