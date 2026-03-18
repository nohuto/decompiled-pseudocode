/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0155444
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00B7030 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00228A4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00228D8 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0031174 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00B589C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01177BC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0155F90 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C015638C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C01566D4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C01569BC (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0156AE4 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0156B48 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027BAD4 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027BC24 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0281BA0 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // r15
  struct _RECTL *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r14
  int v7; // edi
  struct _POINTL *v8; // rdx
  struct _SURFOBJ *Composite; // r12
  struct SPRITE *v10; // r13
  struct _RECTL *v11; // r15
  struct SPRITE *v12; // rbx
  bool v13; // zf
  struct _RECTL *v14; // rdi
  struct _SPRITESTATE *v15; // rsi
  TRACKOBJ *i; // rdi
  __int64 v17; // rsi
  struct _RECTL *v18; // rbx
  __int64 v19; // rdi
  struct _RECTL *v20; // rbx
  __int64 v21; // r15
  const struct _RECTL *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  __int64 j; // rbx
  ULONG StartingIndex; // [rsp+40h] [rbp-89h] BYREF
  struct _RECTL *v30; // [rsp+48h] [rbp-81h]
  __int64 v31; // [rsp+50h] [rbp-79h] BYREF
  struct _POINTL v32; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-69h]
  struct _RECTL *v34; // [rsp+68h] [rbp-61h] BYREF
  int v35; // [rsp+70h] [rbp-59h]
  struct _RECTL *v36; // [rsp+78h] [rbp-51h]
  __int64 v37; // [rsp+80h] [rbp-49h]
  __int64 v38; // [rsp+88h] [rbp-41h]
  struct _RECTL v39; // [rsp+90h] [rbp-39h] BYREF
  struct _RECTL v40; // [rsp+A0h] [rbp-29h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v39 = 0LL;
  v31 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 40LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v40);
    v6 = v5;
    v33 = v5;
    if ( v5 )
    {
      v7 = 0;
      StartingIndex = 0;
      LODWORD(v30) = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1032) && (_DWORD)v6 )
        {
          v18 = &v40;
          v19 = v6;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v8, v18++, 0LL, 1);
            --v19;
          }
          while ( v19 );
          v7 = (int)v30;
        }
        v32.x = -v4->left;
        v32.y = -*((_DWORD *)a1 + 21);
        v10 = pSpFindInZ(*(struct SPRITE **)(v2 + 8), v4);
        if ( v10 )
        {
          v11 = (struct _RECTL *)((char *)a1 + 80);
          do
          {
            if ( v10 != a1 && (_DWORD)v6 )
            {
              v20 = &v40;
              v21 = (unsigned int)v6;
              v22 = (const struct _RECTL *)((char *)v10 + 80);
              v34 = &v40;
              v6 = (unsigned int)v6;
              v38 = (unsigned int)v6;
              do
              {
                if ( bIntersect(v20, v22, &v39) )
                {
                  if ( !v7 )
                  {
                    v37 = v6;
                    v30 = &v40;
                    do
                    {
                      v23 = *((_QWORD *)a1 + 20);
                      v24 = 0LL;
                      if ( v23 )
                      {
                        v25 = *(_DWORD *)(v23 + 88);
                        if ( (v25 & 0x80004000) != 0 && (v25 & 0x200) == 0 )
                        {
                          v24 = v23 - 24;
                          GreLockDisplayDevice(*(_QWORD *)(v23 - 24 + 48));
                        }
                      }
                      hsurf = (int)Composite[1].hsurf;
                      p_pvScan0 = 0LL;
                      if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
                      {
                        p_pvScan0 = &Composite[-1].pvScan0;
                        GreLockDisplayDevice(Composite->hdev);
                      }
                      INVOKEOFFCOPYBITS(
                        &v32,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v30,
                        (struct _POINTL *)v30);
                      if ( p_pvScan0 )
                        GreUnlockDisplayDevice(p_pvScan0[6]);
                      if ( v24 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
                      ++v30;
                      --v37;
                    }
                    while ( v37 );
                    v20 = v34;
                    v7 = 1;
                    v6 = v38;
                  }
                  vSpComposite(v10, &v32, Composite, &v39);
                }
                ++v20;
                v22 = (const struct _RECTL *)((char *)v10 + 80);
                v34 = v20;
                --v21;
              }
              while ( v21 );
              v6 = v33;
              v11 = (struct _RECTL *)((char *)a1 + 80);
            }
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v10 + 248));
            v10 = pSpFindInZ(*((struct SPRITE **)v10 + 3), v11);
          }
          while ( v10 );
          v2 = v31;
        }
        v12 = 0LL;
        v35 = 0;
        if ( *((_QWORD *)a1 + 9) )
        {
          v35 = v6;
          v12 = a1;
          v36 = &v40;
          v34 = (struct _RECTL *)a1;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v34);
        }
        if ( (_DWORD)v6 )
        {
          v13 = v7 == 0;
          v14 = &v40;
          if ( v13 )
          {
            do
            {
              vSpWriteToScreen(
                (struct _SPRITESTATE *)v2,
                (struct _POINTL *)a1 + 21,
                *((struct _SURFOBJ **)a1 + 20),
                v14++);
              --v6;
            }
            while ( v6 );
          }
          else
          {
            v17 = (unsigned int)v6;
            do
            {
              vSpWriteToScreen((struct _SPRITESTATE *)v2, &v32, Composite, v14++);
              --v17;
            }
            while ( v17 );
          }
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v31, (struct _EX_PUSH_LOCK *)(v2 + 688));
          RtlClearBits((PRTL_BITMAP)(v2 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v31);
        }
        if ( v12 )
        {
          v15 = (struct _SPRITESTATE *)*((_QWORD *)v12 + 2);
          v31 = ghsemWndobj;
          GreAcquireSemaphore(ghsemWndobj);
          for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
          {
            for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 160) )
            {
              UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)&v34, (struct EWNDOBJ *)j, v15);
              if ( (*(_DWORD *)(j + 184) & 0x800200) == 0x800200 )
              {
                *(_DWORD *)(j + 184) &= ~0x800000u;
                vSpUpdateWndobjOverlap(v15, (struct EWNDOBJ *)j);
              }
              UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)&v34);
            }
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v31);
        }
      }
    }
  }
}
