__int64 __fastcall CComposition::ResetTokenThread(CComposition *this)
{
  unsigned int v1; // ebx
  CSurfaceManager *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx

  v1 = 0;
  v2 = (CSurfaceManager *)*((_QWORD *)g_pComposition + 28);
  if ( v2 )
  {
    v3 = CSurfaceManager::ResetTokenThread(v2);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x2D5u, 0LL);
  }
  return v1;
}
