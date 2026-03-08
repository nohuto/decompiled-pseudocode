/*
 * XREFs of ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C023A428
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0235884 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C023783C (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C0237D28 (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0238AD8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C023A830 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::SetContactRestingState(CPTPEngine *this, struct CContactState *a2, int a3)
{
  int v3; // r9d
  int v4; // r8d

  v3 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 && -__CFSHR__(v3, 8) != a3 )
  {
    v4 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)((_BYTE)a3 << 7)) & 0x80;
    *(_DWORD *)a2 = v4;
    if ( (v4 & 0x80u) == 0 )
    {
      *((_DWORD *)a2 + 1) |= 3u;
      ++*((_DWORD *)this + 907);
      --*((_DWORD *)this + 906);
    }
    else
    {
      ++*((_DWORD *)this + 906);
      --*((_DWORD *)this + 907);
    }
  }
}
