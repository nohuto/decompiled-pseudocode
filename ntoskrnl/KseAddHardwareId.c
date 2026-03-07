__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v1; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rsi
  char *Paged; // rax
  int v6; // edi
  __int64 v8; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]

  v1 = (volatile signed __int64 *)qword_140C64A00;
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( dword_140C649B4 != 2 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073741823;
    KsepHistoryErrors[2 * v8] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0LL, (__int64)"KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)&v10 + 8), SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  v4 = (char *)KsepCacheLookup(v1, v9);
  if ( !v4 )
  {
    Paged = (char *)KsepPoolAllocatePaged(0x38uLL);
    v4 = Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 40, SourceString) < 0 )
    {
      v6 = -1073741801;
      goto LABEL_8;
    }
    KsepCacheInsert((__int64)v1, (__int64)v4);
  }
  v6 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  if ( v6 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree(v4 + 40);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v6;
}
