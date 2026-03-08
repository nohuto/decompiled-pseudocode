/*
 * XREFs of PiDrvDbUnregisterNode @ 0x14096E504
 * Callers:
 *     PiDrvDbUnmountNode @ 0x14096E4A8 (PiDrvDbUnmountNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140412E10 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x1404145F0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1404149D0 (ZwOpenSymbolicLinkObject.c)
 *     PiDrvDbDriverStoreNodesUpdated @ 0x14081C56C (PiDrvDbDriverStoreNodesUpdated.c)
 *     PiDrvDbDestroyNode @ 0x14096CEBC (PiDrvDbDestroyNode.c)
 *     _PnpCtxUnregisterMachineNode @ 0x140A5E08C (_PnpCtxUnregisterMachineNode.c)
 *     DrvDbUnregisterDatabase @ 0x140A6AC64 (DrvDbUnregisterDatabase.c)
 */

__int64 __fastcall PiDrvDbUnregisterNode(char *P)
{
  __int64 v2; // rcx
  int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+70h] [rbp+10h] BYREF
  HANDLE DirectoryHandle; // [rsp+78h] [rbp+18h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Attributes = 592;
  if ( ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(P + 16);
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0x10000u, &ObjectAttributes) >= 0 )
    {
      ZwMakeTemporaryObject(LinkHandle);
      ZwClose(LinkHandle);
    }
    ZwClose(DirectoryHandle);
  }
  if ( (*((_DWORD *)P + 16) & 8) == 0 || (v3 = PnpCtxUnregisterMachineNode(v2, *((_QWORD *)P + 3)), v3 >= 0) )
  {
    v3 = DrvDbUnregisterDatabase(v2, *((_QWORD *)P + 3));
    if ( v3 >= 0 )
    {
      PiDrvDbDestroyNode(P);
      PiDrvDbDriverStoreNodesUpdated();
    }
  }
  return (unsigned int)v3;
}
