/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0283E78
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00EEAF0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00987C0 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C00EDAE4 (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F001C (--1ENUMAREAS@@QEAA@XZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F0084 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F0280 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C016466C (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0164BD0 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0164CA4 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0164D40 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C0164D8C (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0164E84 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C02800C0 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285388 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  __int64 v2; // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdi
  struct _SURFOBJ *v11; // rdx
  int v12; // ecx
  int v13; // r12d
  struct _SURFOBJ *Composite; // r14
  __int64 v15; // rdi
  struct SPRITE *v16; // r15
  __int64 v17; // rax
  int v18; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  ULONG StartingIndex; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v22; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[96]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v26; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ v27; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp+8h]
  __int64 v29; // [rsp+120h] [rbp+20h]
  int v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+160h] [rbp+60h]
  int v33; // [rsp+168h] [rbp+68h]

  v2 = *(_QWORD *)a1;
  v23 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
  {
    v29 = 0LL;
    v30 = 0;
    v31 = 1;
    v32 = 0LL;
    v28 = 0LL;
    v33 = 0;
    v5 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v27, v5, *((struct REGION **)a1 + 87), (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v27.rclBounds) )
    {
      v6 = *((_QWORD *)a1 + 4);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 88);
        if ( (v8 & 0x80004000) != 0 && (v8 & 0x200) == 0 )
        {
          v7 = v6 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v6 - 24 + 48));
        }
      }
      v9 = *((_QWORD *)a1 + 166);
      v10 = 0LL;
      v11 = (struct _SURFOBJ *)v9;
      if ( v9 )
      {
        v12 = *(_DWORD *)(v9 + 88);
        if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
        {
          v10 = v9 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v9 - 24 + 48));
          v11 = (struct _SURFOBJ *)*((_QWORD *)a1 + 166);
        }
      }
      INVOKEOFFCOPYBITS(
        &gptlZero,
        v11,
        &gptlZero,
        *((struct _SURFOBJ **)a1 + 4),
        &v27,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        &gptlZero);
      if ( v10 )
        GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
      if ( v7 )
        GreUnlockDisplayDevice(*(_QWORD *)(v7 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v25, a1, a2, 0, 0LL);
    do
    {
      v13 = ENUMAREAS::bEnum((ENUMAREAS *)v25, &v22, &v26);
      if ( v22 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v25, &v22) )
      {
        StartingIndex = 0;
        Composite = psoSpGetComposite(a1, &v26, &StartingIndex);
        if ( !Composite )
          break;
        v15 = 0LL;
        v16 = v22;
        v23.x = -v26.left;
        v23.y = -v26.top;
        v17 = *((_QWORD *)v22 + 20);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v17 + 88);
          if ( (v18 & 0x80004000) != 0 && (v18 & 0x200) == 0 )
          {
            v15 = v17 - 24;
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
          &v23,
          Composite,
          (struct _POINTL *)v16 + 21,
          *((struct _SURFOBJ **)v16 + 20),
          0LL,
          0LL,
          &v26,
          (struct _POINTL *)&v26);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v15 )
          GreUnlockDisplayDevice(*(_QWORD *)(v15 + 48));
        while ( 1 )
        {
          if ( (*(_DWORD *)v16 & 0x100) == 0 )
            vSpComposite(v16, &v23, Composite, &v26);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v25, &v22) )
            break;
          v16 = v22;
        }
        vSpWriteToExMirror(a1, &v23, Composite, &v26);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v24, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v24);
        }
      }
    }
    while ( v13 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v25);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((REGION **)&v27);
  }
}
