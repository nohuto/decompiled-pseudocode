/*
 * XREFs of MiReleaseSessionDriverCharges @ 0x14067FD74
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 */

char __fastcall MiReleaseSessionDriverCharges(__int64 a1)
{
  __int64 v3[21]; // [rsp+20h] [rbp-A8h] BYREF

  memset(&v3[1], 0, 0x90uLL);
  if ( *(_BYTE *)(a1 + 65) == 1 )
    MiReturnCrossPartitionControlAreaCharges(*(_QWORD *)(a1 + 80));
  v3[0] = *(_QWORD *)(a1 + 80);
  return MiManageSubsectionView(v3, (_QWORD *)(a1 + 24), 4);
}
