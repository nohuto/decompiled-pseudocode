LONG __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  int v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+34h] [rbp-24h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  int *v9; // [rsp+48h] [rbp-10h]

  v6 = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 272), (PVOID)0x77466F50, &Src, 1u, 0x20u);
  if ( result >= 0 )
  {
    v6 = 0;
    v8 = 0LL;
    v5 = 0;
    v7 = *((_QWORD *)&PopFxPlatformInterface + 1);
    v9 = a2;
    ((void (__fastcall *)(int *))PopFxPlatformInterface)(&v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 276), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 280), 0, 0);
  }
  return result;
}
