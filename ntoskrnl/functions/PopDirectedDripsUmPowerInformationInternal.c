__int64 __fastcall PopDirectedDripsUmPowerInformationInternal(
        int a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  ULONG HandleAttributes; // eax
  ULONG v6; // ett
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx

  *a4 = 0;
  *a5 = 0LL;
  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v6 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v6 != HandleAttributes );
  if ( (HandleAttributes & 1) == 0 )
    return 3221225659LL;
  v8 = a1 - 53;
  if ( !v8 )
    return PopDirectedDripsUmDirectedFxAddTestDevice(a2, a3);
  v9 = v8 - 1;
  if ( !v9 )
    return PopDirectedDripsUmDirectedFxRemoveTestDevice(a2, a3);
  v10 = v9 - 2;
  if ( !v10 )
    return PopDirectedDripsUmDirectedFxSetMode(a2, a3);
  if ( v10 == 8 )
    return PopDirectedDripsUmQueryCapabilities(a4);
  return 3221225485LL;
}
