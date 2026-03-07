__int64 __fastcall CDisplayManager::Initialize(CDisplayManager *this)
{
  int updated; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  updated = CDisplayManager::UpdateDXGIFactory(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, updated, 0x1Cu, 0LL);
  return v3;
}
