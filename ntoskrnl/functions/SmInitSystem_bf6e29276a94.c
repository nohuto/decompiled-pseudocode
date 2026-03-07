__int64 __fastcall SmInitSystem(int a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *((_QWORD *)PspSystemPartition + 3);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_140C6AFA0) >= 0 )
      {
        dword_140C6AFA8 |= 1u;
        dword_140C6AFAC = 64;
      }
    }
    else if ( a1 == 2 && (*(_DWORD *)(v2 + 2064) & 3) != 0 )
    {
      SmpSystemStoreCreate(*((_QWORD *)PspSystemPartition + 3));
    }
    goto LABEL_6;
  }
  memset(&SmGlobals, 0, 0x50uLL);
  qword_140C6AF98 = 0LL;
  qword_140C6AF90 = (__int64)&qword_140C6AF88;
  qword_140C6AF88 = (__int64)&qword_140C6AF88;
  SmKmGlobals = PsInitialSystemProcess;
  dword_140C6AFC4 = 4;
  result = SmGlobalsStart(&SmGlobals);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v2 + 2064) = SmGlobals;
LABEL_6:
    dword_140C6AFC0 = a1 + 1;
    return 0LL;
  }
  return result;
}
