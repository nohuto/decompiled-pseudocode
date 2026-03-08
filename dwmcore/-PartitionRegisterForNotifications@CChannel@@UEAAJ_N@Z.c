/*
 * XREFs of ?PartitionRegisterForNotifications@CChannel@@UEAAJ_N@Z @ 0x180103CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::PartitionRegisterForNotifications(CChannel *this, char a2)
{
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v6, this);
  v7 = 271LL;
  BYTE4(v7) = a2;
  v4 = CChannel::SendCommand(this, &v7, 8u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v6);
  return v4;
}
