/*
 * XREFs of ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x18001F020
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CombinedGeometryUpdate(
        struct CChannel *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v12[10]; // [rsp+30h] [rbp-28h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, a1);
  CChannel::CheckHandle(a1, a2, 27LL);
  if ( a4 )
    CChannel::CheckHandle(a1, a4, 67LL);
  if ( a5 )
    CChannel::CheckHandle(a1, a5, 67LL);
  v12[0] = 459;
  v12[1] = a2;
  v12[2] = a3;
  v12[3] = a4;
  v12[4] = a5;
  v9 = CChannel::SendCommand(a1, v12, 0x14u);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v9;
}
