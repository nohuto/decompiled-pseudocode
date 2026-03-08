/*
 * XREFs of ?VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z @ 0x180102070
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180043E68 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18004407C (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ??1CChannelLock@CChannel@@QEAA@XZ @ 0x1800441FC (--1CChannelLock@CChannel@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180044440 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CChannel::VisualSetBlurredWallpaperSurface(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  _DWORD v12[6]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v13, this);
  CChannel::CheckHandle((__int64)this, a2, 196);
  if ( a3 )
    CChannel::CheckHandle((__int64)this, a3, 202);
  v12[0] = 395;
  v12[1] = a2;
  v12[2] = a3;
  v8 = CChannel::SendCommand(this, v12, 0xCu);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 1200LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v12[0] = 396;
  memset(&v12[1], 0, 20);
  v12[1] = a2;
  if ( a4 )
    *(struct tagRECT *)&v12[2] = *a4;
  v8 = CChannel::SendCommand(this, v12, 0x18u);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 1212LL;
    goto LABEL_11;
  }
  v9 = 0;
LABEL_8:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v13);
  return v9;
}
