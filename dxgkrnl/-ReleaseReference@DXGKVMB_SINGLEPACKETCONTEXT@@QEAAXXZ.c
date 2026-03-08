/*
 * XREFs of ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0057384
 * Callers:
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x1C001B8EC (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C00564C8 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1C00566D0 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___ @ 0x1C00568A4 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1C0056A98 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     ?SinglePacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x1C005B6C0 (-SinglePacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z.c)
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1C005CC28 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(DXGKVMB_SINGLEPACKETCONTEXT *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(this, 0x42677844u);
}
