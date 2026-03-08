/*
 * XREFs of ?ReleaseMultirangeReference@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1C0032220
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0099D5C (-Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0099FC0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017510 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(VIDMM_RECYCLE_BLOCK *P)
{
  --*((_QWORD *)P + 1);
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage()
    && !*(_QWORD *)P
    && !*((_QWORD *)P + 1) )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(P);
  }
}
