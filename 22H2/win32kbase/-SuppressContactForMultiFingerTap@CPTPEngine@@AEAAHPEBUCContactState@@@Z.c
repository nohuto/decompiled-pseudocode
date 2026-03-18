/*
 * XREFs of ?SuppressContactForMultiFingerTap@CPTPEngine@@AEAAHPEBUCContactState@@@Z @ 0x1C00E7268
 * Callers:
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C02024F0 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::SuppressContactForMultiFingerTap(CPTPEngine *this, const struct CContactState *a2)
{
  return (*(_DWORD *)a2 & 0x80u) != 0 && (*(_DWORD *)a2 & 0x2000000) != 0
      || *((_QWORD *)this + 467) > *((_QWORD *)a2 + 9);
}
