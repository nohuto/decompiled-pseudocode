/*
 * XREFs of ?PartitionSetCurrentMmTask@CChannel@@UEAAJAEBUDWM_MMTASK@@@Z @ 0x1800FF0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CChannel::PartitionSetCurrentMmTask(CChannel *this, const struct DWM_MMTASK *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _BYTE v12[16]; // [rsp+20h] [rbp-B8h] BYREF
  int v13; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v14[10]; // [rsp+38h] [rbp-A0h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  v13 = 272;
  memset_0(v14, 0, 0x90uLL);
  v4 = *((_OWORD *)a2 + 1);
  v14[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v14[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v14[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v14[3] = v6;
  v8 = *((_OWORD *)a2 + 5);
  v14[4] = v7;
  v9 = *((_OWORD *)a2 + 6);
  v14[5] = v8;
  v10 = *((_OWORD *)a2 + 8);
  v14[6] = v9;
  v14[7] = *((_OWORD *)a2 + 7);
  v14[8] = v10;
  LODWORD(a2) = CChannel::SendCommand(this, &v13, 0x98u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v12);
  return (unsigned int)a2;
}
