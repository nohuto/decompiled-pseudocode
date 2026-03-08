/*
 * XREFs of ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02846B0
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0018CB0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 * Callees:
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0018908 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0018A84 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0018B14 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C001B784 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C010C70C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C012AFAC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027C3EC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FD1C (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027FDFC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C027FE68 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C02825DC (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C028290C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0285C00 (-vSpWriteToExMirror@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

void __fastcall vSpRedrawAreaExMirror(struct _SPRITESTATE *a1, struct _RECTL *a2)
{
  __int64 v2; // rax
  struct REGION *v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ecx
  struct _SURFOBJ *v13; // r9
  struct _SURFOBJ *v14; // rdx
  int v15; // r12d
  struct _SURFOBJ *Composite; // r14
  __int64 v17; // rdi
  struct SPRITE *v18; // r15
  __int64 v19; // rax
  int v20; // ecx
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  ULONG StartingIndex[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct SPRITE *v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _POINTL v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[96]; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v28; // [rsp+C0h] [rbp-40h] BYREF
  struct _CLIPOBJ v29; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+60h]
  int v35; // [rsp+168h] [rbp+68h]

  v2 = *(_QWORD *)a1;
  v25 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
  {
    v5 = (struct REGION *)*((_QWORD *)a1 + 87);
    v31 = 0LL;
    v32 = 0;
    v33 = 1;
    v34 = 0LL;
    v30 = 0LL;
    v35 = 0;
    v6 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v29, v6, v5, (struct ERECTL *)a2, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v29.rclBounds) )
    {
      v7 = *((_QWORD *)a1 + 4);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 88);
        if ( (v9 & 0x80004000) != 0 && (v9 & 0x200) == 0 )
        {
          v8 = v7 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v7 - 24 + 48));
        }
      }
      v10 = *((_QWORD *)a1 + 166);
      v11 = 0LL;
      if ( v10 )
      {
        v12 = *(_DWORD *)(v10 + 88);
        if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
        {
          v11 = v10 - 24;
          GreLockDisplayDevice(*(_QWORD *)(v10 - 24 + 48));
        }
      }
      v13 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
      v14 = (struct _SURFOBJ *)*((_QWORD *)a1 + 166);
      *(_QWORD *)StartingIndex = 0LL;
      INVOKEOFFCOPYBITS(
        (struct _POINTL *)StartingIndex,
        v14,
        (struct _POINTL *)StartingIndex,
        v13,
        &v29,
        0LL,
        (struct _RECTL *)((char *)a1 + 40),
        (struct _POINTL *)StartingIndex);
      if ( v11 )
        GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
      if ( v8 )
        GreUnlockDisplayDevice(*(_QWORD *)(v8 + 48));
    }
    ENUMAREAS::ENUMAREAS((ENUMAREAS *)v27, a1, a2, 0, 0LL);
    do
    {
      v15 = ENUMAREAS::bEnum((ENUMAREAS *)v27, &v24, &v28);
      if ( v24 && !(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v27, &v24) )
      {
        StartingIndex[0] = 0;
        Composite = psoSpGetComposite(a1, &v28, StartingIndex);
        if ( !Composite )
          break;
        v17 = 0LL;
        v18 = v24;
        v25.x = -v28.left;
        v25.y = -v28.top;
        v19 = *((_QWORD *)v24 + 20);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 88);
          if ( (v20 & 0x80004000) != 0 && (v20 & 0x200) == 0 )
          {
            v17 = v19 - 24;
            GreLockDisplayDevice(*(_QWORD *)(v19 - 24 + 48));
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
          &v25,
          Composite,
          (struct _POINTL *)v18 + 21,
          *((struct _SURFOBJ **)v18 + 20),
          0LL,
          0LL,
          &v28,
          (struct _POINTL *)&v28);
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        if ( v17 )
          GreUnlockDisplayDevice(*(_QWORD *)(v17 + 48));
        while ( 1 )
        {
          if ( (*(_DWORD *)v18 & 0x100) == 0 )
            vSpComposite(v18, &v25, Composite, &v28);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v27, &v24) )
            break;
          v18 = v24;
        }
        vSpWriteToExMirror(a1, &v25, Composite, &v28);
        if ( StartingIndex[0] == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v26, (struct _SPRITESTATE *)((char *)a1 + 688));
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex[0], 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v26);
        }
      }
    }
    while ( v15 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v27);
    ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)&v29);
  }
}
