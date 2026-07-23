/*
 * XREFs of PspReferenceCidTableEntry @ 0x14068F6C0
 * Callers:
 *     PsLookupThreadByThreadId @ 0x14068F2A0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x14068F5A0 (PspThreadFromTicket.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140353550 (ExSlowReplenishHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x1403535B0 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 */

struct _DMA_ADAPTER *__fastcall PspReferenceCidTableEntry(__int64 a1, char a2)
{
  signed __int64 *v3; // rax
  signed __int64 *v4; // rsi
  __int64 v5; // r14
  signed __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned __int128 v8; // rt0
  unsigned __int8 v9; // tt
  unsigned __int64 v10; // rax
  struct _DMA_ADAPTER *v11; // rdi
  int v13; // ebx
  bool v14; // zf
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  volatile __int64 *v19; // rcx
  unsigned __int64 v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int128 v22; // [rsp+20h] [rbp-28h]
  __int128 v23; // [rsp+30h] [rbp-18h]

  if ( (a1 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(PspCidTable, a1);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = PspCidTable;
  _m_prefetchw(v3);
  *(_QWORD *)&v22 = *v3;
  v6 = v3[1];
  *((_QWORD *)&v22 + 1) = v6;
  v7 = v22;
  if ( (v22 & 0x1FFFE) == 0 )
  {
LABEL_10:
    v13 = 0;
    if ( !ExLockHandleTableEntry(PspCidTable, v4) )
      return 0LL;
    v11 = (struct _DMA_ADAPTER *)((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v11->Version & 0x7F) == a2 )
    {
      if ( a2 == 3 )
        v14 = (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x464) & 0x400000C) == 0x4000000;
      else
        v14 = (*(_DWORD *)(((*v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x510) & 3) == 2;
      if ( v14 )
        v13 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v4);
      v15 = (unsigned int)(v13 + 1);
      _m_prefetchw(&v11[-3]);
      v16 = *(_QWORD *)&v11[-3].Version;
      if ( v16 )
      {
        while ( 1 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)&v11[-3], v15 + v16, v16);
          if ( v17 == v16 )
            break;
          if ( !v16 )
            goto LABEL_27;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((__int64)&v11[-3], 1, v15, 0x746C6644u);
LABEL_20:
        v18 = PspCidTable;
        _InterlockedExchangeAdd64(v4, 1uLL);
        v19 = (volatile __int64 *)(v18 + 48);
        _InterlockedOr(v21, 0);
        if ( *v19 )
          ExfUnblockPushLock(v19, 0LL);
        return v11;
      }
LABEL_27:
      v20 = *v4 & 0xFFFFFFFFFFFE0001uLL;
      v23 = v20;
      *v4 = v20;
    }
    v11 = 0LL;
    goto LABEL_20;
  }
  while ( 1 )
  {
    if ( (v7 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v5, v4, v7);
      _m_prefetchw(v4);
      v6 = v4[1];
      *(_QWORD *)&v22 = *v4;
      v7 = v22;
      *((_QWORD *)&v22 + 1) = v6;
      goto LABEL_25;
    }
    *(_QWORD *)&v8 = v7;
    *((_QWORD *)&v8 + 1) = v6;
    v9 = _InterlockedCompareExchange128(v4, v6, v7 - 2, (signed __int64 *)&v8);
    v6 = v8 >> 64;
    v10 = v8;
    v7 = v8;
    v22 = v8;
    if ( v9 )
      break;
LABEL_25:
    if ( (v7 & 0x1FFFE) == 0 )
      goto LABEL_10;
  }
  if ( (unsigned __int16)(v10 >> 1) == 16 )
    v7 = ((unsigned int)v7 ^ (2 * (unsigned int)(v10 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v7;
  v11 = (struct _DMA_ADAPTER *)((v7 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v11->Version & 0x7F) == a2 )
    return v11;
  HalPutDmaAdapter(v11);
  return 0LL;
}
