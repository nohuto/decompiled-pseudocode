/*
 * XREFs of WheapSaveRecordForLiveDump @ 0x140AA8934
 * Callers:
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AA8884 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapSaveRecordForLiveDump(__int64 a1)
{
  size_t v1; // rsi
  unsigned int v3; // edi
  __int64 Pool2; // rbx
  __int64 *v5; // rax

  v1 = *(unsigned int *)(a1 + 60);
  if ( (int)v1 + 32 < (unsigned int)v1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    Pool2 = ExAllocatePool2(66LL, (unsigned int)(v1 + 32), 1634035799LL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
      *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
      memmove((void *)(Pool2 + 32), (const void *)(a1 + 40), v1);
      ExAcquireFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
      v5 = *(__int64 **)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels;
      if ( **(struct _DEVICE_OBJECT ***)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink )
        __fastfail(3u);
      *(_QWORD *)Pool2 = &WheapDispatchPtr.Queue.ListEntry.Blink;
      *(_QWORD *)(Pool2 + 8) = v5;
      *v5 = Pool2;
      *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = Pool2;
      ExReleaseFastMutex((PFAST_MUTEX)&WheapDispatchPtr.AttachedDevice);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
