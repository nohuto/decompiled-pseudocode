__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 a2)
{
  __int64 *v4; // rcx
  __int64 *NextProcess; // rax
  __int64 *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
