/*
 * XREFs of ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D6894
 * Callers:
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00D67AC (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C005F994 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005FC4C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ForceRender(
        DirectComposition::CBatchSharedMemoryPool ***a1,
        char a2,
        char a3,
        int a4,
        char a5)
{
  _DWORD *v9; // rcx
  char v10; // al
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(a1[21], 0x14uLL, &v12) )
    return 3221225473LL;
  v9 = v12;
  v10 = a5;
  *(_DWORD *)v12 = 20;
  v9[1] = 270;
  *((_BYTE *)v9 + 8) = a2;
  *((_BYTE *)v9 + 9) = a3;
  v9[3] = a4;
  *((_BYTE *)v9 + 16) = v10;
  return DirectComposition::CApplicationChannel::Commit(
           (DirectComposition::CApplicationChannel *)a1,
           0LL,
           1,
           0,
           0LL,
           0LL,
           0LL,
           0);
}
