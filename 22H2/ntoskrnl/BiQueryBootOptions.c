/*
 * XREFs of BiQueryBootOptions @ 0x140972984
 * Callers:
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140971C10 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwQueryBootOptions @ 0x1403FC240 (ZwQueryBootOptions.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140785B38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785B90 (BiAcquirePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootOptions(_BOOT_OPTIONS **a1, ULONG *a2)
{
  _BOOT_OPTIONS *v2; // rdi
  NTSTATUS v5; // ebx
  _BOOT_OPTIONS *PoolWithTag; // rax
  ULONG BootOptionsLength; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  *a2 = 0;
  v9 = 0LL;
  BootOptionsLength = 0;
  v5 = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v5 = ZwQueryBootOptions(0LL, &BootOptionsLength);
    if ( v5 != -1073741789 )
      goto LABEL_6;
    PoolWithTag = (_BOOT_OPTIONS *)ExAllocatePoolWithTag(PagedPool, BootOptionsLength, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
LABEL_10:
      BiReleasePrivilege((unsigned int *)&v9);
      return (unsigned int)v5;
    }
    v5 = ZwQueryBootOptions(PoolWithTag, &BootOptionsLength);
    if ( v5 < 0 )
    {
LABEL_6:
      BiLogMessage(4LL, L"Failed to query boot options. Status: %x", (unsigned int)v5);
      if ( v5 < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = BootOptionsLength;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)v5;
}
