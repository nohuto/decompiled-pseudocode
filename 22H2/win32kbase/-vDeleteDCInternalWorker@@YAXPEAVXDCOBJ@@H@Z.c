/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C014D314
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003C98C (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0022D50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C002CB3C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002CE60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002D550 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C002E710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C002ED00 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C007C740 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0140DA0 (-vReleaseVis@DC@@QEAAXXZ.c)
 */

void __fastcall vDeleteDCInternalWorker(struct DC **this, unsigned int a2)
{
  DC *v4; // rcx
  struct DC *v5; // rbx
  REGION *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // rcx
  REGION *v9; // rcx
  REGION *v10; // rcx
  REGION *v11; // rcx
  struct PDEV *v12; // rbx
  int v13; // r8d
  int v14; // r8d
  struct PDEV *v15; // [rsp+30h] [rbp+8h] BYREF
  struct PDEV *v16; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    FreeDCAttributes(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT(*((unsigned int **)*this + 12));
  v4 = *this;
  v15 = (struct PDEV *)*((_QWORD *)*this + 6);
  DC::vReleaseVis(v4);
  DC::vReleaseRao(*this);
  v5 = *this;
  v6 = (REGION *)*((_QWORD *)*this + 144);
  if ( v6 )
  {
    REGION::vDeleteREGION(v6);
    *((_QWORD *)*this + 144) = 0LL;
    v5 = *this;
  }
  v7 = (REGION *)*((_QWORD *)v5 + 146);
  if ( v7 )
  {
    REGION::vDeleteREGION(v7);
    *((_QWORD *)*this + 146) = 0LL;
    v5 = *this;
  }
  v8 = (REGION *)*((_QWORD *)v5 + 145);
  if ( v8 )
  {
    REGION::vDeleteREGION(v8);
    *((_QWORD *)*this + 145) = 0LL;
    v5 = *this;
  }
  v9 = (REGION *)*((_QWORD *)v5 + 147);
  if ( v9 )
  {
    REGION::vDeleteREGION(v9);
    *((_QWORD *)*this + 147) = 0LL;
    v5 = *this;
  }
  v10 = (REGION *)*((_QWORD *)v5 + 148);
  if ( v10 )
  {
    REGION::vDeleteREGION(v10);
    *((_QWORD *)*this + 148) = 0LL;
    v5 = *this;
  }
  v11 = (REGION *)*((_QWORD *)v5 + 149);
  if ( v11 )
  {
    REGION::vDeleteREGION(v11);
    *((_QWORD *)*this + 149) = 0LL;
    v5 = *this;
  }
  v12 = (struct PDEV *)*((_QWORD *)v5 + 7);
  v16 = v12;
  XDCOBJ::bDeleteDC(this, a2);
  PDEVOBJ::vUnreferencePdev(&v15, a2 != 0, v13);
  if ( v12 )
    PDEVOBJ::vUnreferencePdev(&v16, a2 != 0, v14);
}
