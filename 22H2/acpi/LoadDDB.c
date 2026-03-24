/*
 * XREFs of LoadDDB @ 0x1C002372C
 * Callers:
 *     LoadMemDDB @ 0x1C0024D60 (LoadMemDDB.c)
 *     LoadFieldUnitDDB @ 0x1C0066D9C (LoadFieldUnitDDB.c)
 *     LoadTable @ 0x1C00695C0 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C00BE388 (AMLILoadDDB.c)
 * Callees:
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     RtlStringCchCopyNA @ 0x1C00288C8 (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     FreeContext @ 0x1C0068074 (FreeContext.c)
 */

__int64 __fastcall LoadDDB(struct _SLIST_ENTRY *Entry, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  char pszSrc[8]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)pszSrc = 0LL;
  if ( gdwfAMLIInit >= 0 && !strncmp((const char *)(a2 + 28), "MSFT", 4uLL) && *(_DWORD *)(a2 + 32) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(3222536217LL);
    AcpiDiagTraceAmlError(Entry, 3222536217LL);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_1C0082B90, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, (unsigned int)byte_1C0082B90, a2, 0, 0LL);
    goto LABEL_8;
  }
  v8 = PushFrame(Entry, 1179927628, 0x40u, (__int64)ParseLoad, (__int64 *)pszSrc);
  if ( v8 )
  {
LABEL_8:
    *((_QWORD *)&Entry[5].Next + 1) = 0LL;
    FreeContext(Entry);
    return v8;
  }
  v9 = *(_QWORD *)pszSrc;
  *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
  *(_QWORD *)(v9 + 48) = a4;
  *(_QWORD *)(v9 + 56) = a2;
  return v8;
}
