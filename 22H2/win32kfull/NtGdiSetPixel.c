/*
 * XREFs of NtGdiSetPixel @ 0x1C02D6E10
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001D35C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C001DEC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B265C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00DC274 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

__int64 __fastcall NtGdiSetPixel(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v7; // ebx
  DC *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  DC *v12; // rdi
  __int64 v13; // r13
  struct REGION *v14; // rax
  struct ECLIPOBJ *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  DC *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdi
  int IsCMYKColor; // r12d
  Gre::Base *v23; // rcx
  struct Gre::Base::SESSION_GLOBALS *v24; // rax
  struct Gre::Base::SESSION_GLOBALS *v25; // r15
  int v26; // ecx
  int v27; // eax
  int (*v28)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v29; // rdx
  int v30; // r8d
  struct _POINTL v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v33[2]; // [rsp+70h] [rbp-90h] BYREF
  char v34[32]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int NearestIndexFromColorref; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+B0h] [rbp-50h]
  unsigned int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+118h] [rbp+18h]
  _BYTE v45[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v46[32]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v47[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v48[64]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v49; // [rsp+1B0h] [rbp+B0h] BYREF

  v7 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v33, a1);
  v8 = v33[0];
  if ( !v33[0] )
  {
LABEL_44:
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v34);
    return v7;
  }
  if ( (*((_DWORD *)v33[0] + 9) & 0x10000) != 0 )
    goto LABEL_42;
  v32[0] = (struct _POINTL)__PAIR64__(a3, a2);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v33, 516);
  EXFORMOBJ::bXform((EXFORMOBJ *)v45, v32, 1LL);
  *(struct _POINTL *)&v49 = v32[0];
  DWORD2(v49) = v32[0].x + 1;
  v8 = v33[0];
  HIDWORD(v49) = v32[0].y + 1;
  if ( (*((_DWORD *)v33[0] + 9) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate((XDCOBJ *)v33, (struct ERECTL *)&v49);
    v8 = v33[0];
  }
  if ( !*((_QWORD *)v8 + 62) )
  {
LABEL_42:
    if ( v8 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v33);
    goto LABEL_44;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v46);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v46, (struct XDCOBJ *)v33, 0) )
  {
LABEL_39:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v46, v9, v10, v11);
    if ( v47[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v47);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v48);
    v8 = v33[0];
    goto LABEL_42;
  }
  v12 = v33[0];
  v13 = *((_QWORD *)v33[0] + 62);
  if ( (unsigned int)ERECTL::bOffsetAdd(
                       (ERECTL *)&v49,
                       (const struct _POINTL *)v33[0] + (*((_DWORD *)v33[0] + 10) & 1) + 127,
                       1)
    && (unsigned int)(v49 + 134217726) <= 0xFFFFFFC
    && (unsigned int)(DWORD2(v49) + 134217726) <= 0xFFFFFFC
    && (unsigned int)(DWORD1(v49) + 134217726) <= 0xFFFFFFC
    && (unsigned int)(HIDWORD(v49) + 134217726) <= 0xFFFFFFC )
  {
    if ( (int)v49 >= *((_DWORD *)v12 + 250)
      && SDWORD2(v49) <= *((_DWORD *)v12 + 252)
      && SDWORD1(v49) >= *((_DWORD *)v12 + 251)
      && SHIDWORD(v49) <= *((_DWORD *)v12 + 253)
      || (v14 = XDCOBJ::prgnEffRao(v33),
          XCLIPOBJ::vSetup((DC *)((char *)v12 + 1768), v14, (struct ERECTL *)&v49, 2),
          !ERECTL::bEmpty((DC *)((char *)v12 + 1772))) )
    {
      if ( !(unsigned int)DestSurfaceAccessCheck((struct SURFACE *)v13) )
      {
        EngSetLastError(5u);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v46, v16, v17, v18);
        if ( v47[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v47);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v48);
        goto LABEL_21;
      }
      v19 = v33[0];
      if ( (*((_DWORD *)v33[0] + 9) & 0xE0) != 0 )
      {
        *(_OWORD *)&v32[0].x = v49;
        XDCOBJ::vAccumulateTight((XDCOBJ *)v33, v15, (__m128i *)v32);
        v19 = v33[0];
      }
      v20 = *((_QWORD *)v19 + 11);
      v21 = *(_QWORD *)(v13 + 128);
      v43 = 0LL;
      v42 = 0LL;
      v36 = 0LL;
      v37 = 0;
      v39 = -1;
      v40 = 0LL;
      v41 = 0LL;
      v44 = 0;
      IsCMYKColor = DC::bIsCMYKColor(v19);
      v24 = Gre::Base::Globals(v23);
      v25 = v24;
      if ( IsCMYKColor )
      {
        NearestIndexFromColorref = a4;
        v37 = 6;
        if ( *((_DWORD *)v24 + 812) )
        {
          v38 = a4;
          v39 = a4;
        }
      }
      else
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v21, v20, a4, 1LL);
        v26 = *((_DWORD *)v33[0] + 30);
        if ( (v26 & 5) != 0 )
        {
          v37 = 2;
        }
        else
        {
          v27 = v37;
          if ( (v26 & 2) != 0 )
            v27 = 1;
          v37 = v27;
        }
        if ( *((_DWORD *)v25 + 812) )
        {
          v38 = a4;
          v39 = rgbFromColorref(v21, v20);
        }
      }
      ++*(_DWORD *)(v13 + 92);
      v28 = SURFACE::pfnBitBlt((SURFACE *)v13);
      if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))v28)(
             v13 + 24,
             0LL,
             0LL,
             0LL,
             0LL,
             &v49,
             0LL,
             0LL,
             &NearestIndexFromColorref,
             v29 + 1192,
             v30) )
      {
        if ( IsCMYKColor )
          v7 = NearestIndexFromColorref;
        else
          v7 = ulIndexToRGB(v21, v20, NearestIndexFromColorref);
      }
      EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
    }
    goto LABEL_39;
  }
  EngSetLastError(0x57u);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v46);
LABEL_21:
  DCOBJ::~DCOBJ((DCOBJ *)v33);
  return v7;
}
