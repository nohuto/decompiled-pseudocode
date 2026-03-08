/*
 * XREFs of ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1C030CE4C
 * Callers:
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0049A68 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DISPLAY_CALLOUT_ENTRY::~DISPLAY_CALLOUT_ENTRY(DISPLAY_CALLOUT_ENTRY *this)
{
  if ( *((_BYTE *)this + 21) )
    _InterlockedDecrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 478);
}
