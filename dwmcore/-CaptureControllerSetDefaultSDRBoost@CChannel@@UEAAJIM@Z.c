/*
 * XREFs of ?CaptureControllerSetDefaultSDRBoost@CChannel@@UEAAJIM@Z @ 0x1801CBA70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetDefaultSDRBoost(CChannel *this, unsigned int a2, float a3)
{
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v8, this);
  CChannel::CheckHandle((__int64)this, a2, 19);
  v7[0] = 32;
  *(float *)&v7[2] = a3;
  v7[1] = a2;
  v5 = CChannel::SendCommand(this, v7, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v8);
  return v5;
}
