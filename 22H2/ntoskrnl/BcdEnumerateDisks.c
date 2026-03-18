/*
 * XREFs of BcdEnumerateDisks @ 0x140680EC0
 * Callers:
 *     ExpTranslateNtPath @ 0x1409FE50C (ExpTranslateNtPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1403DDD60 (swprintf_s.c)
 *     ExpDiskEnumCallback @ 0x140412090 (ExpDiskEnumCallback.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041B1A0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041D020 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x140809CE4 (BiIsValidDiskDevice.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BcdEnumerateDisks(__int64 a1, __int64 a2)
{
  int DirectoryObject; // ebx
  unsigned int v4; // esi
  __int64 i; // rdx
  wchar_t **Pool2; // rdi
  wchar_t *v8; // r14
  wchar_t **v9; // rsi
  int *v10; // [rsp+28h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+C0h] [rbp+40h] BYREF
  int v15; // [rsp+C4h] [rbp+44h]
  unsigned int v16; // [rsp+D0h] [rbp+50h]
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  v15 = HIDWORD(a1);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v14 = 0;
  v16 = 0;
  DirectoryHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DirectoryObject = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( DirectoryObject >= 0 )
  {
    v4 = 4096;
    for ( i = 4096LL; ; i = v4 )
    {
      Pool2 = (wchar_t **)ExAllocatePool2(258LL, i, 1262764866LL);
      if ( !Pool2 )
      {
        DirectoryObject = -1073741801;
        goto LABEL_7;
      }
      v11 = 0LL;
      v10 = &v14;
      v14 = 0;
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
      if ( DirectoryObject != 261 )
        break;
      ExFreePoolWithTag(Pool2, 0x4B444342u);
      v4 += 4096;
    }
    ZwClose(DirectoryHandle);
    DirectoryHandle = 0LL;
    if ( (int)(DirectoryObject + 0x80000000) < 0 || DirectoryObject == -2147483622 )
    {
      v8 = (wchar_t *)ExAllocatePool2(258LL, 88LL, 1262764866LL);
      if ( v8 )
      {
        DirectoryObject = 0;
        if ( *(_WORD *)Pool2 )
        {
          v9 = Pool2 + 1;
          do
          {
            if ( (unsigned __int8)BiIsValidDiskDevice(*v9, v9[2]) )
            {
              swprintf_s(v8, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v9, 0LL, v10, v11);
              if ( ExpDiskEnumCallback(v8, v16, a2) )
                break;
            }
            v9 += 4;
          }
          while ( *((_WORD *)v9 - 4) );
        }
        ExFreePoolWithTag(v8, 0x4B444342u);
      }
      else
      {
        DirectoryObject = -1073741801;
      }
    }
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  }
LABEL_7:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)DirectoryObject;
}
