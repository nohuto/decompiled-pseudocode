/*
 * XREFs of ?VisualTopLevelNode@CChannel@@UEAAJIPEAUHWND__@@_N@Z @ 0x1800F8C00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::VisualTopLevelNode(CChannel *this, unsigned int a2, HWND a3, unsigned __int8 a4)
{
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  HWND v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  v11[0] = 423;
  v14 = 0;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  v8 = CChannel::SendCommand(this, v11, 0x18u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v8;
}
