/*
 * XREFs of SmKmStoreFileCreateForIoType @ 0x1409D6D88
 * Callers:
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwSetSecurityObject @ 0x1404159D0 (ZwSetSecurityObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoCreateFile @ 0x140781BC0 (IoCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileDelete @ 0x1409D7038 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1409D735C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileCreateForIoType(_OWORD *a1, const WCHAR *a2, int *a3, __int64 a4, int a5)
{
  BOOL v8; // edi
  int v9; // r14d
  BOOLEAN v10; // r12
  int IsVolumeIoPossible; // ebx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  HANDLE FileHandle[8]; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v21; // [rsp+130h] [rbp+30h]
  PVOID Object; // [rsp+190h] [rbp+90h] BYREF
  int v23; // [rsp+198h] [rbp+98h] BYREF

  v23 = 0;
  a5 = 0;
  v21 = 0LL;
  v8 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(FileHandle, 0, sizeof(FileHandle));
  if ( a3 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    a3 = &a5;
  }
  v10 = IoSetThreadHardErrorMode(0);
  RtlInitUnicodeString(&DestinationString, a2);
  IsVolumeIoPossible = SmKmStoreFileMakeSecurityDescriptor(SecurityDescriptor);
  if ( IsVolumeIoPossible >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    while ( 1 )
    {
      IsVolumeIoPossible = IoCreateFile(
                             FileHandle,
                             0x140003u,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0x2000u,
                             0,
                             0,
                             0x800Au,
                             0LL,
                             0,
                             CreateFileTypeNone,
                             0LL,
                             *a3 != 0 ? 264 : 266);
      if ( IsVolumeIoPossible < 0 )
        break;
      Object = 0LL;
      IsVolumeIoPossible = ObReferenceObjectByHandle(FileHandle[0], 0x10003u, 0LL, 0, &Object, 0LL);
      FileHandle[1] = Object;
      if ( IsVolumeIoPossible < 0 )
        break;
      v8 = !*a3 || (IoStatusBlock.Information & 0xFFFFFFFFFFFFFFFDuLL) == 0;
      IsVolumeIoPossible = ZwSetSecurityObject(FileHandle[0], 4u, SecurityDescriptor);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( *a3 )
        goto LABEL_23;
      IsVolumeIoPossible = SmKmIsVolumeIoPossible((__int64)FileHandle, &v23);
      if ( IsVolumeIoPossible < 0 )
        break;
      if ( v23 )
      {
LABEL_23:
        v13 = *(_OWORD *)&FileHandle[2];
        *a1 = *(_OWORD *)FileHandle;
        v14 = *(_OWORD *)&FileHandle[4];
        a1[1] = v13;
        v15 = *(_OWORD *)&FileHandle[6];
        a1[2] = v14;
        a1[3] = v15;
        memset(FileHandle, 0, sizeof(FileHandle));
        IsVolumeIoPossible = 0;
        goto LABEL_22;
      }
      if ( v9 )
      {
        IsVolumeIoPossible = -1073741637;
        break;
      }
      *a3 = 1;
      if ( v8 )
      {
        SmKmStoreFileDelete(FileHandle);
        v8 = 0;
      }
      SmKmFileInfoCleanup((__int64)FileHandle);
      memset(FileHandle, 0, sizeof(FileHandle));
    }
    if ( v8 )
      SmKmStoreFileDelete(FileHandle);
  }
LABEL_22:
  SmKmFileInfoCleanup((__int64)FileHandle);
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)IsVolumeIoPossible;
}
