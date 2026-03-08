/*
 * XREFs of ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405CADD8
 * Callers:
 *     ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405C2E40 (-StDmDeviceError@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     SmKmStoreReference @ 0x140356410 (SmKmStoreReference.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rbx
  int v10; // edx

  v8 = 0;
  Pool2 = ExAllocatePool2(64LL, 64LL, 1834249587LL);
  if ( Pool2 )
  {
    if ( SmKmStoreReference(a1, *(_DWORD *)(a2 + 6016)) )
    {
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 48) = 0LL;
      *(_QWORD *)(Pool2 + 56) = 0LL;
      *(_QWORD *)(Pool2 + 16) = SmKmStoreTerminateWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 40) = a2 + 6216;
      *(_QWORD *)(Pool2 + 32) = a1;
      *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 6016);
      v10 = *(_DWORD *)(a1 + 1856) & 1;
      *(_DWORD *)(Pool2 + 56) = a3;
      *(_DWORD *)(Pool2 + 52) = v10;
      *(_DWORD *)(Pool2 + 60) = a4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, CriticalWorkQueue);
    }
    else
    {
      v8 = -1073741431;
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
