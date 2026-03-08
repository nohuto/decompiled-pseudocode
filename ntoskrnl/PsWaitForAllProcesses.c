/*
 * XREFs of PsWaitForAllProcesses @ 0x1409B099C
 * Callers:
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 */

char PsWaitForAllProcesses()
{
  unsigned int v0; // esi
  __int64 *i; // rcx
  int v2; // ecx
  __int64 *NextProcess; // rax
  __int64 *v4; // rdi
  NTSTATUS v6; // ebx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  Timeout.QuadPart = -100000LL;
  while ( 1 )
  {
    for ( i = 0LL; ; i = NextProcess )
    {
      NextProcess = PsGetNextProcess(i);
      v4 = NextProcess;
      if ( !NextProcess )
        return 1;
      v2 = *((_DWORD *)NextProcess + 543);
      if ( (v2 & 0x1000) == 0
        && NextProcess != PsIdleProcess
        && (*((_DWORD *)NextProcess + 281) & 4) != 0
        && (v2 & 0x40000000) == 0
        && NextProcess[174] )
      {
        break;
      }
    }
    ObfReferenceObjectWithTag(NextProcess, 0x65547350u);
    ObfDereferenceObjectWithTag(v4, 0x6E457350u);
    v6 = KeWaitForSingleObject(v4, Executive, 0, 0, &Timeout);
    ObfDereferenceObjectWithTag(v4, 0x65547350u);
    if ( v6 == 258 )
    {
      ++v0;
      Timeout.QuadPart *= 2LL;
      if ( v0 > 0xD )
        break;
    }
  }
  return 0;
}
