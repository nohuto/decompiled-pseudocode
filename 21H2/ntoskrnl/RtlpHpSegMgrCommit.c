/*
 * XREFs of RtlpHpSegMgrCommit @ 0x140315360
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140222154 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegPageRangeCommit @ 0x140315000 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrRelease @ 0x140389CA4 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpSegMgrCommitComplete @ 0x140246428 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140313FB8 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14031419C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140315860 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // rsi
  int v9; // r14d
  unsigned __int64 v10; // r15
  unsigned int v11; // edi
  volatile signed __int16 *v14; // rcx
  unsigned __int64 v15; // r15
  unsigned int v16; // r12d
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  int v20; // r13d
  volatile signed __int16 *v21; // rdx
  void *HeapManager; // rax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rcx
  int v28; // r9d
  void *v29; // [rsp+30h] [rbp-51h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-49h] BYREF
  int v31[2]; // [rsp+40h] [rbp-41h]
  LONG SpinLock[2]; // [rsp+48h] [rbp-39h] BYREF
  __int128 v33; // [rsp+50h] [rbp-31h] BYREF
  __int128 v34; // [rsp+60h] [rbp-21h] BYREF
  __int128 v35; // [rsp+70h] [rbp-11h] BYREF
  __int128 v36; // [rsp+80h] [rbp-1h] BYREF
  __int128 v37; // [rsp+90h] [rbp+Fh]
  __int64 v38; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a3;
  v11 = a6 & 0xBFFFFFFF;
  LOBYTE(v38) = 0;
  *(_QWORD *)SpinLock = 0LL;
  if ( a5 > 0 && !(unsigned int)RtlpHpSegHeapCheckCommitLimit(a5 << 12, *(_QWORD *)(a1 + 56)) )
    return 3221225773LL;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v36 = 0LL;
    v37 = 0LL;
    v33 = *(_OWORD *)(a1 + 40);
    HeapManager = RtlpHpEnvGetHeapManager(&v33);
    RtlpHpVaMgrCtxQuery((__int64)HeapManager + 88, v24, (__int64)&v36);
    v14 = (volatile signed __int16 *)(v37 + 2 * (v10 >> 9));
  }
  else
  {
    v14 = 0LL;
  }
  v15 = a2 + (unsigned int)((_DWORD)v10 << 12);
  *(_QWORD *)v31 = v14;
  v16 = a4 << 12;
  while ( 1 )
  {
    v29 = (void *)v15;
    v30 = v16;
    if ( !v14 )
      goto LABEL_7;
    v25 = RtlpHpSegMgrCommitInitiate(a1, v14, v8, a7, (ULONG_PTR)SpinLock, (KIRQL *)&v38);
    if ( v25 == -1073741568 )
      break;
    if ( v25 == -1073741566 )
    {
      v30 = 0x200000LL;
      v29 = (void *)(v15 & 0xFFFFFFFFFFE00000uLL);
      v26 = v11 | 0x20000000;
      if ( (int)v8 <= 0 )
        v26 = v11;
      v11 = v26;
    }
LABEL_7:
    if ( (int)v8 <= 0 )
    {
      v35 = *(_OWORD *)(a1 + 40);
      v20 = RtlpHpFreeVA((unsigned __int64 *)&v29, &v30, v11, &v35);
    }
    else
    {
      if ( v9 && (v11 & 0x20000000) == 0 )
        v11 |= 0x40000000u;
      v17 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) == 0;
      v18 = 64;
      v34 = *(_OWORD *)(a1 + 40);
      if ( v17 )
        v18 = 4;
      v19 = RtlpHpAllocVA((unsigned int)&v29, (unsigned int)&v30, 0, v11, v18, (__int64)&v34);
      v20 = v19;
      if ( v9 && v19 >= 0 && (v11 & 0x40000000) == 0 )
        memset(v29, 0, v16);
    }
    v21 = *(volatile signed __int16 **)v31;
    if ( !*(_QWORD *)v31 )
      return (unsigned int)v20;
    if ( (**(_WORD **)v31 & 0x4000) != 0 )
    {
      if ( v20 < 0 )
        goto LABEL_40;
      v27 = 1LL;
      if ( (int)v8 <= 0 )
        v27 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v27);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    if ( v20 < 0 )
    {
LABEL_40:
      v28 = 0;
      goto LABEL_37;
    }
    v28 = 1;
LABEL_37:
    RtlpHpSegMgrCommitComplete(a1, v21, v8, v28, SpinLock, v38);
    if ( (v11 & 0x20000000) == 0 || v20 >= 0 || (a7 & 2) != 0 )
      return (unsigned int)v20;
    v14 = *(volatile signed __int16 **)v31;
    a7 |= 1u;
    v11 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset((void *)v15, 0, v16);
  return 0LL;
}
