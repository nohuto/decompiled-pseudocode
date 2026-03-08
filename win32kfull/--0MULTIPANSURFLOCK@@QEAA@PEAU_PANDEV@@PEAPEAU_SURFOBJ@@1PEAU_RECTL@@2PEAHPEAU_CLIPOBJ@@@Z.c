/*
 * XREFs of ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C029DA64
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029DDF0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029DF70 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029EE90 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029F640 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C029FADC (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C029FE1C (-vLockBmp1AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z @ 0x1C029FEF0 (-vLockBmp2AndPrepareForPunt@MULTIPANSURFLOCK@@QEAAXH@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02A0308 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

MULTIPANSURFLOCK *__fastcall MULTIPANSURFLOCK::MULTIPANSURFLOCK(
        MULTIPANSURFLOCK *this,
        struct _PANDEV *a2,
        struct _SURFOBJ **a3,
        struct _SURFOBJ **a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        int *a7,
        struct _CLIPOBJ *a8)
{
  int v12; // r13d
  struct _CLIPOBJ *v13; // r8
  struct _SURFOBJ *v14; // rcx
  struct _SURFOBJ *v15; // rsi
  struct _SURFOBJ *v16; // rax
  USHORT iType; // ax
  struct _CLIPOBJ *v18; // r8
  USHORT v19; // cx
  struct _SURFOBJ *v20; // rcx
  USHORT v21; // ax
  int v22; // eax
  bool v23; // zf
  struct _SURFOBJ *v25; // rax
  signed __int32 v26[18]; // [rsp+0h] [rbp-48h] BYREF
  int v27; // [rsp+50h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v12 = 0;
  *((_WORD *)this + 24) = 0;
  v27 = 0;
  memset_0((char *)this + 50, 0, 0xA2uLL);
  v14 = *a4;
  v15 = *a3;
  *a7 = 0;
  if ( v14 > v15 )
  {
    v16 = v15;
    v15 = v14;
  }
  else
  {
    v16 = v14;
  }
  if ( v16 )
  {
    if ( v16 == v15 )
    {
      iType = v14->iType;
      if ( iType == 3 )
      {
        *(_QWORD *)this = v14;
        MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, 0);
      }
      else if ( iType == 1 )
      {
        *((_QWORD *)this + 4) = a2;
        do
        {
          MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
          _InterlockedOr(v26, 0);
        }
        while ( !(unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v18) );
        *a4 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a3 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
        *a7 = 1;
      }
      return this;
    }
    v19 = v16->iType;
    if ( v19 == 3 )
    {
      *(_QWORD *)this = v16;
      MULTIPANSURFLOCK::vLockBmp1AndPrepareForPunt(this, v16 == *a4);
    }
    else if ( v19 == 1 )
    {
      *((_QWORD *)this + 4) = a2;
      v20 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
      if ( v16 == *a4 )
      {
        *a4 = v20;
        v12 = 1;
      }
      else
      {
        *a3 = v20;
        v27 = 1;
        *a7 = 1;
      }
    }
  }
  _InterlockedOr(v26, 0);
  if ( !v15 )
    goto LABEL_21;
  v21 = v15->iType;
  if ( v21 == 3 )
  {
    *((_QWORD *)this + 2) = v15;
    MULTIPANSURFLOCK::vLockBmp2AndPrepareForPunt(this, v15 == *a4);
LABEL_21:
    v22 = v27;
    goto LABEL_22;
  }
  if ( v21 != 1 )
    goto LABEL_21;
  *((_QWORD *)this + 5) = a2;
  v25 = (struct _SURFOBJ *)*((_QWORD *)a2 + 8);
  if ( v15 == *a4 )
  {
    *a4 = v25;
    v12 = 1;
    goto LABEL_21;
  }
  *a3 = v25;
  v22 = 1;
  v27 = 1;
  *a7 = 1;
  do
  {
LABEL_22:
    if ( v22 )
      MULTIPANSURFLOCK::vLockShadowW(this, a5, a8);
    _InterlockedOr(v26, 0);
    if ( !v12 )
      break;
    v23 = (unsigned int)MULTIPANSURFLOCK::bTryLockShadowR(this, a6, v13) == 0;
    v22 = v27;
  }
  while ( v23 );
  return this;
}
