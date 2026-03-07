__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+58h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-11h] BYREF
  __int128 v15; // [rsp+88h] [rbp+7h]
  __int128 v16; // [rsp+98h] [rbp+17h]
  __int128 v17; // [rsp+A8h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+37h]

  if ( a1 && a3 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2;
    if ( a2 >= *(_DWORD *)(v5 + 40) )
    {
      WdLogSingleEntry2(3LL, a2, -1073741811LL);
      return 3221225485LL;
    }
    else
    {
      _mm_lfence();
      LODWORD(v15) = 0;
      HIDWORD(v15) = 0;
      HIDWORD(v16) = 0;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
      v7 = *(_QWORD *)(v5 + 8 * v6 + 3200);
      memset(&v13, 0, sizeof(v13));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1736), &v13);
      DWORD1(v15) = *(_DWORD *)(a1 + 4 * v6 + 508);
      DWORD2(v15) = *(_DWORD *)(a1 + 8 * v6 + 576);
      *(_QWORD *)&v16 = *(_QWORD *)(a1 + 8 * v6 + 704);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v13);
      DWORD2(v16) = *(_DWORD *)(v7 + 44192);
      *(_QWORD *)&v17 = *(_QWORD *)(v7 + 44208);
      HIDWORD(v17) = *(_DWORD *)(v7 + 44200);
      v18 = *(_QWORD *)(v7 + 44216);
      v8 = *(int *)(*(_QWORD *)(v5 + 8 * v6 + 3200) + 188LL);
      if ( (int)v8 > -1 && (v12 = *(_QWORD *)(v5 + 3328) + 160 * v8) != 0 )
        DWORD2(v17) = *(_DWORD *)(v12 + 100);
      else
        DWORD2(v17) = 0;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = 0LL;
      v10 = v16;
      *(_OWORD *)a3 = v15;
      v11 = v17;
      *(_OWORD *)(a3 + 16) = v10;
      *(_QWORD *)&v10 = v18;
      *(_OWORD *)(a3 + 32) = v11;
      *(_QWORD *)(a3 + 48) = v10;
    }
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
    return 3221225485LL;
  }
  return result;
}
