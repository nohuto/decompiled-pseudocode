/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C00B5910
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsVSyncAvailable @ 0x1C00B49C0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, unsigned int a2, _DWORD *a3)
{
  int v3; // eax
  __int64 v4; // rbx

  v3 = *(_DWORD *)(a1 + 960);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 == 1 )
  {
    *a3 = 0;
  }
  else if ( v3 == 2 )
  {
    *a3 = 1;
  }
  if ( !*a3 )
    return *(unsigned int *)(v4 + 2540);
  if ( (unsigned int)(*a3 - 1) > 3 )
    return 0LL;
  if ( (*(int *)(v4 + 2544) >= 4 || *(_BYTE *)(v4 + 156)) && !VidSchIsVSyncAvailable(v4, a2) )
    return *(unsigned int *)(v4 + 2540);
  return *(unsigned int *)(v4 + 2544);
}
