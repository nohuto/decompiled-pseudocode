/*
 * XREFs of NtGdiSetPixel @ 0x1C0155820
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9A2C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B493C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B496C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B5E80 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00B6050 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B9DA0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0109380 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C015695C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // esi
  DC *v8; // rcx
  DC *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct REGION *v14; // rax
  struct ECLIPOBJ *v15; // rdx
  ULONG v16; // ecx
  DC *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbx
  int IsCMYKColor; // r15d
  int v21; // ecx
  int v22; // eax
  int (*v23)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v24; // edx
  __int64 v25; // r8
  struct _POINTL v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v28[6]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int NearestIndexFromColorref; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp-50h]
  unsigned int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+118h] [rbp+18h]
  _BYTE v39[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v40[112]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v41; // [rsp+1B0h] [rbp+B0h] BYREF

  v7 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  if ( v28[0] && (*((_DWORD *)v28[0] + 9) & 0x10000) == 0 )
  {
    v27[0] = (struct _POINTL)__PAIR64__(a3, a2);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v39, (struct XDCOBJ *)v28, 516);
    EXFORMOBJ::bXform((EXFORMOBJ *)v39, v27, 1LL);
    *(struct _POINTL *)&v41 = v27[0];
    DWORD2(v41) = v27[0].x + 1;
    v8 = v28[0];
    HIDWORD(v41) = v27[0].y + 1;
    if ( (*((_DWORD *)v28[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v28, (struct ERECTL *)&v41);
      v8 = v28[0];
    }
    if ( *((_QWORD *)v8 + 62) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v40);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v40, (struct XDCOBJ *)v28, 0) )
      {
        v9 = v28[0];
        v10 = *((_QWORD *)v28[0] + 62);
        if ( (unsigned int)ERECTL::bOffsetAdd(
                             (ERECTL *)&v41,
                             (const struct _POINTL *)v28[0] + (*((_DWORD *)v28[0] + 10) & 1) + 127,
                             1)
          && (unsigned int)(v41 + 134217726) <= 0xFFFFFFC
          && (v11 = DWORD2(v41), (unsigned int)(DWORD2(v41) + 134217726) <= 0xFFFFFFC)
          && (v12 = DWORD1(v41), (unsigned int)(DWORD1(v41) + 134217726) <= 0xFFFFFFC)
          && (v13 = HIDWORD(v41), (unsigned int)(HIDWORD(v41) + 134217726) <= 0xFFFFFFC) )
        {
          if ( (int)v41 < *((_DWORD *)v9 + 250)
            || SDWORD2(v41) > *((_DWORD *)v9 + 252)
            || SDWORD1(v41) < *((_DWORD *)v9 + 251)
            || SHIDWORD(v41) > *((_DWORD *)v9 + 253) )
          {
            v14 = XDCOBJ::prgnEffRao(v28);
            XCLIPOBJ::vSetup((DC *)((char *)v9 + 1776), v14, (struct ERECTL *)&v41, 2);
            if ( ERECTL::bEmpty((DC *)((char *)v9 + 1780)) )
              goto LABEL_39;
          }
          if ( (unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v10, v11, v12, v13) )
          {
            v17 = v28[0];
            if ( (*((_DWORD *)v28[0] + 9) & 0xE0) != 0 )
            {
              *(_OWORD *)&v27[0].x = v41;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v28, v15, (__m128i *)v27);
              v17 = v28[0];
            }
            v18 = *((_QWORD *)v17 + 11);
            v19 = *(_QWORD *)(v10 + 128);
            v37 = 0LL;
            v36 = 0LL;
            v30 = 0LL;
            v31 = 0;
            v33 = -1;
            v34 = 0LL;
            v35 = 0LL;
            v38 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v17);
            if ( IsCMYKColor )
            {
              NearestIndexFromColorref = a4;
              v31 = 6;
              if ( gbMultiMonMismatchColor )
              {
                v32 = a4;
                v33 = a4;
              }
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v19, v18, a4, 1LL);
              v21 = *((_DWORD *)v28[0] + 30);
              if ( (v21 & 4) != 0 || (v21 & 1) != 0 )
              {
                v31 = 2;
              }
              else
              {
                v22 = v31;
                if ( (v21 & 2) != 0 )
                  v22 = 1;
                v31 = v22;
              }
              if ( gbMultiMonMismatchColor )
              {
                v32 = a4;
                v33 = rgbFromColorref(v19, v18);
              }
            }
            ++*(_DWORD *)(v10 + 92);
            v23 = SURFACE::pfnBitBlt((SURFACE *)v10);
            if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))v23)(
                   v10 + 24,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   &v41,
                   0LL,
                   0LL,
                   &NearestIndexFromColorref,
                   v25,
                   v24) )
            {
              if ( IsCMYKColor )
                v7 = NearestIndexFromColorref;
              else
                v7 = ulIndexToRGB(v19, v18, NearestIndexFromColorref);
            }
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
            goto LABEL_39;
          }
          v16 = 5;
        }
        else
        {
          v16 = 87;
        }
        EngSetLastError(v16);
      }
LABEL_39:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v40);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  return v7;
}
