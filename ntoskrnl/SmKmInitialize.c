/*
 * XREFs of SmKmInitialize @ 0x14084CF40
 * Callers:
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403A340C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 (__fastcall *__fastcall SmKmInitialize(__int64 a1))(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, unsigned int); // rax

  memset((void *)a1, 0, 0x1B8uLL);
  *(_DWORD *)(a1 + 432) = -1;
  result = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  *(_QWORD *)(a1 + 256) = SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback;
  return result;
}
