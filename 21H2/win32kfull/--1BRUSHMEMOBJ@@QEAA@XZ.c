/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C014E818
 * Callers:
 *     GreCreateDIBBrush @ 0x1C014E4E8 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B5CDC (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(BRUSHMEMOBJ *this)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**(_QWORD **)this, 0LL, 0LL);
    *(_QWORD *)this = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 16);
}
