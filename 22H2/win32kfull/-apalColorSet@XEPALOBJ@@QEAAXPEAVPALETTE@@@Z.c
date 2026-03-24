/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0276260
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C02756F4 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v5 != v2 )
    DEC_SHARE_REF_CNT(v5, a2);
  INC_SHARE_REF_CNT(a2);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *((_DWORD *)a2 + 7);
  *(_QWORD *)(*(_QWORD *)this + 112LL) = *((_QWORD *)a2 + 14);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a2;
}
