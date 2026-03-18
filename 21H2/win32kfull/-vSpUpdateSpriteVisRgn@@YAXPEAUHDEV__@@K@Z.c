/*
 * XREFs of ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049AEC
 * Callers:
 *     ?GdiUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049A7C (-GdiUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0085FE0 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpFreeClipResources@@YAXPEAVSPRITE@@@Z @ 0x1C00B5910 (-vSpFreeClipResources@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B6430 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00B6818 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C0102804 (UserVisrgnFromHwnd.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C028021C (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

void __fastcall vSpUpdateSpriteVisRgn(HDEV a1, char a2)
{
  int v4; // r12d
  __int64 v5; // rdi
  int v6; // r14d
  __int64 v7; // rdx
  struct REGION *v8; // rdx
  int v9; // ebx
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  struct REGION *v15; // rdx
  struct _POINTL *v16; // rdx
  int v17; // r15d
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  struct REGION *v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h]
  struct _POINTL v24; // [rsp+48h] [rbp-C0h] BYREF
  struct REGION *v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v29[192]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v30[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v31[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v32[16]; // [rsp+17Ch] [rbp+74h] BYREF
  char v33; // [rsp+18Ch] [rbp+84h]
  __int64 v34; // [rsp+1B0h] [rbp+A8h]
  __int64 v35; // [rsp+1C8h] [rbp+C0h]
  int v36; // [rsp+1D0h] [rbp+C8h]
  int v37; // [rsp+1F8h] [rbp+F0h]
  __int64 v38; // [rsp+208h] [rbp+100h]
  _BYTE v39[4]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v40[16]; // [rsp+21Ch] [rbp+114h] BYREF
  char v41; // [rsp+22Ch] [rbp+124h]
  __int64 v42; // [rsp+250h] [rbp+148h]
  __int64 v43; // [rsp+268h] [rbp+160h]
  int v44; // [rsp+270h] [rbp+168h]
  int v45; // [rsp+298h] [rbp+190h]
  __int64 v46; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v47[84]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _DWORD v48[84]; // [rsp+408h] [rbp+300h] BYREF

  v4 = 0;
  v24 = 0LL;
  memset(v47, 0, 0x144uLL);
  memset(v48, 0, 0x144uLL);
  v5 = *((_QWORD *)a1 + 11);
  if ( v5 )
  {
    v6 = 1;
    if ( (a2 & 4) != 0 )
    {
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)(a1 + 20), 1);
      v5 = *((_QWORD *)a1 + 11);
    }
    while ( v5 )
    {
      v7 = *(_QWORD *)(v5 + 72);
      if ( v7 )
      {
        UserVisrgnFromHwnd(a1 + 284, v7, 0LL);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v28, *((HRGN *)a1 + 142), 0, 0);
        if ( v28[0] && v22 && RGNOBJ::bCopy((RGNOBJ *)&v22, (struct RGNOBJ *)v28) )
        {
          v24.x = -*((_DWORD *)a1 + 640);
          v24.y = -*((_DWORD *)a1 + 641);
          RGNOBJ::bOffset((RGNOBJ *)&v22, &v24);
          v8 = *(struct REGION **)(v5 + 184);
          v9 = 1;
          v25 = v22;
          if ( !v8 )
            goto LABEL_26;
          v10 = *(_DWORD *)(v5 + 116);
          v11 = *(_DWORD *)(v5 + 112) + *(_DWORD *)(v5 + 104) - *(_DWORD *)(v5 + 96);
          v30[0] = *(_DWORD *)(v5 + 112);
          v30[2] = v11;
          v12 = v10 + *(_DWORD *)(v5 + 108) - *(_DWORD *)(v5 + 100);
          v30[1] = v10;
          v30[3] = v12;
          v35 = 0LL;
          v36 = 0;
          v37 = 1;
          v38 = 0LL;
          v34 = 0LL;
          v43 = 0LL;
          v44 = 0;
          v45 = 1;
          v46 = 0LL;
          v42 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v31, v8, (struct ERECTL *)v30, 0);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v25, (struct ERECTL *)v30, 0);
          ERECTL::bEmpty((ERECTL *)v32);
          v13 = ERECTL::bEmpty((ERECTL *)v40);
          if ( v14 != v13 )
            goto LABEL_26;
          if ( v33 || v41 )
          {
            if ( v33 == v41 )
            {
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v31, 0, 0, 4u, 0x64u);
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)v39, 0, 0, 4u, 0x64u);
              v17 = 1;
              while ( 1 )
              {
                v48[0] = 0;
                v18 = 0;
                v47[0] = 0;
                if ( v17 )
                {
                  v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v31, 0x144u, (char *)v47, 0LL);
                  v18 = v47[0];
                  v17 = v19;
                }
                if ( v6 )
                {
                  v20 = XCLIPOBJ::bEnum((XCLIPOBJ *)v39, 0x144u, (char *)v48, 0LL);
                  v4 = v48[0];
                  v6 = v20;
                }
                if ( v18 != v4 )
                  break;
                v4 = 0;
                v21 = 0;
                if ( v18 )
                {
                  while ( v48[4 * v21 + 1] == v47[4 * v21 + 1]
                       && v48[4 * v21 + 2] == v47[4 * v21 + 2]
                       && v48[4 * v21 + 3] == v47[4 * v21 + 3]
                       && v48[4 * v21 + 4] == v47[4 * v21 + 4] )
                  {
                    if ( ++v21 >= v18 )
                      goto LABEL_37;
                  }
                  goto LABEL_36;
                }
LABEL_37:
                if ( !v17 )
                {
                  v9 = 1;
                  if ( !v6 )
                  {
                    v6 = 1;
                    goto LABEL_14;
                  }
                }
              }
              v4 = 0;
LABEL_36:
              v9 = 0;
              v6 = 1;
              goto LABEL_14;
            }
LABEL_26:
            v9 = 0;
          }
LABEL_14:
          vSpFreeClipResources((struct SPRITE *)v5);
          v15 = v25;
          *(_QWORD *)(v5 + 184) = v25;
          *((_DWORD *)v15 + 7) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
          v26 = *((_QWORD *)a1 + 10);
          SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v27, (struct PDEVOBJ *)&v26);
          SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v29, (struct PDEVOBJ *)&v26);
          *(_DWORD *)v5 &= ~1u;
          if ( RGNOBJ::bInside((RGNOBJ *)&v22, (struct _RECTL *)(a1 + 30)) != 2 )
            *(_DWORD *)v5 |= 1u;
          bSpUpdatePosition((struct SPRITE *)v5, (struct _POINTL *)(v5 + 112), 0, 0);
          if ( gpto )
            vSpCheckForWndobjOverlap(
              (struct _SPRITESTATE *)(a1 + 20),
              (struct _RECTL *)(v5 + 80),
              (struct _RECTL *)(v5 + 80));
          if ( !v9 )
          {
            if ( *((_QWORD *)a1 + 139) )
              vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)(a1 + 20), v16, (struct _RECTL *)(v5 + 80), 0LL, 1);
            vSpRedrawSprite((struct SPRITE *)v5);
          }
          SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v29);
          SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v27);
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v28);
        if ( (_DWORD)v23 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v22);
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
  }
}
