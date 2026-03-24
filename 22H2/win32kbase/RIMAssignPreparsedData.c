/*
 * XREFs of RIMAssignPreparsedData @ 0x1C015BA1C
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C015F348 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall RIMAssignPreparsedData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  void *v7; // rax

  v5 = -1073741801;
  if ( *(_QWORD *)(a3 + 880) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2785);
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2786);
  v6 = *(_DWORD *)(a1 + 104);
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2787);
    v6 = *(_DWORD *)(a1 + 104);
  }
  v7 = Win32AllocPoolZInit(v6, 1668313938LL);
  *(_QWORD *)(a3 + 880) = v7;
  if ( v7 )
  {
    memmove(v7, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 104));
    return 0;
  }
  return v5;
}
