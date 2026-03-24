/*
 * XREFs of ??1EngModeState@@QEAA@XZ @ 0x1C016B1E4
 * Callers:
 *     W32kCddClipRegion @ 0x1C0278210 (W32kCddClipRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall EngModeState::~EngModeState(EngModeState *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 328LL) &= ~0x20u;
}
