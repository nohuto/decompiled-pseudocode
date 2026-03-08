/*
 * XREFs of SmmUnlockPages @ 0x1C03D341C
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D2E8C (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     SmmLockPagesForAdapter @ 0x1C03D31E4 (SmmLockPagesForAdapter.c)
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D32D0 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmUnlockPages(PMDL Mdl)
{
  _InterlockedExchangeAdd64(&qword_1C013BD00, -(__int64)Mdl->ByteCount);
  MmUnlockPages(Mdl);
  IoFreeMdl(Mdl);
}
