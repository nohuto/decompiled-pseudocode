/*
 * XREFs of ?InteractionUpdateRails@CChannel@@UEAAJI_N0@Z @ 0x1800FE660
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::InteractionUpdateRails(CChannel *this, unsigned int a2, char a3, char a4)
{
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+29h] [rbp-1Fh]
  __int16 v13; // [rsp+2Ah] [rbp-1Eh]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, this);
  CChannel::CheckHandle((__int64)this, a2, 89);
  v10[0] = 197;
  v13 = 0;
  v10[1] = a2;
  v11 = a3;
  v12 = a4;
  v8 = CChannel::SendCommand(this, v10, 0xCu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v14);
  return v8;
}
