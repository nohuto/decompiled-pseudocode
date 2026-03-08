/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x1800F0160
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, unsigned int a2, __int8 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle((__int64)this, a2, 204);
  if ( a4 )
    CChannel::CheckHandle((__int64)this, a4, 67);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i8[8] = a3;
  si128.m128i_i32[3] = a4;
  v8 = CChannel::SendCommand(this, &si128, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
