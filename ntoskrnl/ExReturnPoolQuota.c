/*
 * XREFs of ExReturnPoolQuota @ 0x1403144E0
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     IopFreeIrp @ 0x14030EC30 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopFreeMiniCompletionPacket @ 0x1407C40A0 (IopFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x1402953A0 (PspReturnResourceQuota.c)
 *     ObpDeferObjectDeletion @ 0x1402ECA68 (ObpDeferObjectDeletion.c)
 *     ExpStampBigPoolEntry @ 0x140307098 (ExpStampBigPoolEntry.c)
 *     ExGetHeapFromVA @ 0x140313BF0 (ExGetHeapFromVA.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14046327A (ExpHpIsSpecialPoolHeap.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

void __fastcall ExReturnPoolQuota(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebp
  BOOL v3; // r14d
  ULONG_PTR v4; // rdi
  __int16 v5; // cx
  struct _KPROCESS *BugCheckParameter4; // rbx
  char *v7; // r9
  __int64 v8; // r14
  ULONG_PTR v9; // r12
  char v10; // r15
  __int64 v11; // r14
  volatile signed __int64 *v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // rcx
  unsigned __int64 v16; // r8
  signed __int64 v17; // rdx
  bool v18; // zf
  signed __int64 v19; // rax
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax
  __int64 v23; // rax
  ULONG_PTR v24; // r8
  __int64 v25; // r8
  ULONG_PTR HeapFromVA; // rax
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+18h] BYREF
  char *v29; // [rsp+98h] [rbp+20h]

  v1 = 0;
  BugCheckParameter3 = 0LL;
  LODWORD(v27) = 0;
  if ( ExpSpecialAllocations )
  {
    HeapFromVA = ExGetHeapFromVA(BugCheckParameter2);
    if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
      return;
  }
  v3 = BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C6A058[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 6;
  v4 = 0LL;
  if ( (BugCheckParameter2 & 0xFFF) == 0 )
  {
    BugCheckParameter4 = (struct _KPROCESS *)ExpStampBigPoolEntry(
                                               BugCheckParameter2,
                                               v3,
                                               0LL,
                                               &BugCheckParameter3,
                                               &v27);
LABEL_10:
    if ( (unsigned __int64)BugCheckParameter4[-1].EndPadding + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (unsigned __int64)BugCheckParameter4 < 0xFFFF800000000000uLL || (BugCheckParameter4->Header.Type & 0x7F) != 3 )
      {
        if ( v4 )
          v1 = *(_DWORD *)(v4 + 4);
        KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v1, (ULONG_PTR)BugCheckParameter4);
      }
      if ( BugCheckParameter4 != PsInitialSystemProcess )
      {
        v7 = (char *)BugCheckParameter4[1].Affinity.StaticBitmap[27];
        v8 = v3;
        v9 = (unsigned int)v8;
        v29 = v7;
        v10 = PspResourceFlags[8 * v8];
        v11 = v8 << 7;
        v12 = (volatile signed __int64 *)&v7[v11];
        _m_prefetchw(&v7[v11]);
        v13 = *(_QWORD *)&v7[v11];
        v14 = *(_QWORD *)&v7[v11 + 64];
        if ( *(_QWORD *)&v7[v11 + 80] )
        {
          v23 = 7 * v9;
          if ( v14 > v13 )
          {
            v24 = qword_140C37E48[v23];
            if ( v14 - v13 > v24 )
            {
              if ( v24 > BugCheckParameter3 )
                v24 = BugCheckParameter3;
              if ( v14 == _InterlockedCompareExchange64(v12 + 8, v14 - v24, v14)
                && _InterlockedExchangeAdd64(v12 + 9, v24) + v24 > *(_QWORD *)(v23 * 8 + 12811848 + 0x140000000LL) )
              {
                v25 = _InterlockedExchange64(v12 + 9, 0LL);
                if ( v25 )
                {
                  PspReturnResourceQuota(v9, (__int64)v12, v25, 0);
                  v7 = v29;
                }
              }
            }
          }
        }
        v15 = BugCheckParameter3;
        while ( 1 )
        {
          do
          {
            if ( v15 >= v13 )
            {
              v16 = v13;
              v17 = 0LL;
            }
            else
            {
              v16 = v15;
              v17 = v13 - v15;
            }
            v19 = _InterlockedCompareExchange64(v12, v17, v13);
            v18 = v13 == v19;
            v13 = v19;
          }
          while ( !v18 );
          v15 -= v16;
          if ( !v15 )
            break;
          if ( v7 == (char *)&PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, (ULONG_PTR)BugCheckParameter4, v9, BugCheckParameter3, v15);
          v7 = (char *)&PspSystemQuotaBlock;
          v12 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v11);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v11);
          v13 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v11);
        }
        if ( (v10 & 4) != 0 )
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)&BugCheckParameter4[1].ThreadListHead.Blink + v9,
            -(__int64)BugCheckParameter3);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)BugCheckParameter4 - 48);
      v20 = _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&BugCheckParameter4[-1].ExtendedFeatureDisableMask,
              0xFFFFFFFFFFFFFFFFuLL);
      v21 = v20 <= 1;
      v22 = v20 - 1;
      if ( v21 )
      {
        if ( *(_QWORD *)&BugCheckParameter4[-1].PrimaryGroup )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(BugCheckParameter4[-1].CpuPartitionList.Flink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)BugCheckParameter4 - 48) >> 8)],
            (ULONG_PTR)BugCheckParameter4,
            3uLL,
            *(_QWORD *)&BugCheckParameter4[-1].PrimaryGroup);
        if ( v22 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)BugCheckParameter4, 4uLL, v22);
        ObpDeferObjectDeletion((signed __int64)&BugCheckParameter4[-1].ExtendedFeatureDisableMask);
      }
    }
    return;
  }
  v4 = BugCheckParameter2 - 16;
  if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
    v4 += -16LL * (unsigned __int8)*(_WORD *)v4;
  v5 = *(_WORD *)(v4 + 2);
  BugCheckParameter3 = 16LL * (unsigned __int8)v5;
  LODWORD(v27) = *(_DWORD *)(v4 + 4);
  if ( (v5 & 0x800) != 0 )
  {
    BugCheckParameter4 = (struct _KPROCESS *)(v4 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v4 + 8));
    *(_QWORD *)(v4 + 8) = ExpPoolQuotaCookie ^ v4;
    goto LABEL_10;
  }
}
