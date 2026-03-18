/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0034764
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GreUpdateSpriteVisRgn @ 0x1C005AA10 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0003828 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C001D9F0 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C001EC30 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00541A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     _VisrgnFromWindow @ 0x1C005AC9C (_VisrgnFromWindow.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00F6640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C00F6984 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C01137BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C02804E8 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0282818 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v3; // r13
  Gre::Base *v4; // rcx
  HDEV v5; // r14
  __int64 i; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // r15
  HRGN *v10; // rdi
  struct REGION *v11; // rdx
  struct REGION *v12; // rsi
  int v13; // edi
  struct _POINTL *v14; // rsi
  int v15; // r9d
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // r13d
  int v21; // r12d
  unsigned int v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // edx
  struct REGION *v27; // r15
  Gre::Base *v28; // rcx
  __int64 v29; // rcx
  struct REGION *v30; // [rsp+38h] [rbp-D0h] BYREF
  struct _POINTL v31; // [rsp+40h] [rbp-C8h] BYREF
  HDEV v32; // [rsp+48h] [rbp-C0h]
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  struct REGION *v35; // [rsp+60h] [rbp-A8h]
  struct _POINTL v36; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  char v39[40]; // [rsp+80h] [rbp-88h] BYREF
  int v40; // [rsp+A8h] [rbp-60h]
  _BYTE v41[192]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v42[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v43[4]; // [rsp+188h] [rbp+80h] BYREF
  char v44[16]; // [rsp+18Ch] [rbp+84h] BYREF
  char v45; // [rsp+19Ch] [rbp+94h]
  __int64 v46; // [rsp+1C0h] [rbp+B8h]
  __int64 v47; // [rsp+1D8h] [rbp+D0h]
  int v48; // [rsp+1E0h] [rbp+D8h]
  int v49; // [rsp+208h] [rbp+100h]
  __int64 v50; // [rsp+218h] [rbp+110h]
  _BYTE v51[4]; // [rsp+228h] [rbp+120h] BYREF
  char v52[16]; // [rsp+22Ch] [rbp+124h] BYREF
  char v53; // [rsp+23Ch] [rbp+134h]
  __int64 v54; // [rsp+260h] [rbp+158h]
  __int64 v55; // [rsp+278h] [rbp+170h]
  int v56; // [rsp+280h] [rbp+178h]
  int v57; // [rsp+2A8h] [rbp+1A0h]
  __int64 v58; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v59[84]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _DWORD v60[84]; // [rsp+418h] [rbp+310h] BYREF

  v32 = a1;
  v3 = a1;
  v31 = 0LL;
  memset_0(v59, 0, 0x144uLL);
  memset_0(v60, 0, 0x144uLL);
  v5 = v3 + 20;
  if ( *((_QWORD *)v3 + 11) )
  {
    if ( (a2 & 4) != 0 )
    {
      Gre::Base::Globals(v4);
      vSpComputeNoPresentRegion((REGION **)v3 + 10, 1);
    }
    for ( i = *((_QWORD *)v3 + 11); ; i = *(_QWORD *)(i + 24) )
    {
      if ( !i )
        return;
      v7 = *(_QWORD *)(i + 72);
      if ( v7 )
        break;
LABEL_57:
      ;
    }
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL)
      && ((v8 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v7,
           v9 = (_QWORD *)HMPkheFromPhe(v8),
           LOWORD(v7) = WORD1(v7) & 0x7FFF,
           (WORD1(v7) & 0x7FFF) == *(_WORD *)(v8 + 26))
       || (_WORD)v7 == 0x7FFF
       || !(_WORD)v7 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v8 + 25) & 1) == 0
      && *(_BYTE *)(v8 + 24) == 1
      && *v9 )
    {
      v10 = (HRGN *)(v5 + 264);
      VisrgnFromWindow(*v9, 0LL, v5 + 264);
    }
    else
    {
      v10 = (HRGN *)(v5 + 264);
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v38, *v10, 0, 0);
    if ( !v38 || !v30 || !RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v38) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
