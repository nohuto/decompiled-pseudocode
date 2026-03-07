__int64 __fastcall PnpWatchdogTimerAllocate(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 Timer; // rax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8

  v1 = 0LL;
  if ( !a1
    || (v3 = *(_DWORD *)(a1 + 24)) == 0
    || !*(_QWORD *)(a1 + 8) && !*(_QWORD *)(a1 + 16)
    || (v4 = *(_DWORD *)(a1 + 28)) != 0 && (!*(_QWORD *)(a1 + 32) || v4 <= v3) )
  {
    __fastfail(5u);
  }
  Timer = WdtpAllocateTimer(*(_QWORD *)a1);
  if ( Timer )
  {
    v6 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(Timer + 8) = *(_OWORD *)a1;
    v7 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)(Timer + 24) = v6;
    *(_QWORD *)(Timer + 40) = v7;
    if ( *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(Timer + 80) = Timer;
      *(_QWORD *)(Timer + 72) = WdtpBarkWorkerThread;
      *(_QWORD *)(Timer + 56) = 0LL;
    }
    return Timer;
  }
  return v1;
}
