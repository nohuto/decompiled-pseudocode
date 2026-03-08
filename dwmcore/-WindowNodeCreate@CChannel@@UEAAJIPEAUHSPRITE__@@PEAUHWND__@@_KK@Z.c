/*
 * XREFs of ?WindowNodeCreate@CChannel@@UEAAJIPEAUHSPRITE__@@PEAUHWND__@@_KK@Z @ 0x1800F3C00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeCreate(
        CChannel *this,
        unsigned int a2,
        HSPRITE a3,
        HWND a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int128 v8; // rdi
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-28h]
  unsigned __int64 v14; // [rsp+48h] [rbp-18h]
  unsigned int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  *((_QWORD *)&v8 + 1) = a4;
  *(_QWORD *)&v8 = a3;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  CChannel::CheckHandle((__int64)this, a2, 204);
  v12[0] = 430;
  v16 = 0;
  v14 = a5;
  v15 = a6;
  v12[1] = a2;
  v13 = v8;
  v9 = CChannel::SendCommand(this, v12, 0x28u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v9;
}
