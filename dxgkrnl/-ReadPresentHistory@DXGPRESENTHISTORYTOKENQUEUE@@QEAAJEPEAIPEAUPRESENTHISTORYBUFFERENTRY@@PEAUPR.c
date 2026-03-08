/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0018634
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C01DE730 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  unsigned int v5; // ebp
  __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // ebx
  unsigned int v23; // eax
  int v24; // edx
  int v25; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF

  v5 = 0;
  if ( a3 && a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      WdLogSingleEntry1(1LL, 237LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v15,
            0,
            2,
            -1,
            (__int64)L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
            237LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      WdLogSingleEntry1(1LL, 238LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v17,
            v16,
            v18,
            0,
            2,
            -1,
            (__int64)L"m_PresentHistoryTail < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
            238LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_DWORD *)this + 4) >= 0x800u )
    {
      WdLogSingleEntry1(1LL, 239LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v20,
            v19,
            v21,
            0,
            2,
            -1,
            (__int64)L"m_PresentHistoryRead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
            239LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    v8 = *((unsigned int *)this + 4);
    v9 = *((_DWORD *)this + 2);
    v10 = *a3;
    if ( v9 < (unsigned int)v8 )
    {
      v22 = 2048 - v8;
      v5 = *((_DWORD *)this + 2);
      if ( 2048 - (int)v8 >= v10 )
        v22 = *a3;
      v23 = v10 - v22;
      if ( v9 >= v23 )
        v5 = v23;
      v11 = v22;
    }
    else
    {
      v11 = v9 - v8;
      if ( v11 >= v10 )
        v11 = *a3;
    }
    memmove(a4, &this[v8 + 10], 8LL * v11);
    memmove(a5, (char *)this + v8 + 16464, v11);
    memmove((char *)a4 + 8 * v11, this + 10, 8LL * v5);
    memmove((char *)a5 + v11, this + 2058, v5);
    *((_DWORD *)this + 4) = ((_WORD)v11 + (_WORD)v8 + (_WORD)v5) & 0x7FF;
    *a3 = v11 + v5;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
        v24,
        v25,
        0,
        0,
        -1,
        (__int64)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
}
