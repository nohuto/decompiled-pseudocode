/*
 * XREFs of SmFpAllocate @ 0x14037DA00
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140237720 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14037D1B0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14037D8B8 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037DAEC (SmKmStoreHelperCommandProcess.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140393778 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405F72A8 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140262ED4 (SmAcquireReleaseCharges.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmAllocateMdlForLock @ 0x14037DCC8 (SmKmAllocateMdlForLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403D7610 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x1405FC690 (SmpFpWaitForResource.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmFpAllocate(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  PVOID MdlForLock; // rax
  PVOID v9; // rbx
  void *v11; // rax
  ULONG Tag; // [rsp+58h] [rbp+10h]

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v9 = *(PVOID *)(a4 + 24);
LABEL_7:
      if ( v9 )
        return (__int64)v9;
      goto LABEL_16;
    }
    MdlForLock = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
LABEL_6:
    v9 = MdlForLock;
    goto LABEL_7;
  }
  switch ( a2 )
  {
    case 2:
      MdlForLock = (PVOID)SmKmAllocateMdlForLock((unsigned __int64)*((unsigned __int16 *)SpinLock + 46) << 12);
      goto LABEL_6;
    case 3:
      if ( (unsigned int)SmAcquireReleaseCharges((unsigned __int64)*((unsigned __int16 *)SpinLock + 47) << 12, 1, 0) )
        return -8LL;
      break;
    case 4:
      break;
    default:
      Tag = 810708339;
      HIBYTE(Tag) = a2 + 48;
      MdlForLock = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)SpinLock + a2 + 44), Tag);
      goto LABEL_6;
  }
  v9 = 0LL;
LABEL_16:
  if ( a5 )
  {
    v11 = (void *)SmpFpWaitForResource(SpinLock);
    v9 = v11;
    if ( a2 >= 5 )
      MmMapLockedPagesWithReservedMapping(v11, 0x6D526D73u, (PMDL)a4, MmCached);
  }
  return (__int64)v9;
}