LABEL_52:
      if ( !v40 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v38);
      if ( v38 )
        _InterlockedDecrement((volatile signed __int32 *)(v38 + 12));
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
      goto LABEL_57;
    }
    v31.x = -*((_DWORD *)v3 + 640);
    v31.y = -*((_DWORD *)v3 + 641);
    RGNOBJ::bOffset((RGNOBJ *)&v30, &v31);
    v11 = *(struct REGION **)(i + 184);
    v12 = v30;
    v13 = 1;
    v35 = v30;
    if ( v11 )
    {
      v15 = *(_DWORD *)(i + 116);
      v16 = *(_DWORD *)(i + 112) + *(_DWORD *)(i + 104) - *(_DWORD *)(i + 96);
      v42[0] = *(_DWORD *)(i + 112);
      v42[2] = v16;
      v17 = v15 + *(_DWORD *)(i + 108) - *(_DWORD *)(i + 100);
      v42[1] = v15;
      v42[3] = v17;
      v47 = 0LL;
      v48 = 0;
      v49 = 1;
      v50 = 0LL;
      v46 = 0LL;
      v55 = 0LL;
      v56 = 0;
      v57 = 1;
      v58 = 0LL;
      v54 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v43, v11, (struct ERECTL *)v42, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v51, v12, (struct ERECTL *)v42, 0);
      ERECTL::bEmpty((ERECTL *)v44);
      v18 = ERECTL::bEmpty((ERECTL *)v52);
      if ( v19 == v18 )
      {
        if ( !v45 )
        {
          v14 = (struct _POINTL *)(i + 112);
          if ( !v53 )
            goto LABEL_41;
        }
        if ( v45 == v53 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v43, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v51, 0, 0, 4u, 0x64u);
          v20 = 1;
          v21 = 1;
          while ( 1 )
          {
            v22 = 0;
            v23 = 0;
            v59[0] = 0;
            v60[0] = 0;
            if ( v20 )
            {
              v24 = XCLIPOBJ::bEnum((XCLIPOBJ *)v43, 0x144u, (char *)v59, 0LL);
              v22 = v59[0];
              v20 = v24;
            }
            if ( v21 )
            {
              v25 = XCLIPOBJ::bEnum((XCLIPOBJ *)v51, 0x144u, (char *)v60, 0LL);
              v23 = v60[0];
              v21 = v25;
            }
            if ( v22 != v23 )
              break;
            v26 = 0;
            v13 = 1;
            if ( v22 )
            {
              while ( v60[4 * v26 + 1] == v59[4 * v26 + 1]
                   && v60[4 * v26 + 2] == v59[4 * v26 + 2]
                   && v60[4 * v26 + 3] == v59[4 * v26 + 3]
                   && v60[4 * v26 + 4] == v59[4 * v26 + 4] )
              {
                if ( ++v26 >= v22 )
                  goto LABEL_38;
              }
              break;
            }
LABEL_38:
            if ( !v20 )
            {
              v14 = (struct _POINTL *)(i + 112);
              if ( !v21 )
                goto LABEL_40;
            }
          }
          v14 = (struct _POINTL *)(i + 112);
          v13 = 0;
LABEL_40:
          v3 = v32;
          goto LABEL_41;
        }
      }
      v13 = 0;
      v14 = (struct _POINTL *)(i + 112);
    }
    else
    {
      v13 = 0;
      v14 = (struct _POINTL *)(i + 112);
    }
LABEL_41:
    v34 = *(_QWORD *)(i + 184);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
    v27 = v35;
    *(_QWORD *)(i + 184) = v35;
    *((_DWORD *)v27 + 18) = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(v28) + 1596);
    v33 = *(_QWORD *)v5;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v37, (struct PDEVOBJ *)&v33);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v41, (struct PDEVOBJ *)&v33);
    *(_DWORD *)i &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v30, (struct _RECTL *)(v5 + 10)) != 2 )
      *(_DWORD *)i |= 1u;
    bSpUpdatePosition((struct SPRITE *)i, v14, 0, 0);
    if ( *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v29) + 32) + 23664LL) )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v5, (struct _RECTL *)(i + 80), (struct _RECTL *)(i + 80));
    if ( !v13 )
    {
      if ( *((_QWORD *)v5 + 129) )
      {
        v36 = 0LL;
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v5, &v36, (struct _RECTL *)(i + 80), 0LL, 1);
      }
      vSpRedrawSprite((struct SPRITE *)i);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v41);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v37);
    goto LABEL_52;
  }
}
