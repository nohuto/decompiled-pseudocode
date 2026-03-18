/*
 * XREFs of ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C020D0D0
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0021F80 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0086654 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C020A1E8 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C00258D4 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C0026EA4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002715C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::BoostCompositorClock(
        DirectComposition::CBatchSharedMemoryPool ***this,
        char a2)
{
  _DWORD *v4; // rax
  void *v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)this);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(this[21], 0xCuLL, &v6) )
    return 3221225473LL;
  v4 = v6;
  *(_DWORD *)v6 = 12;
  v4[1] = 268;
  *((_BYTE *)v4 + 8) = a2;
  return DirectComposition::CApplicationChannel::Commit(
           (DirectComposition::CApplicationChannel *)this,
           0LL,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0);
}
