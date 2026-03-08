/*
 * XREFs of ?WindowNodeUpdateSpriteHandle@CChannel@@UEAAJIPEAUHSPRITE__@@@Z @ 0x180100FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeUpdateSpriteHandle(CChannel *this, unsigned int a2, HSPRITE a3)
{
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  HSPRITE v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 204);
  v8[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v8[1] = a2;
  v9 = a3;
  v6 = CChannel::SendCommand(this, v8, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v6;
}
