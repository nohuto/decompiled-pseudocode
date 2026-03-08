/*
 * XREFs of ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0059FA0
 * Callers:
 *     ??1DXGVAILGUESTOBJECT@@IEAA@XZ @ 0x1C0059D2C (--1DXGVAILGUESTOBJECT@@IEAA@XZ.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C035D3CC (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035CF08 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILGUESTOBJECT::SetVmBusChannel(DXGVAILGUESTOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
  if ( v4 )
    DestroyVmBusChannel(v4);
  *((_QWORD *)this + 9) = a2;
}
