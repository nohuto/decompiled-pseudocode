__int64 PopNetCheckAdaptiveCsState()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !PopNetBIRequestActive && dword_140C3D4D8 == 2 )
    return PopIsRemoteDesktopEnabled() == 0;
  return v0;
}
