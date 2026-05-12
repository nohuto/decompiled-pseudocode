/*
 * XREFs of TranslateResultToScsiRequestBlock @ 0x1C0042D54
 * Callers:
 *     RaidUnitReleaseIrp @ 0x1C0007844 (RaidUnitReleaseIrp.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A70 (RaidUnitCompleteRequest.c)
 * Callees:
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1C0042CB4 (McTemplateK0zx_EtwWriteTransfer.c)
 */

__int64 __fastcall TranslateResultToScsiRequestBlock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v5; // r15
  unsigned int v6; // r14d
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // rdx
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rtt
  unsigned __int64 v18; // rtt
  LARGE_INTEGER v20; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v2) = 0;
  v20.QuadPart = 1LL;
  v5 = 0;
  v6 = 0;
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( UseQPCTime )
    v7 = KeQueryPerformanceCounter(&v20);
  else
    v7.QuadPart = KeQueryUnbiasedInterruptTime();
  v8 = v7;
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 60);
  if ( *(_BYTE *)(a2 + 3) == 48 )
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 44);
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v9 = 0;
    if ( *(_DWORD *)(a2 + 56) )
    {
      while ( 1 )
      {
        v10 = *(unsigned int *)(a2 + 4LL * v9 + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v11 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v10 <= (unsigned int)v11 )
          {
            if ( *(_DWORD *)(v10 + a2) == 64 && v10 + 40 <= v11 )
            {
              v5 = 1;
              *(_BYTE *)(a1 + 4) = *(_BYTE *)((unsigned int)v10 + a2 + 8);
              *(_QWORD *)(a1 + 32) = *(_QWORD *)((unsigned int)v10 + a2 + 16);
              *(_BYTE *)(a1 + 11) = *(_BYTE *)((unsigned int)v10 + a2 + 9);
            }
            if ( v5 )
              break;
          }
        }
        if ( ++v9 >= *(_DWORD *)(a2 + 56) )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      *(_BYTE *)(a1 + 3) = 48;
      v6 = -1073741811;
      *(_DWORD *)(a1 + 64) = -1073741811;
    }
  }
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v8.QuadPart )
    v16 = PerformanceCounter.QuadPart - v8.QuadPart;
  else
    v16 = PerformanceCounter.QuadPart - v8.QuadPart - 1;
  if ( UseQPCTime )
  {
    v14 = v20;
    if ( v20.QuadPart && v16 )
    {
      v17 = 1000 * (v16 % v20.QuadPart);
      v15.QuadPart = v17 / v20.QuadPart + 1000 * (v16 / v20.QuadPart);
      v18 = 10000 * (v17 % v20.QuadPart);
      v13.QuadPart = v18 % v20.QuadPart;
      v2 = v18 / v20.QuadPart + 10000 * v15.QuadPart;
    }
  }
  else
  {
    LOBYTE(v2) = v16;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    McTemplateK0zx_EtwWriteTransfer(
      v14.QuadPart,
      v13.QuadPart,
      v15.QuadPart,
      L"Translate STORAGE_REQUEST_BLOCK result",
      v2);
  return v6;
}
