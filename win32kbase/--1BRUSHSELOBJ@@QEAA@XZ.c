/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001BD48
 * Callers:
 *     SetSysColor @ 0x1C001A584 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001BBAC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C017E540 (GreGetBrushColor.c)
 * Callees:
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C001C078 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
  }
}
