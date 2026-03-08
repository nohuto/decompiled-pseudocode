/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0099920
 * Callers:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C005B650 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0060E20 (NtDCompositionSubmitDWMBatch.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C00615C0 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0098744 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x1C024B160 (-ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0091B60 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C009997C (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C00999B4 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  DirectComposition::CApplicationChannel **v2; // rdi
  int v4; // edx

  v2 = (DirectComposition::CApplicationChannel **)((char *)this + 8);
  *((_BYTE *)this + 32) = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v4 = *((_DWORD *)this + 28);
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)*v2 + 5), v4);
    *((_DWORD *)this + 28) = 0;
  }
  if ( (*((_BYTE *)this + 32) & 4) == 0 )
    DirectComposition::CApplicationChannel::NotifyBatchProcessed(*v2, this);
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(*v2, this);
}
