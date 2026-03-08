/*
 * XREFs of ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801CD490
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RenderTargetSetRoot(CChannel *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle((__int64)this, a2, 146);
  if ( a3 )
    CChannel::CheckHandle((__int64)this, a3, 196);
  v8[0] = 337;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
