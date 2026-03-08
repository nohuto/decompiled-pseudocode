/*
 * XREFs of CmpCmdHiveClose @ 0x14074B34C
 * Callers:
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140412530 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1404127F0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x140412E90 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  __int64 *v2; // rdi
  BOOLEAN v3; // r14
  void *v4; // rbx
  __int64 v5; // rdx
  unsigned int i; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+68h] [rbp-18h]

  v11 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v10 = 0LL;
  v2 = (__int64 *)(a1 + 1544);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = (void *)*v2;
  if ( *v2 && ZwQueryInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
  {
    if ( *(_BYTE *)(a1 + 141) )
    {
      *(_QWORD *)&v10 = MEMORY[0xFFFFF78000000014];
    }
    else
    {
      v5 = v10;
      if ( *(_QWORD *)(a1 + 4184) )
        v5 = *(_QWORD *)(a1 + 4184);
      *(_QWORD *)&v10 = v5;
    }
    *((_QWORD *)&FileInformation + 1) = MEMORY[0xFFFFF78000000014];
    ZwSetInformationFile(v4, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
  }
  for ( i = 0; i < 6; ++i )
  {
    if ( *v2 )
    {
      ZwSetInformationObject(*v2, 4LL);
      ZwClose((HANDLE)*v2);
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
