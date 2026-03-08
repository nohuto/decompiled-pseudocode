/*
 * XREFs of PopGetEnergyEstimationInfo @ 0x1405815A4
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetEnergyEstimationInfo(_DWORD *a1)
{
  _DWORD *v1; // r9
  unsigned int v2; // r8d
  unsigned int v4; // r10d
  __int64 v5; // rcx
  char *v6; // rdx
  _DWORD *v7; // r9
  __int64 v8; // rcx

  v1 = (_DWORD *)PpmComputeEnergyData;
  v2 = 0;
  if ( PpmComputeEnergyData )
  {
    if ( (unsigned int)(16 * *(_DWORD *)PpmComputeEnergyData + 4) <= 0x24 )
    {
      *a1 = *(_DWORD *)PpmComputeEnergyData;
      v4 = 0;
      if ( *v1 )
      {
        do
        {
          v5 = (__int64)&v1[14 * v4 + 2];
          v6 = (char *)a1 + 16LL * v4 - v5;
          v7 = (_DWORD *)(v5 + 40);
          v8 = 4LL;
          do
          {
            *(_DWORD *)((char *)v7 + (_QWORD)v6 - 36) = *v7;
            ++v7;
            --v8;
          }
          while ( v8 );
          v1 = (_DWORD *)PpmComputeEnergyData;
          ++v4;
        }
        while ( v4 < *(_DWORD *)PpmComputeEnergyData );
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
