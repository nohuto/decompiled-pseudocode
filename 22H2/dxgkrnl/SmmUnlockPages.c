/*
 * XREFs of SmmUnlockPages @ 0x1C03D7C5C
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D76CC (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     SmmLockPagesForAdapter @ 0x1C03D7A24 (SmmLockPagesForAdapter.c)
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03D7B10 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmUnlockPages(PMDL Mdl)
{
  _InterlockedExchangeAdd64(&qword_1C0140CF0, -(__int64)Mdl->ByteCount);
  MmUnlockPages(Mdl);
  IoFreeMdl(Mdl);
}
