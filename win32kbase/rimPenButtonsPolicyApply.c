/*
 * XREFs of rimPenButtonsPolicyApply @ 0x1C01D8ECC
 * Callers:
 *     rimFinalizePointerFlags @ 0x1C01D8470 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1268);
  *(_DWORD *)(a2 + 2528) &= 0xFFFFFFF9;
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 1036) <= 1u )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1276);
    *(_WORD *)(a2 + 2424) = *(_WORD *)(*(_QWORD *)(a1 + 1024) + 16LL);
    v5 = *(_DWORD *)(a2 + 2528) | 2;
    *(_DWORD *)(a2 + 2528) = v5;
    result = *(unsigned int *)(a2 + 2444);
    if ( (result & 4) != 0 )
      *(_DWORD *)(a2 + 2528) = v5 | 4;
  }
  v6 = *(_DWORD *)(a2 + 2444);
  if ( (v6 & 4) != 0 )
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (result & 0x10) != 0 )
      *(_DWORD *)(a2 + 2444) = v6 & 0xFFFFFFCF | 0x20;
  }
  return result;
}
