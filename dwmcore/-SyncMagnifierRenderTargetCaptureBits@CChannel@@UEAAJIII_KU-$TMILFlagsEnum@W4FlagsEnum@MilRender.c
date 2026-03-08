/*
 * XREFs of ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801CD960
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1801CD68C (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CChannel::SyncMagnifierRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        __int128 *a7)
{
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  unsigned int v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  _BYTE v18[16]; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-31h] BYREF
  char *v20; // [rsp+40h] [rbp-29h]
  _DWORD v21[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  __int64 v23; // [rsp+68h] [rbp-1h]
  int v24; // [rsp+70h] [rbp+7h]
  _BYTE v25[44]; // [rsp+74h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v18, this);
  CChannel::CheckHandle((__int64)this, a2, 104);
  v21[0] = 242;
  *(_QWORD *)&v25[32] = 0LL;
  v23 = a5;
  *(_OWORD *)&v25[16] = 0LL;
  v24 = a6;
  *(_OWORD *)v25 = 0LL;
  v21[1] = a2;
  v22 = a3;
  v11 = *a7;
  HIDWORD(v22) = a4;
  v12 = a7[1];
  *(_OWORD *)&v25[4] = v11;
  *(_QWORD *)&v25[36] = *((_QWORD *)a7 + 4);
  *(_OWORD *)&v25[20] = v12;
  v13 = CChannel::SendSyncCommand(this, v21, 0x48u, (struct MIL_MESSAGE *)v19);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v14 = (unsigned int)v20;
    if ( (int)v20 >= 0 )
    {
      v14 = 0;
      goto LABEL_7;
    }
    v15 = (unsigned int)v20;
    v16 = 2000LL;
  }
  else
  {
    v15 = (unsigned int)v13;
    v16 = 1998LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v15);
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v18);
  return v14;
}
