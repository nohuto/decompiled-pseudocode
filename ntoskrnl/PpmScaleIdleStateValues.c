/*
 * XREFs of PpmScaleIdleStateValues @ 0x1402ED878
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 *     PpmResetIdlePolicy @ 0x14039AFC8 (PpmResetIdlePolicy.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x140456E50 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x140544954 (HvlRegisterLogicalProcessorFrequency.c)
 */

void __fastcall PpmScaleIdleStateValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int LpIndexFromProcessorIndex; // eax

  if ( *(_BYTE *)(a1 + 68) )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 368);
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 516);
        if ( *(_DWORD *)(v2 + 72) < v4 )
          LOBYTE(v4) = *(_BYTE *)(v2 + 72);
        v5 = (unsigned __int8)v4;
        v6 = *(unsigned __int8 *)(a1 + 67);
        *(_BYTE *)(a1 + 64) = (unsigned __int8)v4
                            * (unsigned __int8)v4
                            * (unsigned int)*(unsigned __int8 *)(a1 + 66)
                            / 0x2710;
        *(_BYTE *)(a1 + 65) = (unsigned __int8)v4 * (unsigned int)(unsigned __int8)v4 * v6 / 0x2710;
        if ( *(_DWORD *)(a1 + 224) == 3 )
        {
          LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(unsigned int *)(a1 - 33564));
          HvlRegisterLogicalProcessorFrequency(LpIndexFromProcessorIndex, v5);
        }
      }
    }
  }
}
