/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C00106AC
 * Callers:
 *     NVMePowerActive @ 0x1C00030C0 (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C0010324 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 1892) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 96);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 92);
    if ( v2 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1890) )
      {
        if ( *(_BYTE *)(a1 + 1889) <= 2u )
          return v1;
        v2 = *(_DWORD *)(a1 + 1916);
      }
      else
      {
        v2 = *(_DWORD *)(a1 + 1908);
      }
    }
  }
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1880) |= 0x20u;
    return (unsigned int)StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1920), NVMeFStateIdleTimerCallback);
  }
  return v1;
}
