/*
 * XREFs of ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284A48
 * Callers:
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C001CFDC (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012AFAC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z @ 0x1C028186C (-cSpSubtract@@YAKPEBU_RECTL@@0PEAU1@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C02825DC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C028283C (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C028512C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285CF0 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0285E64 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0285FA8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawUncoveredArea(struct SPRITE *a1, struct _RECTL *a2)
{
  __int64 v2; // r15
  struct _RECTL *v4; // r13
  unsigned int v5; // eax
  __int64 v6; // r14
  int v7; // edi
  struct _SURFOBJ *Composite; // r12
  struct _RECTL *v9; // rbx
  __int64 v10; // rdi
  struct SPRITE *v11; // r13
  struct _RECTL *v12; // r15
  const struct _RECTL *v13; // rbx
  __int64 v14; // r15
  const struct _RECTL *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *v21; // rbx
  bool v22; // zf
  struct _RECTL *v23; // rdi
  __int64 v24; // rsi
  ULONG StartingIndex; // [rsp+40h] [rbp-99h] BYREF
  struct _RECTL *v26; // [rsp+48h] [rbp-91h]
  struct _POINTL v27; // [rsp+50h] [rbp-89h] BYREF
  struct _POINTL v28; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-79h]
  char v30[8]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v31; // [rsp+70h] [rbp-69h]
  __int64 v32; // [rsp+78h] [rbp-61h]
  struct SPRITE *v33; // [rsp+80h] [rbp-59h] BYREF
  int v34; // [rsp+88h] [rbp-51h]
  struct _RECTL *v35; // [rsp+90h] [rbp-49h]
  __int64 v36; // [rsp+98h] [rbp-41h]
  struct _RECTL v37; // [rsp+A0h] [rbp-39h] BYREF
  struct _RECTL v38; // [rsp+B0h] [rbp-29h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v37 = 0LL;
  v36 = v2;
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
      LODWORD(v26) = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v2, v4, &StartingIndex);
      if ( Composite )
      {
        if ( *(_QWORD *)(v2 + 1032) )
        {
          v28 = 0LL;
          if ( (_DWORD)v6 )
          {
            v9 = &v38;
            v10 = (unsigned int)v6;
            do
            {
              vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v2, &v28, v9++, 0LL, 1);
              --v10;
            }
            while ( v10 );
            v7 = (int)v26;
          }
        }
        v27.x = -v4->left;
        v27.y = -*((_DWORD *)a1 + 21);
        v11 = pSpFindInZ(*(struct SPRITE **)(v2 + 8), v4);
        if ( v11 )
        {
          v12 = (struct _RECTL *)((char *)a1 + 80);
          do
          {
            if ( v11 != a1 && (_DWORD)v6 )
            {
              v13 = &v38;
              v14 = (unsigned int)v6;
              v15 = (const struct _RECTL *)((char *)v11 + 80);
              v28 = (struct _POINTL)&v38;
              v6 = (unsigned int)v6;
              v32 = (unsigned int)v6;
              do
              {
                if ( bIntersect(v13, v15, &v37) )
                {
                  if ( !v7 )
                  {
                    v31 = v6;
                    v26 = &v38;
                    do
                    {
                      v16 = *((_QWORD *)a1 + 20);
                      v17 = 0LL;
                      if ( v16 )
                      {
                        v18 = *(_DWORD *)(v16 + 88);
                        if ( (v18 & 0x80004000) != 0 && (v18 & 0x200) == 0 )
                        {
                          v17 = v16 - 24;
                          GreLockDisplayDevice(*(_QWORD *)(v16 - 24 + 48));
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
                        &v27,
                        Composite,
                        (struct _POINTL *)a1 + 21,
                        *((struct _SURFOBJ **)a1 + 20),
                        0LL,
                        0LL,
                        v26,
                        (struct _POINTL *)v26);
                      if ( p_pvScan0 )
                        GreUnlockDisplayDevice(p_pvScan0[6]);
                      if ( v17 )
                        GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
                      ++v26;
                      --v31;
                    }
                    while ( v31 );
                    v13 = (const struct _RECTL *)v28;
                    v7 = 1;
                    v6 = v32;
                  }
                  vSpComposite(v11, &v27, Composite, &v37);
                }
                ++v13;
                v15 = (const struct _RECTL *)((char *)v11 + 80);
                v28 = (struct _POINTL)v13;
                --v14;
              }
              while ( v14 );
              v6 = v29;
              v12 = (struct _RECTL *)((char *)a1 + 80);
            }
            SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v11 + 248));
            v11 = pSpFindInZ(*((struct SPRITE **)v11 + 3), v12);
          }
          while ( v11 );
          v2 = v36;
        }
        v21 = 0LL;
        v34 = 0;
        v33 = 0LL;
        if ( *((_QWORD *)a1 + 9) )
        {
          v34 = v6;
          v21 = a1;
          v35 = &v38;
          v33 = a1;
          UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v33);
        }
        if ( (_DWORD)v6 )
        {
          v22 = v7 == 0;
          v23 = &v38;
          if ( v22 )
          {
            do
            {
              vSpWriteToScreen(
                (struct _SPRITESTATE *)v2,
                (struct _POINTL *)a1 + 21,
                *((struct _SURFOBJ **)a1 + 20),
                v23++);
              --v6;
            }
            while ( v6 );
          }
          else
          {
            v24 = (unsigned int)v6;
            do
            {
              vSpWriteToScreen((struct _SPRITESTATE *)v2, &v27, Composite, v23++);
              --v24;
            }
            while ( v24 );
          }
        }
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v30, (struct _EX_PUSH_LOCK *)(v2 + 688));
          RtlClearBits((PRTL_BITMAP)(v2 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v30);
        }
        if ( v21 )
          UNDOWNDOBJSPRITEOVERLAPCLIP::vRedo((UNDOWNDOBJSPRITEOVERLAPCLIP *)&v33);
      }
    }
  }
}
