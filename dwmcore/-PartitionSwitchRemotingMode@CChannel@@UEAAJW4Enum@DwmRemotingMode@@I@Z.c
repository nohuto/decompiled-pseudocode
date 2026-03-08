/*
 * XREFs of ?PartitionSwitchRemotingMode@CChannel@@UEAAJW4Enum@DwmRemotingMode@@I@Z @ 0x180100460
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionSwitchRemotingMode(struct CChannel *a1, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, a1);
  v8[0] = 276;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(a1, v8, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v9);
  return v6;
}
