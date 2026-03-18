/*
 * XREFs of PiDrvDbEnumDriverStoreNodes @ 0x1408153D0
 * Callers:
 *     PiDrvDbInit @ 0x140813944 (PiDrvDbInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041B1A0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041D020 (ZwQueryDirectoryObject.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14086539C (PiDrvDbRegisterNodeCallback.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbEnumDriverStoreNodes(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rdi
  NTSTATUS v4; // ebx
  int DirectoryObject; // eax
  _QWORD *i; // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DirectoryHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 1024LL, 1650749520LL);
    if ( Pool2 )
    {
      while ( 1 )
      {
        DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
        v4 = DirectoryObject;
        if ( DirectoryObject == -2147483622 )
          break;
        if ( DirectoryObject < 0 )
          goto LABEL_10;
        for ( i = Pool2; *(_WORD *)i; i += 4 )
        {
          if ( !(unsigned __int8)PiDrvDbRegisterNodeCallback(i[1], a2) )
            break;
        }
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741670;
    }
  }
LABEL_10:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v4;
}
