void __fastcall SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(__int64 a1)
{
  bool v2; // zf
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 6592) == 0;
    v3 = 20;
    Interval.QuadPart = -150000LL;
    if ( !v2 )
    {
      do
      {
        if ( !v3 )
          break;
        if ( *(_BYTE *)(a1 + 6022) < 3u )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        --v3;
      }
      while ( *(_DWORD *)(a1 + 6592) );
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 6024, 0LL);
    ++*(_DWORD *)(a1 + 6036);
    *(_DWORD *)(a1 + 6032) = 1;
  }
}
