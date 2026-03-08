/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK_N@Z @ 0x1800F2600
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6)
{
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v13[8]; // [rsp+30h] [rbp-20h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  CChannel::CheckHandle((__int64)this, a2, 204);
  v13[0] = 438;
  v13[4] = a5;
  v13[5] = a6;
  v13[1] = a2;
  v13[2] = a3;
  v13[3] = a4;
  v10 = CChannel::SendCommand(this, v13, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  return v10;
}
