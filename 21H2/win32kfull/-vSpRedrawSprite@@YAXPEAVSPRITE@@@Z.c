/*
 * XREFs of ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00F0558
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0074D3C (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00EFA8C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00F03D4 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027E8B0 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027EEE0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00987C0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEEF0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00EDAE4 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C010DE10 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C016466C (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0164A6C (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0164BF8 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0164D14 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0164D8C (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02855AC (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawSprite(struct SPRITE *a1)
{
  __int64 v1; // r12
  char v3; // dl
  unsigned int v4; // r13d
  LONG *v5; // r14
  struct _SURFOBJ *Composite; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  struct SPRITE *i; // rcx
  const struct _RECTL *v13; // rax
  struct _RECTL *v14; // rbx
  int v15; // edi
  struct REGION *v16; // rbx
  __int128 v17; // xmm0
  struct _RECTL *v18; // r9
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  ULONG StartingIndex; // [rsp+48h] [rbp-C0h] BYREF
  struct _POINTL v23; // [rsp+50h] [rbp-B8h] BYREF
  struct _RECTL v24; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v25; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v26[20]; // [rsp+78h] [rbp-90h] BYREF
  char v27; // [rsp+8Ch] [rbp-7Ch]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+108h] [rbp+0h]
  _DWORD v33[84]; // [rsp+118h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v25 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x400) == 0 && (*(_DWORD *)a1 & 0x400) == 0 && (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v4 = 0;
    if ( !(unsigned int)bIgnoreMirrorUpdate(a1) && ((v3 & 0x40) == 0 || (v3 & 0xC0) == 0xC0) )
    {
      v5 = (LONG *)((char *)a1 + 80);
      StartingIndex = 0;
      Composite = psoSpGetComposite((struct _SPRITESTATE *)v1, (struct _RECTL *)a1 + 5, &StartingIndex);
      if ( Composite )
      {
        v7 = 0LL;
        v8 = *((_QWORD *)a1 + 20);
        v23.x = -*v5;
        v23.y = -*((_DWORD *)a1 + 21);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 + 88);
          if ( (v9 & 0x80004000) != 0 && (v9 & 0x200) == 0 )
          {
            v7 = v8 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v8 - 24 + 48));
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
          &v23,
          Composite,
          (struct _POINTL *)a1 + 21,
          *((struct _SURFOBJ **)a1 + 20),
          0LL,
          0LL,
          (struct _RECTL *)a1 + 5,
          (struct _POINTL *)a1 + 10);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v7 )
          GreUnlockDisplayDevice(*(_QWORD *)(v7 + 48));
        for ( i = *(struct SPRITE **)(v1 + 8); ; i = *(struct SPRITE **)&v14[1].right )
        {
          v13 = (const struct _RECTL *)pSpFindInZ(i, (struct _RECTL *)a1 + 5);
          v14 = (struct _RECTL *)v13;
          if ( !v13 )
            break;
          if ( bIntersect(v13 + 5, (const struct _RECTL *)a1 + 5, &v25) )
            vSpComposite((struct SPRITE *)v14, &v23, Composite, &v25);
          SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)&v14[15].right);
        }
        v15 = 1;
        v16 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
        if ( !v16 )
        {
          if ( (*(_DWORD *)a1 & 0x40) == 0 )
            vSpWriteToScreen((struct _SPRITESTATE *)v1, &v23, Composite, (struct _RECTL *)a1 + 5);
          goto LABEL_49;
        }
        v29 = 0LL;
        v30 = 0;
        v31 = 1;
        v32 = 0LL;
        v28 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v16, (struct SPRITE *)((char *)a1 + 80), 1);
        memset(v33, 0, 0x144uLL);
        if ( v27 )
        {
          if ( v27 != 1 )
          {
            if ( v27 != 3 )
            {
LABEL_48:
              vSpAddAndCompactDirtyRegion(a1, v16);
LABEL_49:
              if ( StartingIndex == -1 )
              {
                vSpDeleteSurface(Composite);
              }
              else
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v24, (struct _EX_PUSH_LOCK *)(v1 + 688));
                RtlClearBits((PRTL_BITMAP)(v1 + 664), StartingIndex, 1u);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v24);
              }
              return;
            }
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)v26, 0, 0, 4u, 0x14u);
LABEL_35:
            if ( !v15 )
              goto LABEL_37;
            do
            {
              v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)v26, 0x144u, (char *)v33, 0LL);
LABEL_37:
              if ( v33[0] )
              {
                do
                {
                  v18 = (struct _RECTL *)&v33[4 * v4 + 1];
                  if ( v18->left < *v5 )
                    v18->left = *v5;
                  v19 = *((_DWORD *)a1 + 22);
                  if ( v18->right > v19 )
                    v18->right = v19;
                  v20 = *((_DWORD *)a1 + 21);
                  if ( v18->top < v20 )
                    v18->top = v20;
                  v21 = *((_DWORD *)a1 + 23);
                  if ( v18->bottom > v21 )
                    v18->bottom = v21;
                  vSpWriteToScreen((struct _SPRITESTATE *)v1, &v23, Composite, v18);
                  ++v4;
                }
                while ( v4 < v33[0] );
              }
              v4 = 0;
            }
            while ( v15 );
            goto LABEL_48;
          }
          v17 = *(_OWORD *)&v26[4];
        }
        else
        {
          v17 = *(_OWORD *)v5;
        }
        *(_OWORD *)&v33[1] = v17;
        v33[0] = 1;
        v15 = 0;
        goto LABEL_35;
      }
    }
  }
}
