/*
 * XREFs of BiQueryBootEntryOrder @ 0x1409728AC
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140970350 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14097043C (BiBindEfiBootManager.c)
 *     BiExportEfiBootManager @ 0x140971C10 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140972A60 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x1403FC220 (ZwQueryBootEntryOrder.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140785B38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140785B90 (BiAcquirePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(_QWORD *a1, unsigned int *a2)
{
  void *v2; // rdi
  int BootEntryOrder; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  v8 = 0;
  BootEntryOrder = BiAcquirePrivilege(0x16u, (__int64)&v9);
  if ( BootEntryOrder >= 0 )
  {
    BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v8);
    if ( BootEntryOrder != -1073741789 )
      goto LABEL_6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x4B444342u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      BootEntryOrder = -1073741670;
LABEL_10:
      BiReleasePrivilege((unsigned int *)&v9);
      return (unsigned int)BootEntryOrder;
    }
    BootEntryOrder = ZwQueryBootEntryOrder((__int64)PoolWithTag, (__int64)&v8);
    if ( BootEntryOrder < 0 )
    {
LABEL_6:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)BootEntryOrder);
      if ( BootEntryOrder < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_10;
      }
    }
    *a2 = v8;
    *a1 = v2;
    goto LABEL_10;
  }
  return (unsigned int)BootEntryOrder;
}
