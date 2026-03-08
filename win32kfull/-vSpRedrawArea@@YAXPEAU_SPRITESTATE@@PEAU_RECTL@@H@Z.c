/*
 * XREFs of ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C028445C
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C001C4E4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00659EC (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C0110C1C (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02803E0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0283608 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0286E00 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0018B14 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012AFAC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FD1C (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FE68 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C02825DC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285CF0 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawArea(struct _SPRITESTATE *a1, struct _RECTL *a2, int a3)
{
  __int64 v3; // rax
  PVOID *p_pvScan0; // rbx
  int v7; // r12d
  struct _SURFOBJ *Composite; // rsi
  __int64 v9; // rdi
  struct SPRITE *v10; // r15
  __int64 v11; // rax
  int v12; // ecx
  int hsurf; // eax
  ULONG StartingIndex; // [rsp+40h] [rbp-79h] BYREF
  struct SPRITE *v15; // [rsp+48h] [rbp-71h] BYREF
  struct _POINTL v16; // [rsp+50h] [rbp-69h] BYREF
  char v17[8]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v18[96]; // [rsp+60h] [rbp-59h] BYREF
  struct _RECTL v19; // [rsp+C0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)a1;
  p_pvScan0 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  if ( (*(_DWORD *)(v3 + 40) & 0x400) == 0 )
  {
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v18, a1, a2, 0, 0LL);
    do
    {
      v7 = ENUMAREAS::bEnum((ENUMAREAS *)v18, &v15, &v19);
      if ( v15 && (!(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v18, &v15) || a3) )
      {
        StartingIndex = 0;
        Composite = psoSpGetComposite(a1, &v19, &StartingIndex);
        if ( !Composite )
          break;
        v9 = 0LL;
        v10 = v15;
        v16.x = -v19.left;
        v16.y = -v19.top;
        v11 = *((_QWORD *)v15 + 20);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 88);
          if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
          {
            v9 = v11 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v11 - 24 + 48));
          }
        }
        hsurf = (int)Composite[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &Composite[-1].pvScan0;
          GreLockDisplayDevice(Composite->hdev);
        }
        INVOKEOFFCOPYBITS(
          &v16,
          Composite,
          (struct _POINTL *)v10 + 21,
          *((struct _SURFOBJ **)v10 + 20),
          0LL,
          0LL,
          &v19,
          (struct _POINTL *)&v19);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        p_pvScan0 = 0LL;
        if ( v9 )
          GreUnlockDisplayDevice(*(_QWORD *)(v9 + 48));
        while ( 1 )
        {
          vSpComposite(v10, &v16, Composite, &v19);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v18, &v15) )
            break;
          v10 = v15;
        }
        vSpWriteToScreen(a1, &v16, Composite, &v19);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v17, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
        }
      }
    }
    while ( v7 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v18);
  }
}
