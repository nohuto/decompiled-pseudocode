char __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  void *FirstVad; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int64 NextVad; // r14
  ULONG_PTR v13; // rbp

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
    FirstVad = MiGetFirstVad(a1);
  else
    FirstVad = MiLocateAddress(a2);
  v9 = (unsigned __int64)FirstVad;
  if ( a3 )
  {
    while ( 1 )
    {
      NextVad = MiGetNextVad(v9);
      if ( a3 == 1 )
        break;
      v13 = v10 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
      KeAbPostRelease(v13);
      v9 = NextVad;
      if ( !--a3 )
        goto LABEL_6;
    }
    MiUnlockVad((__int64)CurrentThread, v10);
  }
LABEL_6:
  if ( a4 )
    return UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  else
    return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
