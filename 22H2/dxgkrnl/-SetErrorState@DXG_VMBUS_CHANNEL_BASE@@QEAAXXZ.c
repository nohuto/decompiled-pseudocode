/*
 * XREFs of ?SetErrorState@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C023B6CC
 * Callers:
 *     ?VmBusProcessPacketCblt@@YAXPEAX@Z @ 0x1C00DA1F0 (-VmBusProcessPacketCblt@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::SetErrorState(DXG_VMBUS_CHANNEL_BASE *this, __int64 a2)
{
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 304322) )
    *((_BYTE *)this + 57) = 1;
}
