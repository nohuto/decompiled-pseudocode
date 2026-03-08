/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02AABB4
 * Callers:
 *     NtGdiInvertRgn @ 0x1C02AC2A0 (NtGdiInvertRgn.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00508E4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0059100 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C0291240 (EngPaint.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C02A9FFC (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  DC *v3; // rcx
  REGION *v4; // rsi
  unsigned int v5; // ebx
  int v6; // edi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rbx
  struct REGION *v11; // rax
  struct ECLIPOBJ *v12; // rdx
  DC *v13; // r8
  DC *v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  REGION *v16[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h]
  char v20; // [rsp+88h] [rbp-78h]
  _QWORD v21[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v22; // [rsp+A0h] [rbp-60h]
  __m128i rclBounds; // [rsp+F0h] [rbp-10h] BYREF
  int v24[4]; // [rsp+100h] [rbp+0h] BYREF
  CLIPOBJ pco; // [rsp+110h] [rbp+10h] BYREF
  __int64 v26; // [rsp+160h] [rbp+60h]
  int v27; // [rsp+168h] [rbp+68h]
  int v28; // [rsp+190h] [rbp+90h]
  __int64 v29; // [rsp+1A0h] [rbp+A0h]

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v3 = v15[0];
  v4 = 0LL;
  v5 = 0;
  if ( !v15[0] )
    return v5;
  if ( (*((_DWORD *)v15[0] + 9) & 0x10000) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, (struct XDCOBJ *)v15, -2147483132);
    v6 = *(_DWORD *)(*((_QWORD *)v15[0] + 122) + 340LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 1, 0);
    if ( !v16[0] )
    {
LABEL_31:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
      v3 = v15[0];
      goto LABEL_32;
    }
    if ( v6 == 2050 )
    {
LABEL_10:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v16) == 1 )
        goto LABEL_28;
      v7 = v15[0];
      *(_OWORD *)v24 = *(_OWORD *)((char *)v16[0] + 56);
      if ( (*((_DWORD *)v15[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v15, (struct ERECTL *)v24);
        v7 = v15[0];
      }
      if ( !*((_QWORD *)v7 + 62) )
      {
LABEL_28:
        v5 = 1;
      }
      else
      {
        v21[0] = 0LL;
        v21[1] = 0LL;
        v22 = 256;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v15, 0);
        v8 = v16[0];
        v9 = v15[0];
        if ( !v16[0] )
          *((_DWORD *)v15[0] + 9) |= 0x10u;
        *((_QWORD *)v9 + 141) = v8;
        v10 = *((_QWORD *)v15[0] + 62);
        if ( (v20 & 1) != 0 && (unsigned int)DC::bTightenRao(v15[0]) )
        {
          ERECTL::bOffsetAdd((ERECTL *)v24, (const struct _POINTL *)v15[0] + (*((_DWORD *)v15[0] + 10) & 1) + 127, 0);
          GreScaleValuesInternal(v15, v24, 4u);
          v11 = XDCOBJ::prgnEffRao(v15);
          v26 = 0LL;
          v27 = 0;
          v28 = 1;
          v29 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v11, (struct ERECTL *)v24, 0);
          if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            if ( (*((_DWORD *)v15[0] + 9) & 0xE0) != 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v15, v12, &rclBounds);
            }
            ++*(_DWORD *)(v10 + 92);
            EngPaint((SURFOBJ *)(v10 + 24), &pco, 0LL, 0LL, 0x606u);
          }
          v13 = v15[0];
          v5 = 1;
        }
        else
        {
          v5 = XDCOBJ::bFullScreen((XDCOBJ *)v15);
        }
        *((_DWORD *)v13 + 9) |= 0x10u;
        *((_QWORD *)v13 + 141) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
        if ( v21[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v21);
      }
      if ( v6 != 2050 )
      {
        REGION::vDeleteREGION(v16[0]);
        v16[0] = v4;
      }
      goto LABEL_31;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
    if ( v19 )
    {
      if ( !v17[0] || !RGNOBJ::bCreate((RGNOBJ *)v16, (struct EPATHOBJ *)v18, (struct EXFORMOBJ *)v17) )
        goto LABEL_24;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)v24, (struct EPATHOBJ *)v18, 1u, 0LL);
      if ( *(_QWORD *)v24 )
      {
        v4 = v16[0];
        v16[0] = *(REGION **)v24;
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
        goto LABEL_10;
      }
    }
    EngSetLastError(8u);
LABEL_24:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return 0LL;
  }
LABEL_32:
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v5;
}
