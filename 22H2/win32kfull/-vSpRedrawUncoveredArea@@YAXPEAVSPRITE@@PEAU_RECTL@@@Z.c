/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0283BD4
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00F09BC (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0098730 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BCDE8 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BCE1C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00ED794 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C010DA90 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0163E9C (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C016429C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C01645BC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C02811C4 (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0281EDC (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02842B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0284E4C (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0284F7C (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
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
  struct _RECTL *v10; // rbx
  __int64 v11; // rdi
  struct SPRITE *v12; // r13
  struct _RECTL *v13; // r15
  struct _RECTL *v14; // rbx
  __int64 v15; // r15
  const struct _RECTL *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *v22; // rbx
  bool v23; // zf
  struct _RECTL *v24; // rdi
  __int64 v25; // rsi
  ULONG StartingIndex; // [rsp+40h] [rbp-99h] BYREF
  struct _RECTL *v27; // [rsp+48h] [rbp-91h]
  struct _POINTL v28; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-81h]
  __int64 v30; // [rsp+60h] [rbp-79h] BYREF
  __int64 v31; // [rsp+68h] [rbp-71h]
  __int64 v32; // [rsp+70h] [rbp-69h]
  struct _RECTL *v33; // [rsp+78h] [rbp-61h]
  struct SPRITE *v34; // [rsp+80h] [rbp-59h] BYREF
  int v35; // [rsp+88h] [rbp-51h]
  struct _RECTL *v36; // [rsp+90h] [rbp-49h]
  struct _RECTL v37; // [rsp+98h] [rbp-41h] BYREF
  struct _RECTL v38; // [rsp+B0h] [rbp-29h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v37 = 0LL;
  v30 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 40LL) & 0x400) == 0 )
  {
    v4 = (struct _RECTL *)((char *)a1 + 80);
    v5 = cSpSubtract((const struct _RECTL *)a1 + 5, a2, &v38);
    v6 = v5;
    v29 = v5;
    if ( v5 )
    {
      v7 = 0;
      StartingIndex = 0;
      LODWORD(v27) = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1032) && (_DWORD)v6 )
        {
          v10 = &v38;
          v11 = (unsigned int)v6;
          do
          {
            vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, v8, v10++, 0LL, 1);
            --v11;
          }
          while ( v11 );
          v7 = (int)v27;
        }
        v28.x = -v4->left;
        v28.y = -*((_DWORD *)a1 + 21);
        v12 = pSpFindInZ(*(struct SPRITE **)(v2 + 8), v4);
        if ( v12 )
        {
          v13 = (struct _RECTL *)((char *)a1 + 80);
          do
          {
            if ( v12 != a1 && (_DWORD)v6 )
            {
              v14 = &v38;
              v15 = (unsigned int)v6;
              v16 = (const struct _RECTL *)((char *)v12 + 80);
              v33 = &v38;
              v6 = (unsigned int)v6;
              v32 = (unsigned int)v6;
              do
              {
                if ( bIntersect(v14, v16, &v37) )
                {
                  if ( !v7 )
                  {
                    v31 = v6;
                    v27 = &v38;
                    do
                    {
                      v17 = *((_QWORD *)a1 + 20);
                      v18 = 0LL;
                      if ( v17 )
                      {
                        v19 = *(_DWORD *)(v17 + 88);
                        if ( (v19 & 0x80004000) != 0 && (v19 & 0x200) == 0 )
                        {
                          v18 = v17 - 24;
                          GreLockDisplayDevice(*(_QWORD *)(v17 - 24 + 48));
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
                        &v28,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v27,
                        (struct _POINTL *)v27);
                      if ( p_pvScan0 )
                        GreUnlockDisplayDevice(p_pvScan0[6]);
                      if ( v18 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v18 + 48));
                      ++v27;
                      --v31;
                    }
                    while ( v31 );
                    v14 = v33;
                    v7 = 1;
                    v6 = v32;
                  }
                  vSpComposite(v12, &v28, Composite, &v37);
                }
                ++v14;
                v16 = (const struct _RECTL *)((char *)v12 + 80);
                v33 = v14;
                --v15;
              }
              while ( v15 );
              v6 = v29;
              v13 = (struct _RECTL *)((char *)a1 + 80);
            }
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v12 + 248));
            v12 = pSpFindInZ(*((struct SPRITE **)v12 + 3), v13);
          }
          while ( v12 );
          v2 = v30;
        }
        v22 = 0LL;
        v35 = 0;
        v34 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v35 = v6;
          v22 = a1;
          v36 = &v38;
          v34 = a1;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v34);
        }
        if ( (_DWORD)v6 )
        {
          v23 = v7 == 0;
          v24 = &v38;
          if ( v23 )
          {
            do
            {
              vSpWriteToScreen(
                (struct _SPRITESTATE *)v2,
                (struct _POINTL *)a1 + 21,
                *((struct _SURFOBJ **)a1 + 20),
                v24++);
              --v6;
            }
            while ( v6 );
          }
          else
          {
            v25 = (unsigned int)v6;
            do
            {
              vSpWriteToScreen((struct _SPRITESTATE *)v2, &v28, Composite, v24++);
              --v25;
            }
            while ( v25 );
          }
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v30, (struct _EX_PUSH_LOCK *)(v2 + 688));
          RtlClearBits((PRTL_BITMAP)(v2 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v30);
        }
        if ( v22 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v34);
      }
    }
  }
}
