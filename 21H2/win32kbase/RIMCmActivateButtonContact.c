/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C017F948
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C017C5EC (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmGetButtonContact @ 0x1C018039C (RIMCmGetButtonContact.c)
 */

__int64 __fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 ButtonContact; // rdi
  unsigned int v3; // eax
  _QWORD *v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  ButtonContact = RIMCmGetButtonContact(a1);
  if ( (*(_DWORD *)(ButtonContact + 32) & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 408);
  if ( *(_DWORD *)(ButtonContact + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 409);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  v3 = *(_DWORD *)(a1 + 952);
  if ( v3 >= *(_DWORD *)(a1 + 720) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 414);
    v3 = *(_DWORD *)(a1 + 952);
  }
  ++*(_DWORD *)(a1 + 956);
  *(_DWORD *)(a1 + 952) = v3 + 1;
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  v4 = (_QWORD *)(ButtonContact + 16);
  *v4 = 0LL;
  v5 = *(__int64 **)(a1 + 936);
  v6 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *v4 = v6;
  v4[1] = v5;
  *(_QWORD *)(v6 + 8) = v4;
  *v5 = (__int64)v4;
  result = *(unsigned int *)(a1 + 956);
  if ( *(_DWORD *)(a1 + 952) < (unsigned int)result )
    return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 425);
  return result;
}
