/*
 * XREFs of LoadDDB @ 0x1C004FA40
 * Callers:
 *     LoadFieldUnitDDB @ 0x1C004FB68 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004FD4C (LoadMemDDB.c)
 *     LoadTable @ 0x1C0056E80 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C00AB124 (AMLILoadDDB.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C002BADC (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     FreeContext @ 0x1C0053624 (FreeContext.c)
 *     PushFrame @ 0x1C0053C34 (PushFrame.c)
 */

__int64 __fastcall LoadDDB(_QWORD *Entry, const char *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v10; // rcx
  char pszSrc[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)pszSrc = 0LL;
  if ( gdwfAMLIInit >= 0 && !strncmp(a2 + 28, "MSFT", 4uLL) && *((_DWORD *)a2 + 8) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431079);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_1C006FEF8, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, byte_1C006FEF8, a2, 0LL, 0LL);
  }
  else
  {
    v8 = PushFrame((_DWORD)Entry, 1179927628, 64, (unsigned int)ParseLoad, (__int64)pszSrc);
    if ( !v8 )
    {
      v10 = *(_QWORD *)pszSrc;
      *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
      *(_QWORD *)(v10 + 48) = a4;
      *(_QWORD *)(v10 + 56) = a2;
      return v8;
    }
  }
  Entry[11] = 0LL;
  FreeContext(Entry);
  return v8;
}
