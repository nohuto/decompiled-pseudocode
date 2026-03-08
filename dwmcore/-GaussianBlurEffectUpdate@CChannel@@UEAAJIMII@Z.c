/*
 * XREFs of ?GaussianBlurEffectUpdate@CChannel@@UEAAJIMII@Z @ 0x1801CC150
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GaussianBlurEffectUpdate(
        CChannel *this,
        unsigned int a2,
        float a3,
        int a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v11[8]; // [rsp+30h] [rbp-38h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 64);
  v11[0] = 463;
  *(float *)&v11[2] = a3;
  v11[1] = a2;
  v11[3] = a4;
  v11[4] = a5;
  v8 = CChannel::SendCommand(this, v11, 0x14u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v8;
}
