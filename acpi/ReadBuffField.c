__int64 __fastcall ReadBuffField(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v5; // esi
  unsigned int v7; // ecx
  unsigned int v9; // ebx

  v5 = 0;
  v7 = (a3[3] & 0xF) - 1;
  v9 = 1;
  if ( v7 <= 3 )
    v9 = 1 << v7;
  if ( *a3 + v9 > *(_DWORD *)(a2 + 8) )
  {
    LogError(-1072431100);
    AcpiDiagTraceAmlError(a1, -1072431100);
    PrintDebugMessage(160, (const void *)*a3, (const void *)*(unsigned int *)(a2 + 8), (const void *)v9, 0LL);
    return (unsigned int)-1072431100;
  }
  else
  {
    *a4 = ReadSystemMem(*(_QWORD *)a2 + *a3, v9, (((1LL << a3[2]) & -(__int64)(a3[2] < 0x40)) - 1) << a3[1]);
  }
  return v5;
}
