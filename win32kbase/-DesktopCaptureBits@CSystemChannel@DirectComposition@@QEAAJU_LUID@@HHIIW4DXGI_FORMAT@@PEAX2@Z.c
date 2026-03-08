/*
 * XREFs of ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C024BC04
 * Callers:
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0249170 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C005F994 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005FC4C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::DesktopCaptureBits(
        DirectComposition::CBatchSharedMemoryPool ***a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  char *v13; // rcx
  int v14; // eax
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)a1);
  if ( !DirectComposition::CBatch::GetPayloadWritePointer(a1[21], 0x3CuLL, &v16) )
    return 3221225473LL;
  v13 = (char *)v16;
  v14 = a5;
  *(_DWORD *)v16 = 60;
  *(_QWORD *)(v13 + 36) = 0LL;
  *((_DWORD *)v13 + 6) = v14;
  *((_DWORD *)v13 + 7) = a6;
  *((_DWORD *)v13 + 8) = a7;
  *(_QWORD *)(v13 + 44) = a8;
  *(_QWORD *)(v13 + 52) = a9;
  *((_DWORD *)v13 + 1) = 269;
  *((_QWORD *)v13 + 1) = a2;
  *((_DWORD *)v13 + 4) = a3;
  *((_DWORD *)v13 + 5) = a4;
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
