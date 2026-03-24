/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0074C9C
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C0073150 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C008BE40 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008C448 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE400 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C00ED808 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00F0208 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00F02F8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F09BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C011CB04 (UserVisrgnFromHwnd.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C02823F0 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02842B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  HDEV v3; // r14
  HDEV v4; // rsi
  __int64 v5; // rdi
  int v6; // r13d
  __int64 v7; // rdx
  struct REGION *v8; // rdx
  int v9; // ebx
  struct REGION *v10; // r15
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  struct _POINTL *v16; // rdx
  int v17; // r12d
  unsigned int v18; // r14d
  int v19; // r15d
  int v20; // eax
  int v21; // eax
  int v22; // edx
  struct REGION *v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h]
  struct _POINTL v25; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v26; // [rsp+50h] [rbp-B8h]
  struct REGION *v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v30[7]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v31[192]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v32[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v33[4]; // [rsp+178h] [rbp+70h] BYREF
  char v34[16]; // [rsp+17Ch] [rbp+74h] BYREF
  char v35; // [rsp+18Ch] [rbp+84h]
  __int64 v36; // [rsp+1B0h] [rbp+A8h]
  __int64 v37; // [rsp+1C8h] [rbp+C0h]
  int v38; // [rsp+1D0h] [rbp+C8h]
  int v39; // [rsp+1F8h] [rbp+F0h]
  __int64 v40; // [rsp+208h] [rbp+100h]
  _BYTE v41[4]; // [rsp+218h] [rbp+110h] BYREF
  char v42[16]; // [rsp+21Ch] [rbp+114h] BYREF
  char v43; // [rsp+22Ch] [rbp+124h]
  __int64 v44; // [rsp+250h] [rbp+148h]
  __int64 v45; // [rsp+268h] [rbp+160h]
  int v46; // [rsp+270h] [rbp+168h]
  int v47; // [rsp+298h] [rbp+190h]
  __int64 v48; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v49[84]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v50[84]; // [rsp+408h] [rbp+300h] BYREF

  v26 = a1;
  v3 = a1;
  v25 = 0LL;
  memset(v49, 0, 0x144uLL);
  memset(v50, 0, 0x144uLL);
  v4 = v3 + 22;
  v5 = *((_QWORD *)v3 + 12);
  if ( v5 )
  {
    v6 = 1;
    if ( (a2 & 4) != 0 )
    {
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(v3 + 22), 1);
      v5 = *((_QWORD *)v3 + 12);
    }
    while ( 1 )
    {
      if ( !v5 )
        return;
      v7 = *(_QWORD *)(v5 + 72);
      if ( v7 )
        break;
LABEL_20:
      v5 = *(_QWORD *)(v5 + 24);
    }
    UserVisrgnFromHwnd(v4 + 264, v7, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v30, *((HRGN *)v4 + 132), 0, 0);
    if ( !v30[0] || !v23 || !RGNOBJ::bCopy((RGNOBJ *)&v23, (struct RGNOBJ *)v30) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
LABEL_18:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v30);
      if ( (_DWORD)v24 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
      goto LABEL_20;
    }
    v25.x = -*((_DWORD *)v3 + 646);
    v25.y = -*((_DWORD *)v3 + 647);
    RGNOBJ::bOffset((RGNOBJ *)&v23, &v25);
    v8 = *(struct REGION **)(v5 + 184);
    v9 = 1;
    v10 = v23;
    v27 = v23;
    if ( v8 )
    {
      v11 = *(_DWORD *)(v5 + 116);
      v12 = *(_DWORD *)(v5 + 112) + *(_DWORD *)(v5 + 104) - *(_DWORD *)(v5 + 96);
      v32[0] = *(_DWORD *)(v5 + 112);
      v32[2] = v12;
      v13 = v11 + *(_DWORD *)(v5 + 108) - *(_DWORD *)(v5 + 100);
      v32[1] = v11;
      v32[3] = v13;
      v37 = 0LL;
      v38 = 0;
      v39 = 1;
      v40 = 0LL;
      v36 = 0LL;
      v45 = 0LL;
      v46 = 0;
      v47 = 1;
      v48 = 0LL;
      v44 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v33, v8, (struct ERECTL *)v32, 0);
      XCLIPOBJ::vSetup((XCLIPOBJ *)v41, v10, (struct ERECTL *)v32, 0);
      ERECTL::bEmpty((ERECTL *)v34);
      v14 = ERECTL::bEmpty((ERECTL *)v42);
      if ( v15 == v14 )
      {
        if ( !v35 && !v43 )
          goto LABEL_12;
        if ( v35 == v43 )
        {
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v33, 0, 0, 4u, 0x64u);
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v41, 0, 0, 4u, 0x64u);
          v17 = 1;
          while ( 1 )
          {
            v18 = 0;
            v19 = 0;
            v49[0] = 0;
            v50[0] = 0;
            if ( v17 )
            {
              v20 = XCLIPOBJ::bEnum((XCLIPOBJ *)v33, 0x144u, v49, 0LL);
              v18 = v49[0];
              v17 = v20;
            }
            if ( v6 )
            {
              v21 = XCLIPOBJ::bEnum((XCLIPOBJ *)v41, 0x144u, v50, 0LL);
              v19 = v50[0];
              v6 = v21;
            }
            if ( v18 != v19 )
              break;
            v22 = 0;
            if ( v18 )
            {
              while ( v50[4 * v22 + 1] == v49[4 * v22 + 1]
                   && v50[4 * v22 + 2] == v49[4 * v22 + 2]
                   && v50[4 * v22 + 3] == v49[4 * v22 + 3]
                   && v50[4 * v22 + 4] == v49[4 * v22 + 4] )
              {
                if ( ++v22 >= v18 )
                  goto LABEL_42;
              }
              v9 = 0;
              v17 = 0;
              v6 = 0;
            }
LABEL_42:
            if ( !v17 && !v6 )
              goto LABEL_46;
          }
          v9 = 0;
LABEL_46:
          v10 = v27;
          v6 = 1;
          v3 = v26;
          goto LABEL_12;
        }
      }
    }
    v9 = 0;
LABEL_12:
    vSpFreeClipResources((struct SPRITE *)v5);
    *(_QWORD *)(v5 + 184) = v10;
    *((_DWORD *)v10 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
    v28 = *(_QWORD *)v4;
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v29, (struct PDEVOBJ *)&v28);
    SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v31, (struct PDEVOBJ *)&v28);
    *(_DWORD *)v5 &= ~1u;
    if ( RGNOBJ::bInside((RGNOBJ *)&v23, (struct _RECTL *)(v4 + 10)) != 2 )
      *(_DWORD *)v5 |= 1u;
    bSpUpdatePosition((struct SPRITE *)v5, (struct _POINTL *)(v5 + 112), 0, 0);
    if ( gpto )
      vSpCheckForWndobjOverlap((struct _SPRITESTATE *)v4, (struct _RECTL *)(v5 + 80), (struct _RECTL *)(v5 + 80));
    if ( !v9 )
    {
      if ( *((_QWORD *)v4 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v4, v16, (struct _RECTL *)(v5 + 80), 0LL, 1);
      vSpRedrawSprite((struct SPRITE *)v5);
    }
    SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v31);
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v29);
    goto LABEL_18;
  }
}
