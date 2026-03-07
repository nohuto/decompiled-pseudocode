__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 *a4)
{
  int v4; // ebx
  SIZE_T v5; // rdi
  KIRQL CurrentIrql; // al

  v4 = 0;
  v5 = a3;
  if ( a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      v4 = -1072431098;
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, -1072431098);
      CurrentIrql = KeGetCurrentIrql();
      PrintDebugMessage(77, CurrentIrql, 0, 0, 0LL);
    }
    else if ( a4 )
    {
      v4 = MapPhysMem((ULONG_PTR)a2, v5, a4);
      if ( v4 < 0 )
      {
        LogError(3222536204LL);
        AcpiDiagTraceAmlError(a1, -1072431092);
        PrintDebugMessage(102, (_DWORD)a2, v5, v4, 0LL);
      }
    }
    else
    {
      MmUnmapIoSpace(a2, v5);
    }
  }
  else
  {
    v4 = -1072431089;
    LogError(3222536207LL);
    AcpiDiagTraceAmlError(a1, -1072431089);
    PrintDebugMessage(216, 0, 0, 0, 0LL);
  }
  return (unsigned int)v4;
}
