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
