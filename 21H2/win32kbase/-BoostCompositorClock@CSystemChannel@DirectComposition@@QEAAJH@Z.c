/*
 * XREFs of ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C02153B0
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0212800 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000E7E0 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001229C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0012424 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::BoostCompositorClock(
        DirectComposition::CBatchSharedMemoryPool ***this,
        int a2)
{
  _BYTE *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[21], 0xCuLL, &v6) )
    return 3221225473LL;
  v4 = v6;
  *(_DWORD *)v6 = 12;
  v4[8] = a2 != 0;
  *((_DWORD *)v4 + 1) = 270;
  return DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)this, 0LL, 1, 0LL);
}
