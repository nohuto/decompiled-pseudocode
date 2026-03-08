/*
 * XREFs of ?RotateTransformUpdate@CChannel@@UEAAJINNN@Z @ 0x1801CD550
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CChannel::RotateTransformUpdate(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  float v7; // xmm0_4
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  float v11; // xmm0_4
  int v13; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-3Ch]
  float v15; // [rsp+28h] [rbp-38h]
  _BYTE v16[16]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v16, this);
  CChannel::CheckHandle((__int64)this, a2, 148);
  v13 = 611;
  v14 = a2;
  v7 = a3;
  v15 = v7;
  v8 = CChannel::SendCommand(this, &v13, 0xCu);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v13 = 612;
    v14 = a2;
    v11 = a4;
    v15 = v11;
    v8 = CChannel::SendCommand(this, &v13, 0xCu);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v13 = 613;
      v14 = a2;
      v15 = a5;
      v8 = CChannel::SendCommand(this, &v13, 0xCu);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 2826LL;
    }
    else
    {
      v10 = 2819LL;
    }
  }
  else
  {
    v10 = 2812LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v16);
  return v9;
}
