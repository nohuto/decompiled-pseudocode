/*
 * XREFs of ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C005C368
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C005B740 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C005B31C (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(
        struct DXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN *a1)
{
  void *v2; // rcx
  bool v3; // di
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // [rsp+20h] [rbp-38h]
  bool v7; // [rsp+28h] [rbp-30h]
  bool v8; // [rsp+30h] [rbp-28h]

  v2 = (void *)*((_QWORD *)a1 + 5);
  v3 = 0;
  if ( (!v2 || (unsigned __int64)v2 > MmUserProbeAddress)
    && *((_QWORD *)a1 + 3) > MmUserProbeAddress
    && *((_QWORD *)a1 + 4) > MmUserProbeAddress )
  {
    if ( v2 )
      CRefCountedBuffer::RefCountedBufferRelease(v2);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x18u )
      v3 = *((_BYTE *)a1 + 48) & 1;
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
      *((PKSPIN_LOCK *)a1 + 3),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a1 + 4),
      v4,
      v5,
      v6,
      v7,
      v8,
      v3);
  }
}
