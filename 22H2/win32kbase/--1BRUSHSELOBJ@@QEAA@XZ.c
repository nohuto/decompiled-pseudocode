/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001E1B4
 * Callers:
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001DCA0 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001DDE0 (GreSetBrushOwner.c)
 *     SetSysColor @ 0x1C0020850 (SetSysColor.c)
 *     GreGetBrushColor @ 0x1C013C090 (GreGetBrushColor.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002F510 (DEC_SHARE_REF_CNT.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C0082168 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
  PopThreadGuardedObject((char *)this + 16);
}
