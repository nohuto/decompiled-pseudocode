void __fastcall CTouchProcessor::~CTouchProcessor(PVOID *this)
{
  *this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
  CInpLockGuard::Uninitialize(this + 4);
  *this = &CBaseProcessor::`vftable';
}
