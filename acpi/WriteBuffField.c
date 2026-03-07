__int64 __fastcall WriteBuffField(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ecx
  unsigned int v8; // ebx

  v4 = 0;
  v6 = (a3[3] & 0xF) - 1;
  v8 = 1;
  if ( v6 <= 3 )
    v8 = 1 << v6;
  if ( *a3 + v8 > *(_DWORD *)(a2 + 8) )
  {
    LogError(-1072431100);
    AcpiDiagTraceAmlError(a1, -1072431100);
    PrintDebugMessage(211, (const void *)*a3, (const void *)*(unsigned int *)(a2 + 8), (const void *)v8, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    WriteSystemMem((void *)(*(_QWORD *)a2 + *a3), v8);
  }
  return v4;
}
