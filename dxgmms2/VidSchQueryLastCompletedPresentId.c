__int64 __fastcall VidSchQueryLastCompletedPresentId(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 && a3 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2;
    if ( a2 < *(_DWORD *)(v5 + 40) )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1736), &LockHandle);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v6 + 508);
      v7 = *(_DWORD *)(a1 + 8 * v6 + 576);
      *(_DWORD *)(a3 + 8) = v7;
      *(_DWORD *)(a3 + 4) = v7;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 8 * v6 + 704);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 8 * v6 + 832);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
