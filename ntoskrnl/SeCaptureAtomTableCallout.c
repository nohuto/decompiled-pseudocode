LONG_PTR SeCaptureAtomTableCallout()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  signed __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v1 = PsReferenceEffectiveToken(
         (_DWORD)CurrentThread,
         1953654867,
         (unsigned int)&v7,
         (unsigned int)&v5,
         (__int64)&v6,
         0LL);
  v2 = (_QWORD *)v1;
  if ( (*(_DWORD *)(v1 + 200) & 0x4000) != 0 && !*(_QWORD *)(*(_QWORD *)(v1 + 1080) + 48LL) )
  {
    v4 = CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[16];
    if ( !v4 || (*(_DWORD *)(v4 + 544) & 0x20) == 0 )
    {
      PsInvokeWin32Callout(2LL, &v8, 0LL, 0LL);
      if ( v8 && !_InterlockedCompareExchange64((volatile signed __int64 *)(v2[135] + 48LL), v8, 0LL) )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 4));
    }
  }
  return ObfDereferenceObjectWithTag(v2, 0x74726853u);
}
