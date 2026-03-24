/*
 * XREFs of CTouchpadAcceleration_CreateInstance @ 0x1C00B6860
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall CTouchpadAcceleration_CreateInstance(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  if ( qword_1C02460B0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 715LL);
  v2 = Win32AllocPool(104LL, 0x64416363u);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_BYTE *)(v2 + 8) = 0;
  memset((void *)(v2 + 16), 0, 0x50uLL);
  *(_DWORD *)(v3 + 96) = a1;
  *(_QWORD *)v3 = &CTouchpadAcceleration::`vftable';
  return v3;
}
