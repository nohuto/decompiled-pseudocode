/*
 * XREFs of ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00546FC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C010D944 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284A48 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0018B14 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0065AF0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065E34 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FE68 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 */

void __fastcall vSpUpdateLockedScreenAreas(
        struct _SPRITESTATE *a1,
        struct _POINTL *a2,
        struct _RECTL *a3,
        struct _CLIPOBJ *a4,
        int a5)
{
  struct _CLIPOBJ *v6; // rdi
  struct REGION *v8; // r13
  const struct _RECTL *v9; // rsi
  int v10; // eax
  struct SPRITE *v11; // r14
  int v12; // ebx
  struct RGNOBJ *p_top; // rdx
  struct _SURFOBJ **v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdi
  struct _SURFOBJ **v23; // rsi
  int v24; // ecx
  struct _SURFOBJ *v25; // rax
  PVOID *p_pvScan0; // rbx
  int hsurf; // ecx
  struct REGION *v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  struct SPRITE *v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h]
  struct _POINTL *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  struct _CLIPOBJ *v35; // [rsp+78h] [rbp-88h]
  _BYTE v36[96]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v37[24]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v38; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v39; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _CLIPOBJ v40; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v41; // [rsp+1F8h] [rbp+F8h]
  __int64 v42; // [rsp+210h] [rbp+110h]
  int v43; // [rsp+218h] [rbp+118h]
  int v44; // [rsp+240h] [rbp+140h]
  __int64 v45; // [rsp+250h] [rbp+150h]

  v35 = a4;
  v30 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v45 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v6 = a4;
  v39 = 0LL;
  v32 = a2;
  v44 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v28);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v29);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
  v33 = *(_QWORD *)a1;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v37, (struct PDEVOBJ *)&v33);
  v8 = 0LL;
  if ( v28 )
  {
    if ( v29 )
    {
      v9 = (const struct _RECTL *)((char *)a1 + 40);
      if ( bIntersect(a3, (const struct _RECTL *)((char *)a1 + 40), &v39) )
      {
        ENUMAREAS::ENUMAREAS((ENUMAREAS *)v36, a1, &v39, 0, 0LL);
        do
        {
          v10 = ENUMAREAS::bEnum((ENUMAREAS *)v36, &v30, &v38);
          v11 = v30;
          v12 = v10;
          v31 = v10;
          if ( v30 )
          {
            if ( !v8 )
            {
              if ( !v6 || (p_top = (struct RGNOBJ *)&v6[2].rclBounds.top, !v6->iDComplexity) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v29, v9);
                p_top = (struct RGNOBJ *)&v29;
              }
              v34 = *((_QWORD *)a1 + 129);
              if ( !RGNOBJ::bMerge((RGNOBJ *)&v28, p_top, (struct RGNOBJ *)&v34, 4u) )
                RGNOBJ::vSet((RGNOBJ *)&v28);
              v8 = v28;
            }
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v40, v8, (struct ERECTL *)&v38, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
            {
              v14 = (struct _SURFOBJ **)((char *)a1 + 32);
              while ( a5 )
              {
                v15 = *((_QWORD *)a1 + 4);
                v16 = 0LL;
                if ( v15 )
                {
                  v17 = *(_DWORD *)(v15 + 88);
                  if ( (v17 & 0x80004000) != 0 && (v17 & 0x200) == 0 )
                  {
                    v16 = v15 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v15 - 24 + 48));
                  }
                }
                v18 = *((_QWORD *)v11 + 20);
                v19 = 0LL;
                if ( v18 )
                {
                  v20 = *(_DWORD *)(v18 + 88);
                  if ( (v20 & 0x80004000) != 0 && (v20 & 0x200) == 0 )
                  {
                    v19 = v18 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v18 - 24 + 48));
                  }
                }
                INVOKEOFFCOPYBITS(
                  (struct _POINTL *)v11 + 21,
                  *((struct _SURFOBJ **)v11 + 20),
                  v32,
                  *((struct _SURFOBJ **)a1 + 4),
                  &v40,
                  0LL,
                  &v38,
                  (struct _POINTL *)&v38);
                if ( v19 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
                if ( v16 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
                v14 = (struct _SURFOBJ **)((char *)a1 + 32);
                if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v36, &v30) )
                  goto LABEL_44;
                v11 = v30;
              }
              v21 = *((_QWORD *)v11 + 20);
              v22 = 0LL;
              v23 = (struct _SURFOBJ **)((char *)a1 + 32);
              if ( v21 )
              {
                v24 = *(_DWORD *)(v21 + 88);
                if ( (v24 & 0x80004000) != 0 )
                {
                  v23 = v14;
                  if ( (v24 & 0x200) == 0 )
                  {
                    v22 = v21 - 24;
                    GreLockDisplayDevice(*(_QWORD *)(v21 - 24 + 48));
                    v23 = (struct _SURFOBJ **)((char *)a1 + 32);
                  }
                }
              }
              v25 = *v23;
              p_pvScan0 = 0LL;
              if ( *v23 )
              {
                hsurf = (int)v25[1].hsurf;
                if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
                {
                  p_pvScan0 = &v25[-1].pvScan0;
                  GreLockDisplayDevice(v25->hdev);
                }
              }
              INVOKEOFFCOPYBITS(
                v32,
                *v23,
                (struct _POINTL *)v11 + 21,
                *((struct _SURFOBJ **)v11 + 20),
                &v40,
                0LL,
                &v38,
                (struct _POINTL *)&v38);
              if ( p_pvScan0 )
                GreUnlockDisplayDevice(p_pvScan0[6]);
              if ( v22 )
                GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
              v9 = (const struct _RECTL *)((char *)a1 + 40);
LABEL_44:
              v6 = v35;
              v12 = v31;
            }
          }
        }
        while ( v12 );
        ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v36);
      }
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v37);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
}
