/*
 * XREFs of ?AnimationUpdateBeginTime@CChannel@@UEAAJI_K0@Z @ 0x1801CB500
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::AnimationUpdateBeginTime(CChannel *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int128 v6; // rdi
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]

  *((_QWORD *)&v6 + 1) = a4;
  *(_QWORD *)&v6 = a3;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle((__int64)this, a2, 2);
  v10[0] = 11;
  v10[1] = a2;
  v11 = v6;
  v7 = CChannel::SendCommand(this, v10, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v7;
}
