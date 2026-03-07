void *__fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  void *result; // rax
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  bool v7; // zf
  void *v8; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v9[68]; // [rsp+40h] [rbp-C0h] BYREF

  result = memset(&v9[2], 0, 0x100uLL);
  v5 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v5 )
  {
    v9[0] = 2097153;
    memset(&v9[1], 0, 0x104uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v9);
    KiSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, (char *)v9, v9, HIWORD(v9[0]));
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v9, KeGetPcr()->Prcb.Number);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v9) )
      KeGenericProcessorCallback(v9, (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop, 0LL, 0);
    v6 = _InterlockedExchangeAdd64(a1 + 1, v5);
    v7 = v5 + v6 == 0;
    result = (void *)(v5 + v6);
    v8 = result;
    if ( !v7 )
    {
      do
      {
        ExBlockOnAddressPushLock((__int64)(a1 + 2), (_QWORD *)a1 + 1, &v8, 8uLL, 0LL);
        result = (void *)*((_QWORD *)a1 + 1);
        v8 = result;
      }
      while ( result );
    }
  }
  return result;
}
