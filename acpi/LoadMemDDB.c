__int64 __fastcall LoadMemDDB(_QWORD *a1, const char *a2, __int64 a3)
{
  int v6; // eax
  const void *v7; // rbp
  unsigned int v8; // ebx

  if ( ghValidateTable && (v6 = ghValidateTable(a2, qword_1C0070290), (v7 = (const void *)v6) != 0LL) )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError((__int64)a1, -1072431079);
    PrintDebugMessage(81, v7, 0LL, 0LL, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB(a1, a2, a1[10], a3);
  }
  return v8;
}
