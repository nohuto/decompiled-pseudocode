/*
 * XREFs of BiQueryBootEntryOrder @ 0x14082BC18
 * Callers:
 *     BiBindEfiBootManager @ 0x14082C288 (BiBindEfiBootManager.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140A5AC9C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140A5B928 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140A5BF94 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwQueryBootEntryOrder @ 0x140414C10 (ZwQueryBootEntryOrder.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquirePrivilege @ 0x14082F784 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x14082F810 (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiQueryBootEntryOrder(_QWORD *a1, unsigned int *a2)
{
  void *v2; // rdi
  int BootEntryOrder; // ebx
  __int64 Pool2; // rax
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  v8 = 0;
  BootEntryOrder = BiAcquirePrivilege(22LL, &v9);
  if ( BootEntryOrder >= 0 )
  {
    BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v8);
    if ( BootEntryOrder != -1073741789 )
      goto LABEL_9;
    Pool2 = ExAllocatePool2(258LL, 4LL * v8, 1262764866LL);
    v2 = (void *)Pool2;
    if ( !Pool2 )
    {
      BootEntryOrder = -1073741670;
      goto LABEL_6;
    }
    BootEntryOrder = ZwQueryBootEntryOrder(Pool2, (__int64)&v8);
    if ( BootEntryOrder < 0 )
    {
LABEL_9:
      BiLogMessage(4LL, L"Failed to query boot entry order. Status: %x", (unsigned int)BootEntryOrder);
      if ( BootEntryOrder < 0 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0x4B444342u);
        goto LABEL_6;
      }
    }
    *a2 = v8;
    *a1 = v2;
LABEL_6:
    BiReleasePrivilege(&v9);
  }
  return (unsigned int)BootEntryOrder;
}
