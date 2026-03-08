/*
 * XREFs of SmFpAllocate @ 0x14045D93E
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403565C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14045C966 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x1405BDA4C (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405BEB1C (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1405C0914 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x1405C93E8 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     SmAcquireReleaseCharges @ 0x140359F14 (SmAcquireReleaseCharges.c)
 *     SmKmAllocateMdlForLock @ 0x1403A1920 (SmKmAllocateMdlForLock.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1403A1EB0 (MmMapLockedPagesWithReservedMapping.c)
 *     SmpFpWaitForResource @ 0x1405CA06C (SmpFpWaitForResource.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SmFpAllocate(volatile LONG *SpinLock, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rbx
  __int64 MdlForLock; // rax
  void *v10; // rax
  unsigned int v12; // [rsp+58h] [rbp+10h]

  if ( a2 >= 5 )
  {
    if ( (*(_BYTE *)(a4 + 10) & 5) != 0 )
    {
      v8 = *(_QWORD *)(a4 + 24);
      goto LABEL_14;
    }
    MdlForLock = (__int64)MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000010u);
LABEL_13:
    v8 = MdlForLock;
LABEL_14:
    if ( v8 )
      return v8;
    goto LABEL_15;
  }
  switch ( a2 )
  {
    case 2:
      MdlForLock = SmKmAllocateMdlForLock(
                     *((_QWORD *)SpinLock + 4),
                     (unsigned __int64)*((unsigned __int16 *)SpinLock + 50) << 12);
      goto LABEL_13;
    case 3:
      if ( (unsigned int)SmAcquireReleaseCharges(
                           *((_QWORD *)SpinLock + 4),
                           (unsigned __int64)*((unsigned __int16 *)SpinLock + 51) << 12,
                           1,
                           0) )
        return -8LL;
      break;
    case 4:
      break;
    default:
      v12 = 810708339;
      HIBYTE(v12) = a2 + 48;
      MdlForLock = ExAllocatePool2(64LL, *((unsigned __int16 *)SpinLock + a2 + 48), v12);
      goto LABEL_13;
  }
  v8 = 0LL;
LABEL_15:
  if ( a5 )
  {
    v10 = (void *)SmpFpWaitForResource(SpinLock);
    v8 = (__int64)v10;
    if ( a2 >= 5 )
      MmMapLockedPagesWithReservedMapping(v10, 0x6D526D73u, (PMDL)a4, MmCached);
  }
  return v8;
}
