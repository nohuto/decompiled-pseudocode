/*
 * XREFs of ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C00418E4
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0041290 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11111@Z @ 0x1C0040D58 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusPropagatePresentHistoryToken(
        struct DXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN *a1)
{
  struct _SLIST_ENTRY *v2; // rcx
  bool v3; // di
  ULONG64 v4; // rdx
  int v5; // r8d
  __int64 v6; // r9
  bool v7; // [rsp+20h] [rbp-28h]
  bool v8; // [rsp+28h] [rbp-20h]
  bool v9; // [rsp+30h] [rbp-18h]

  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)a1 + 5);
  v3 = 0;
  if ( !v2 || (unsigned __int64)v2 > MmUserProbeAddress )
  {
    v4 = MmUserProbeAddress;
    if ( *((_QWORD *)a1 + 3) > MmUserProbeAddress && *((_QWORD *)a1 + 4) > MmUserProbeAddress )
    {
      if ( v2 )
        CRefCountedBuffer::RefCountedBufferRelease(v2);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v2, v4) + 408) >= 0x18u )
        v3 = *((_BYTE *)a1 + 48) & 1;
      DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a1 + 3),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a1 + 4),
        v5,
        v6,
        v7,
        v8,
        v9,
        v3);
    }
  }
}
