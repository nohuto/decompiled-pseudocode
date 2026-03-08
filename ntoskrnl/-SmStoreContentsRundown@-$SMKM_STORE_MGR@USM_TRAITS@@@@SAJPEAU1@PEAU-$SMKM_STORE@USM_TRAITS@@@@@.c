/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405CACD0
 * Callers:
 *     SmEtwEnableCallback @ 0x140840E90 (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1405C085C (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rcx
  void *v6; // rsi
  int v7; // edi
  struct _EX_RUNDOWN_REF *v8; // rax
  LARGE_INTEGER v10[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD Object[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-18h] BYREF

  Object[1] = 0;
  v12[1] = v12;
  Object[0] = 393216;
  v12[0] = v12;
  *(_OWORD *)&v10[0].LowPart = 0LL;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1683451251LL);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 8) = -1;
    *(_DWORD *)Pool2 = 3;
    v7 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v5, a2, Pool2, (__int64)Object, v10);
    if ( v7 >= 0 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      return v10[0].LowPart;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v8 + 1);
  }
  return (unsigned int)v7;
}
