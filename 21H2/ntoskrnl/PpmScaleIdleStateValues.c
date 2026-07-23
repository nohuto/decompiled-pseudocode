/*
 * XREFs of PpmScaleIdleStateValues @ 0x140399164
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 *     PpmResetIdlePolicy @ 0x1403C4BC8 (PpmResetIdlePolicy.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x1404F2110 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x1404F815C (HvlRegisterLogicalProcessorFrequency.c)
 */

void __fastcall PpmScaleIdleStateValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int LpIndexFromProcessorIndex; // eax

  if ( *(_BYTE *)(a1 + 60) )
  {
    v2 = *(_QWORD *)(a1 + 368);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 360);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 368);
        if ( *(_DWORD *)(v2 + 72) < v4 )
          LOBYTE(v4) = *(_BYTE *)(v2 + 72);
        v5 = (unsigned __int8)v4;
        v6 = *(unsigned __int8 *)(a1 + 59);
        *(_BYTE *)(a1 + 56) = (unsigned __int8)v4
                            * (unsigned __int8)v4
                            * (unsigned int)*(unsigned __int8 *)(a1 + 58)
                            / 0x2710;
        *(_BYTE *)(a1 + 57) = (unsigned __int8)v4 * (unsigned int)(unsigned __int8)v4 * v6 / 0x2710;
        if ( *(_DWORD *)(a1 + 216) == 3 )
        {
          LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(unsigned int *)(a1 - 32732));
          HvlRegisterLogicalProcessorFrequency(LpIndexFromProcessorIndex, v5);
        }
      }
    }
  }
}
