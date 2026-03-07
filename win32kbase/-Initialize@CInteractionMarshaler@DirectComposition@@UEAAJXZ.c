__int64 __fastcall DirectComposition::CInteractionMarshaler::Initialize(DirectComposition::CInteractionMarshaler *this)
{
  *((_DWORD *)this + 68) = (unsigned int)PsGetCurrentProcessId();
  return 0LL;
}
