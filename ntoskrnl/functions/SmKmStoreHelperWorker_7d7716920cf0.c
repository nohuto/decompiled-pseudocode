LONG __fastcall SmKmStoreHelperWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG result; // eax
  unsigned int v4; // esi
  char v5; // bl
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+50h] [rbp-28h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v4 = *(unsigned __int16 *)(a1 + 58);
    if ( v4 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v5 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v5 & 2) != 0 )
    {
      v6 = *(_OWORD *)(a1 + 80);
      v8 = *(_OWORD *)(a1 + 64);
      v7 = *(_OWORD *)(a1 + 96);
      v9 = v6;
      v10 = v7;
      if ( v4 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, &v8);
        v5 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v5 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v4, &v8);
  }
  return result;
}
