/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C02386D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C023A63C (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  *((_DWORD *)this + 984) |= 0x80000000;
  *((_DWORD *)this + 911) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  return 0LL;
}
