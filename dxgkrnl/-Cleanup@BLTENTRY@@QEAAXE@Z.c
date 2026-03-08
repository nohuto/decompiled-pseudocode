/*
 * XREFs of ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1C03CC3E4
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03CE0B0 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1C02D24A4 (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C03CEE38 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1C03CEE84 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 */

void __fastcall BLTENTRY::Cleanup(struct _EX_RUNDOWN_REF **this, char a2)
{
  if ( a2 )
  {
    if ( this[5] )
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)this);
    if ( this[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)this, 0);
  }
  DXGALLOCATIONREFERENCE::AssignNull(this + 4);
}
