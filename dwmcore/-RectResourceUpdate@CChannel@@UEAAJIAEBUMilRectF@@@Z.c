/*
 * XREFs of ?RectResourceUpdate@CChannel@@UEAAJIAEBUMilRectF@@@Z @ 0x18001A200
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::RectResourceUpdate(CChannel *this, unsigned int a2, const struct MilRectF *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v11[2]; // [rsp+34h] [rbp-24h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle(this, a2, 140LL);
  v10 = 324;
  v11[0] = 0LL;
  v6 = *(_OWORD *)a3;
  LODWORD(v11[0]) = a2;
  *(_OWORD *)((char *)v11 + 4) = v6;
  v7 = CChannel::SendCommand(this, &v10, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v7;
}
