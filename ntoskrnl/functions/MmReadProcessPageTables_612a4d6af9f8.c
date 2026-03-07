__int64 __fastcall MmReadProcessPageTables(__int64 a1)
{
  unsigned __int64 ValidPte; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v5; // r14d
  volatile __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v19; // [rsp+68h] [rbp+10h]

  ValidPte = MiMakeValidPte(0LL, 0LL, -1610612732);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = ValidPte;
  __wbinvd();
  result = ExTryAcquireSpinLockSharedAtDpcLevel(&dword_140C6B1A0);
  v5 = 0;
  if ( (_DWORD)result )
  {
    v6 = (volatile __int64 *)*((_QWORD *)CurrentPrcb->MmInternal + 1578);
    v7 = _InterlockedExchange64(v6, ZeroPte);
    KeFlushSingleCurrentTb((__int64)((_QWORD)v6 << 25) >> 16, 0);
    v8 = MmPhysicalMemoryBlock;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      while ( 1 )
      {
        v9 = v8[2 * v5 + 2];
        v10 = 48 * v9 - 0x220000000000LL;
        v19 = 48 * (v9 + v8[2 * v5 + 3]) - 0x220000000000LL;
        if ( v10 < v19 )
          break;
LABEL_17:
        v8 = MmPhysicalMemoryBlock;
        if ( ++v5 >= *(_DWORD *)MmPhysicalMemoryBlock )
          goto LABEL_18;
      }
      while ( 1 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 7) == 6 )
        {
          v11 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
          if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v12 = (__int64)(v11 << 25) >> 16;
            if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v13 = *(_QWORD *)(v10 + 40);
              if ( ((v13 >> 60) & 7) != 1
                && (v13 & 0x10000000000LL) == 0
                && (v13 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL
                && (*(_BYTE *)(v10 + 34) & 0xC0) == 0x40 )
              {
                v3 ^= (v3 ^ (0xAAAAAAAAAAAAB000uLL * ((__int64)(v10 + 0x220000000000LL) >> 4))) & 0xFFFFFFFFFF000LL;
                _InterlockedExchange64(v6, v3);
                KeFlushSingleCurrentTb((__int64)((_QWORD)v6 << 25) >> 16, 0);
                v14 = (__int64)((_QWORD)v6 << 25) >> 16;
                v15 = 64LL;
                do
                {
                  v14 += 64LL;
                  --v15;
                }
                while ( v15 );
                v16 = KiCacheErrataMonitor;
                v17 = CurrentPrcb->Number + 39LL;
                CurrentPrcb->ClockKeepAlive = 1;
                _InterlockedExchange64((volatile __int64 *)(v16 + 16 * v17), -1LL);
                if ( (*(_QWORD *)(v16 + 16 * (*(unsigned int *)(a1 + 36) + 39LL)) & CurrentPrcb->GroupSetMember) != 0 )
                  break;
              }
            }
          }
        }
        v10 += 48LL;
        if ( v10 >= v19 )
          goto LABEL_17;
      }
    }
LABEL_18:
    _InterlockedExchange64(v6, v7);
    KeFlushSingleCurrentTb((__int64)((_QWORD)v6 << 25) >> 16, 0);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C6B1A0);
    return 1LL;
  }
  return result;
}
