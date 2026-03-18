/*
 * XREFs of ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C005ABC0
 * Callers:
 *     ??1DXGVAILGUESTOBJECT@@IEAA@XZ @ 0x1C005A94C (--1DXGVAILGUESTOBJECT@@IEAA@XZ.c)
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C0361E5C (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0361998 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILGUESTOBJECT::SetVmBusChannel(DXGVAILGUESTOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 9);
  if ( v4 )
    DestroyVmBusChannel(v4);
  *((_QWORD *)this + 9) = a2;
}
