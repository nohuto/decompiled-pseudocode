void *__fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 NextJob; // rax
  void *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = (void *)NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (*(_DWORD *)(NextJob + 1536) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
