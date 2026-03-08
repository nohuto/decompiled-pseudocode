/*
 * XREFs of NtGdiSetPixel @ 0x1C02D8C50
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00057D8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007FC9C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008219C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00821D8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00881C4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008C1D8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00EA13C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // ebx
  DC *v8; // rcx
  DC *v9; // rdi
  __int64 v10; // r13
  struct REGION *v11; // rax
  struct ECLIPOBJ *v12; // rdx
  DC *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdi
  int IsCMYKColor; // r12d
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  struct Gre::Base::SESSION_GLOBALS *v19; // r15
  int v20; // ecx
  int v21; // eax
  int (*v22)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v23; // rdx
  int v24; // r8d
  DC *v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  _QWORD v31[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  unsigned int NearestIndexFromColorref; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+E0h] [rbp-20h]
  unsigned int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int128 v44; // [rsp+130h] [rbp+30h]
  int v45; // [rsp+148h] [rbp+48h]
  _BYTE v46[16]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v47; // [rsp+170h] [rbp+70h] BYREF

  v7 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  v8 = v26[0];
  if ( v26[0] )
  {
    if ( (*((_DWORD *)v26[0] + 9) & 0x10000) == 0 )
    {
      v27[0] = (struct _POINTL)__PAIR64__(a3, a2);
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v26, 516);
      EXFORMOBJ::bXform((EXFORMOBJ *)v46, v27, 1LL);
      *(struct _POINTL *)&v47 = v27[0];
      DWORD2(v47) = v27[0].x + 1;
      v8 = v26[0];
      HIDWORD(v47) = v27[0].y + 1;
      if ( (*((_DWORD *)v26[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v26, (struct ERECTL *)&v47);
        v8 = v26[0];
      }
      if ( *((_QWORD *)v8 + 62) )
      {
        v31[1] = 0LL;
        v28 = 0LL;
        v32 = 256;
        v29 = 0LL;
        v30 = 0;
        v31[0] = 0LL;
        v35 = 0LL;
        v34 = 0LL;
        v33 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v28, (struct XDCOBJ *)v26, 0) )
        {
          v9 = v26[0];
          v10 = *((_QWORD *)v26[0] + 62);
          if ( !(unsigned int)ERECTL::bOffsetAdd(
                                (ERECTL *)&v47,
                                (const struct _POINTL *)v26[0] + (*((_DWORD *)v26[0] + 10) & 1) + 127,
                                1)
            || (unsigned int)(v47 + 134217726) > 0xFFFFFFC
            || (unsigned int)(DWORD2(v47) + 134217726) > 0xFFFFFFC
            || (unsigned int)(DWORD1(v47) + 134217726) > 0xFFFFFFC
            || (unsigned int)(HIDWORD(v47) + 134217726) > 0xFFFFFFC )
          {
            EngSetLastError(0x57u);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v28);
LABEL_20:
            DCOBJ::~DCOBJ((DCOBJ *)v26);
            return v7;
          }
          if ( (int)v47 >= *((_DWORD *)v9 + 250)
            && SDWORD2(v47) <= *((_DWORD *)v9 + 252)
            && SDWORD1(v47) >= *((_DWORD *)v9 + 251)
            && SHIDWORD(v47) <= *((_DWORD *)v9 + 253)
            || (v11 = XDCOBJ::prgnEffRao(v26),
                XCLIPOBJ::vSetup((DC *)((char *)v9 + 1768), v11, (struct ERECTL *)&v47, 2),
                !ERECTL::bEmpty((DC *)((char *)v9 + 1772))) )
          {
            if ( !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v10) )
            {
              EngSetLastError(5u);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
              if ( v31[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v31);
              goto LABEL_20;
            }
            v13 = v26[0];
            if ( (*((_DWORD *)v26[0] + 9) & 0xE0) != 0 )
            {
              *(_OWORD *)&v27[0].x = v47;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v26, v12, (__m128i *)v27);
              v13 = v26[0];
            }
            v14 = *((_QWORD *)v13 + 11);
            v15 = *(_QWORD *)(v10 + 128);
            v44 = 0LL;
            v43 = 0LL;
            v37 = 0LL;
            v38 = 0;
            v40 = -1;
            v41 = 0LL;
            v42 = 0LL;
            v45 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v13);
            v18 = Gre::Base::Globals(v17);
            v19 = v18;
            if ( IsCMYKColor )
            {
              NearestIndexFromColorref = a4;
              v38 = 6;
              if ( *((_DWORD *)v18 + 812) )
              {
                v39 = a4;
                v40 = a4;
              }
            }
            else
            {
              NearestIndexFromColorref = ulGetNearestIndexFromColorref(v15, v14, a4, 1LL);
              v20 = *((_DWORD *)v26[0] + 30);
              if ( (v20 & 5) != 0 )
              {
                v38 = 2;
              }
              else
              {
                v21 = v38;
                if ( (v20 & 2) != 0 )
                  v21 = 1;
                v38 = v21;
              }
              if ( *((_DWORD *)v19 + 812) )
              {
                v39 = a4;
                v40 = rgbFromColorref(v15, v14);
              }
            }
            ++*(_DWORD *)(v10 + 92);
            v22 = SURFACE::pfnBitBlt((SURFACE *)v10);
            if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))v22)(
                   v10 + 24,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   &v47,
                   0LL,
                   0LL,
                   &NearestIndexFromColorref,
                   v23 + 1192,
                   v24) )
            {
              if ( IsCMYKColor )
                v7 = NearestIndexFromColorref;
              else
                v7 = ulIndexToRGB(v15, v14, NearestIndexFromColorref);
            }
            EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
        if ( v31[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v31);
        v8 = v26[0];
      }
    }
    if ( v8 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v26);
  }
  return v7;
}
