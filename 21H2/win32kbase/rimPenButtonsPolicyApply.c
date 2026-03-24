/*
 * XREFs of rimPenButtonsPolicyApply @ 0x1C017BCC8
 * Callers:
 *     rimFinalizePointerFlags @ 0x1C017B4A4 (rimFinalizePointerFlags.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimPenButtonsPolicyApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1249);
  *(_DWORD *)(a2 + 2504) &= 0xFFFFFFF9;
  result = *(unsigned int *)(a2 + 32);
  if ( (result & 0x20) != 0 )
  {
    if ( *(_DWORD *)(a1 + 980) <= 1u )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1257);
    *(_WORD *)(a2 + 2400) = *(_WORD *)(*(_QWORD *)(a1 + 968) + 16LL);
    v5 = *(_DWORD *)(a2 + 2504) | 2;
    *(_DWORD *)(a2 + 2504) = v5;
    result = *(unsigned int *)(a2 + 2420);
    if ( (result & 4) != 0 )
      *(_DWORD *)(a2 + 2504) = v5 | 4;
  }
  v6 = *(_DWORD *)(a2 + 2420);
  if ( (v6 & 4) != 0 )
  {
    result = *(unsigned int *)(a2 + 32);
    if ( (result & 0x10) != 0 )
      *(_DWORD *)(a2 + 2420) = v6 & 0xFFFFFFCF | 0x20;
  }
  return result;
}
