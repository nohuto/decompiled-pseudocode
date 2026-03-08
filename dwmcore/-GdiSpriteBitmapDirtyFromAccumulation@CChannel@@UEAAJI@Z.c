/*
 * XREFs of ?GdiSpriteBitmapDirtyFromAccumulation@CChannel@@UEAAJI@Z @ 0x1801CC200
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapDirtyFromAccumulation(CChannel *this, unsigned int a2)
{
  unsigned int v4; // ebx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v7, this);
  CChannel::CheckHandle((__int64)this, a2, 65);
  v6[0] = 509;
  v6[2] = 1;
  v6[1] = a2;
  v4 = CChannel::SendCommand(this, v6, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v7);
  return v4;
}
