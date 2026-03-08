/*
 * XREFs of ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C023A51C
 * Callers:
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238A3C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C023ACE0 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::SetupDragRectsForContact(CPTPEngine *this, struct CContactState *a2)
{
  int v2; // r9d
  int v3; // r8d

  v2 = *((_DWORD *)a2 + 5);
  *((_DWORD *)a2 + 60) = v2 - *((_DWORD *)this + 65);
  *((_DWORD *)a2 + 62) = v2 + *((_DWORD *)this + 66);
  v3 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 59) = v3 - *((_DWORD *)this + 63);
  *((_DWORD *)a2 + 61) = v3 + *((_DWORD *)this + 64);
  *((_DWORD *)a2 + 64) = v2 - *((_DWORD *)this + 70);
  *((_DWORD *)a2 + 66) = v2 + *((_DWORD *)this + 71);
  *((_DWORD *)a2 + 63) = v3 - *((_DWORD *)this + 68);
  *((_DWORD *)a2 + 65) = v3 + *((_DWORD *)this + 69);
  *((_DWORD *)a2 + 68) = v2 - *((_DWORD *)this + 108);
  *((_DWORD *)a2 + 70) = v2 + *((_DWORD *)this + 108);
  *((_DWORD *)a2 + 67) = v3 - *((_DWORD *)this + 107);
  *((_DWORD *)a2 + 69) = v3 + *((_DWORD *)this + 107);
  *((_DWORD *)a2 + 72) = v2 - *((_DWORD *)this + 75);
  *((_DWORD *)a2 + 74) = v2 + *((_DWORD *)this + 76);
  *((_DWORD *)a2 + 71) = v3 - *((_DWORD *)this + 73);
  *((_DWORD *)a2 + 73) = v3 + *((_DWORD *)this + 74);
}
