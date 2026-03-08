/*
 * XREFs of ?ColorTransformResourceUpdate@CChannel@@UEAAJIAEBUMilColorTransform@@@Z @ 0x1801CBCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

__int64 __fastcall CChannel::ColorTransformResourceUpdate(
        CChannel *this,
        unsigned int a2,
        const struct MilColorTransform *a3)
{
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+28h] [rbp-29h] BYREF
  int v15; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-15h] BYREF
  __int128 v17; // [rsp+40h] [rbp-11h]
  __int128 v18; // [rsp+50h] [rbp-1h]
  __int128 v19; // [rsp+60h] [rbp+Fh]
  __int128 v20; // [rsp+70h] [rbp+1Fh]
  __int128 v21; // [rsp+80h] [rbp+2Fh]
  __int128 v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+A0h] [rbp+4Fh]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, this);
  CChannel::CheckHandle((__int64)this, a2, 26);
  v15 = 59;
  memset_0(&v16, 0, 0x68uLL);
  v6 = *((_DWORD *)a3 + 24);
  v7 = *((_OWORD *)a3 + 1);
  v17 = *(_OWORD *)a3;
  v16 = a2;
  v8 = *((_OWORD *)a3 + 2);
  v23 = v6;
  v18 = v7;
  v9 = *((_OWORD *)a3 + 3);
  v19 = v8;
  v10 = *((_OWORD *)a3 + 4);
  v20 = v9;
  v11 = *((_OWORD *)a3 + 5);
  v21 = v10;
  v22 = v11;
  v12 = CChannel::SendCommand(this, &v15, 0x6Cu);
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v14);
  return v12;
}
