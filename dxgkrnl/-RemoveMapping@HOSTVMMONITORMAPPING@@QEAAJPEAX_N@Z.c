/*
 * XREFs of ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAX_N@Z @ 0x1C0057404
 * Callers:
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0340DC0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1C0056A98 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::RemoveMapping(HOSTVMMONITORMAPPING *this, void *a2)
{
  void *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___(this, &v3);
}
