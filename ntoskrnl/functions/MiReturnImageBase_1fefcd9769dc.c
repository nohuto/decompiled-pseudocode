char __fastcall MiReturnImageBase(__int64 a1)
{
  $C71981A45BEB2B45F82C232A7085991E *v1; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // r14
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = ($C71981A45BEB2B45F82C232A7085991E *)&retaddr;
  v12 = 0LL;
  v2 = *(_QWORD *)a1;
  v10 = 0LL;
  if ( v2 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 13) )
        LOBYTE(v1) = MiReturnSystemImageAddress((v2 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v10, &v12, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v12 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = KeAbPreAcquire((__int64)&qword_140C653C0, 0LL);
      v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C653C0, 0LL);
      v7 = v5;
      if ( v6 )
        ExfAcquirePushLockExclusiveEx(&qword_140C653C0, v5, (__int64)&qword_140C653C0);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      if ( *((_QWORD *)&v10 + 1) )
        RtlClearBitsEx(*((__int64 *)&v10 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v10, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C653C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C653C0);
      LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C653C0);
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        v1 = &CurrentThread->152;
        if ( ($C71981A45BEB2B45F82C232A7085991E *)v1->ApcState.ApcListHead[0].Flink != v1 )
          LOBYTE(v1) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v1;
}
