/*
 * XREFs of ?RectangleGeometrySetRectangle@CChannel@@UEAAJIMMMMMMMMMMMM_N@Z @ 0x180043380
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CChannel::RectangleGeometrySetRectangle(
        CChannel *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        bool a15)
{
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v20; // rdx
  int v21; // [rsp+28h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+2Ch] [rbp-65h]
  float v23; // [rsp+30h] [rbp-61h]
  _BYTE v24[16]; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v25[10]; // [rsp+48h] [rbp-49h] BYREF
  bool v26; // [rsp+70h] [rbp-21h]
  __int16 v27; // [rsp+71h] [rbp-20h]
  char v28; // [rsp+73h] [rbp-1Eh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+Fh]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v24, this);
  CChannel::CheckHandle(this, a2, 138LL);
  v25[0] = 319;
  v28 = 0;
  *(float *)&v25[2] = a7;
  *(float *)&v25[3] = a8;
  *(float *)&v25[4] = a9;
  *(float *)&v25[5] = a10;
  *(float *)&v25[6] = a11;
  *(float *)&v25[7] = a12;
  *(float *)&v25[8] = a13;
  *(float *)&v25[9] = a14;
  v25[1] = a2;
  v26 = a15;
  v27 = 256;
  v17 = CChannel::SendCommand(this, v25, 0x2Cu);
  v18 = v17;
  if ( v17 < 0 )
  {
    v20 = 1874LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v17,
      v21);
    goto LABEL_7;
  }
  v21 = 317;
  v23 = a3;
  v22 = a2;
  v17 = CChannel::SendCommand(this, &v21, 0xCu);
  v18 = v17;
  if ( v17 < 0 )
  {
    v20 = 1881LL;
    goto LABEL_11;
  }
  v21 = 322;
  v23 = a4;
  v22 = a2;
  v17 = CChannel::SendCommand(this, &v21, 0xCu);
  v18 = v17;
  if ( v17 < 0 )
  {
    v20 = 1888LL;
    goto LABEL_11;
  }
  v21 = 320;
  v23 = a5;
  v22 = a2;
  v17 = CChannel::SendCommand(this, &v21, 0xCu);
  v18 = v17;
  if ( v17 < 0 )
  {
    v20 = 1895LL;
    goto LABEL_11;
  }
  v21 = 316;
  v23 = a6;
  v22 = a2;
  v17 = CChannel::SendCommand(this, &v21, 0xCu);
  v18 = v17;
  if ( v17 < 0 )
  {
    v20 = 1902LL;
    goto LABEL_11;
  }
  v18 = 0;
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v24);
  return v18;
}
