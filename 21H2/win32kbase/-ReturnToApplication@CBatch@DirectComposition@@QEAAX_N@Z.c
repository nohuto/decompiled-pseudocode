/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0080AA4
 * Callers:
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C0012F5C (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C0013A44 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00805D0 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C009549C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x1C0214CB0 (-ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0081BE0 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0081DC8 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0081EE0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  char v2; // dl
  unsigned int v4; // eax

  v2 = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v4 = *((_DWORD *)this + 28);
  *((_BYTE *)this + 32) = v2;
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v4);
    *((_DWORD *)this + 28) = 0;
    v2 = *((_BYTE *)this + 32);
  }
  if ( (v2 & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(
      *((DirectComposition::CApplicationChannel **)this + 1),
      this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(
    *((DirectComposition::CApplicationChannel **)this + 1),
    this);
}
