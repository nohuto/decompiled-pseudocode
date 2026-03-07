__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  *((_DWORD *)this + 984) |= 0x80000000;
  *((_DWORD *)this + 911) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  return 0LL;
}
