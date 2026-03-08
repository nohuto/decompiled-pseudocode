/*
 * XREFs of ?VisualSetRelativeSize@CChannel@@UEAAJINN@Z @ 0x1800EEC60
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetRelativeSize(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v6 = a3;
  v7 = a4;
  *(float *)&v10[2] = v6;
  *(float *)&v10[3] = v7;
  v8 = CChannel::SendCommand(this, v10, 0x10u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
