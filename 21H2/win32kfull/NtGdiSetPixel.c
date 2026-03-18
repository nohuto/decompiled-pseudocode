/*
 * XREFs of NtGdiSetPixel @ 0x1C012EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002C7C4 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C002F5F0 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C008A518 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // esi
  DC *v8; // rcx
  DC *v9; // rbx
  __int64 v10; // r13
  struct REGION *v11; // rax
  struct ECLIPOBJ *v12; // rdx
  ULONG v13; // ecx
  DC *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  int IsCMYKColor; // r15d
  int v18; // ecx
  int v19; // eax
  int (*v20)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v21; // rdx
  int v22; // r8d
  struct _POINTL v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v25[6]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int NearestIndexFromColorref; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp-50h]
  unsigned int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  __int64 v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int128 v34; // [rsp+100h] [rbp+0h]
  int v35; // [rsp+118h] [rbp+18h]
  _BYTE v36[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v37[112]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v38; // [rsp+1B0h] [rbp+B0h] BYREF

  v7 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( v25[0] && (*((_DWORD *)v25[0] + 9) & 0x10000) == 0 )
  {
    v24[0] = (struct _POINTL)__PAIR64__(a3, a2);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v36, (struct XDCOBJ *)v25, 516);
    EXFORMOBJ::bXform((EXFORMOBJ *)v36, v24, 1LL);
    *(struct _POINTL *)&v38 = v24[0];
    DWORD2(v38) = v24[0].x + 1;
    v8 = v25[0];
    HIDWORD(v38) = v24[0].y + 1;
    if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v25, (struct ERECTL *)&v38);
      v8 = v25[0];
    }
    if ( *((_QWORD *)v8 + 62) )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v37, (struct XDCOBJ *)v25, 0) )
      {
        v9 = v25[0];
        v10 = *((_QWORD *)v25[0] + 62);
        if ( (unsigned int)ERECTL::bOffsetAdd(
                             (ERECTL *)&v38,
                             (const struct _POINTL *)v25[0] + (*((_DWORD *)v25[0] + 10) & 1) + 127,
                             1)
          && (unsigned int)(v38 + 134217726) <= 0xFFFFFFC
          && (unsigned int)(DWORD2(v38) + 134217726) <= 0xFFFFFFC
          && (unsigned int)(DWORD1(v38) + 134217726) <= 0xFFFFFFC
          && (unsigned int)(HIDWORD(v38) + 134217726) <= 0xFFFFFFC )
        {
          if ( (int)v38 < *((_DWORD *)v9 + 250)
            || SDWORD2(v38) > *((_DWORD *)v9 + 252)
            || SDWORD1(v38) < *((_DWORD *)v9 + 251)
            || SHIDWORD(v38) > *((_DWORD *)v9 + 253) )
          {
            v11 = XDCOBJ::prgnEffRao(v25);
            XCLIPOBJ::vSetup((DC *)((char *)v9 + 1768), v11, (struct ERECTL *)&v38, 2);
            if ( ERECTL::bEmpty((DC *)((char *)v9 + 1772)) )
              goto LABEL_39;
          }
          if ( (unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v10) )
          {
            v14 = v25[0];
            if ( (*((_DWORD *)v25[0] + 9) & 0xE0) != 0 )
            {
              *(_OWORD *)&v24[0].x = v38;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v25, v12, (__m128i *)v24);
              v14 = v25[0];
            }
            v15 = *((_QWORD *)v14 + 11);
            v16 = *(_QWORD *)(v10 + 128);
            v34 = 0LL;
            v33 = 0LL;
            v27 = 0LL;
            v28 = 0;
            v30 = -1;
            v31 = 0LL;
            v32 = 0LL;
            v35 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v14);
            if ( IsCMYKColor )
            {
              NearestIndexFromColorref = a4;
              v28 = 6;
              if ( gbMultiMonMismatchColor )
              {
                v29 = a4;
                v30 = a4;
              }
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v16, v15, a4, 1LL);
              v18 = *((_DWORD *)v25[0] + 30);
              if ( (v18 & 4) != 0 || (v18 & 1) != 0 )
              {
                v28 = 2;
              }
              else
              {
                v19 = v28;
                if ( (v18 & 2) != 0 )
                  v19 = 1;
                v28 = v19;
              }
              if ( gbMultiMonMismatchColor )
              {
                v29 = a4;
                v30 = rgbFromColorref(v16, v15);
              }
            }
            ++*(_DWORD *)(v10 + 92);
            v20 = SURFACE::pfnBitBlt((SURFACE *)v10);
            if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))v20)(
                   v10 + 24,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   &v38,
                   0LL,
                   0LL,
                   &NearestIndexFromColorref,
                   v21 + 1192,
                   v22) )
            {
              if ( IsCMYKColor )
                v7 = NearestIndexFromColorref;
              else
                v7 = ulIndexToRGB(v16, v15, NearestIndexFromColorref);
            }
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
            goto LABEL_39;
          }
          v13 = 5;
        }
        else
        {
          v13 = 87;
        }
        EngSetLastError(v13);
      }
LABEL_39:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v7;
}
