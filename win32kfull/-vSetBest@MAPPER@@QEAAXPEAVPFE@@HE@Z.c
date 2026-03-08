/*
 * XREFs of ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C014DEE0
 * Callers:
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C014DD80 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029D774 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MAPPER::vSetBest(MAPPER *this, struct PFE *a2, int a3, unsigned __int8 a4)
{
  int v4; // eax

  **((_DWORD **)this + 27) = *((_DWORD *)this + 47);
  **((_QWORD **)this + 28) = *((_QWORD *)this + 24);
  **((_DWORD **)this + 29) = **((_DWORD **)this + 29) & 0xFFFFFF | (a4 << 24);
  *((_QWORD *)this + 25) = a2;
  if ( a3 )
  {
    *((_DWORD *)this + 63) |= 0x1000000u;
  }
  else
  {
    v4 = *((_DWORD *)a2 + 20);
    *((_DWORD *)this + 63) &= ~0x1000000u;
    *((_DWORD *)this + 52) = v4;
  }
}
