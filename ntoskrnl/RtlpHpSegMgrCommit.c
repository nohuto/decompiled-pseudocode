/*
 * XREFs of RtlpHpSegMgrCommit @ 0x140248BE0
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x1402499A0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x14030853C (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegMgrRelease @ 0x140308F28 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x14020DC8C (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrCommitComplete @ 0x1402E5158 (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1403095E0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14030ABDC (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpAllocVA @ 0x140330920 (RtlpHpAllocVA.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // rsi
  int v9; // r14d
  unsigned int v10; // edi
  unsigned __int64 v11; // r12
  unsigned int v12; // r15d
  _QWORD *v14; // r10
  __int64 *v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  _WORD *v19; // r15
  unsigned __int64 v20; // r12
  size_t v21; // r13
  int v22; // eax
  __int64 result; // rax
  bool v24; // zf
  int v25; // eax
  unsigned __int64 v26; // rcx
  int v27; // r9d
  __int64 v28; // r9
  unsigned __int64 v29; // [rsp+30h] [rbp-51h] BYREF
  size_t v30; // [rsp+38h] [rbp-49h] BYREF
  LONG SpinLock[4]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v32; // [rsp+50h] [rbp-31h] BYREF
  __int128 v33; // [rsp+60h] [rbp-21h] BYREF
  __int128 v34; // [rsp+70h] [rbp-11h] BYREF
  __int128 v35; // [rsp+80h] [rbp-1h]
  __int64 v36; // [rsp+D0h] [rbp+4Fh] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp+57h]

  v37 = a2;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  v12 = -*(_DWORD *)a1;
  LOBYTE(v36) = 0;
  *(_QWORD *)SpinLock = 0LL;
  if ( a5 <= 0 )
  {
LABEL_5:
    if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
    {
      v18 = a7;
      v19 = 0LL;
      a5 = a7;
LABEL_11:
      v20 = a2 + (unsigned int)((_DWORD)v11 << 12);
      v21 = (unsigned int)(a4 << 12);
      v29 = v20;
      v30 = v21;
      if ( !v19 )
        goto LABEL_16;
      while ( 1 )
      {
        v22 = RtlpHpSegMgrCommitInitiate(a1, (int)v19, v8, v18, SpinLock, (__int64)&v36);
        if ( v22 == -1073741568 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
          if ( v9 )
            memset((void *)v20, 0, v21);
          return 0LL;
        }
        if ( v22 == -1073741566 )
        {
          v30 = 0x200000LL;
          v29 = v20 & 0xFFFFFFFFFFE00000uLL;
          if ( (int)v8 <= 0 )
          {
LABEL_45:
            v33 = *(_OWORD *)(a1 + 40);
            result = RtlpHpFreeVA(&v29, &v30, v10, &v33);
            a6 = result;
            goto LABEL_21;
          }
          if ( BYTE1(*(_QWORD *)(a1 + 40)) == 2 )
            v10 |= 0x20400000u;
          else
            v10 |= 0x20000000u;
        }
        else
        {
LABEL_16:
          if ( (int)v8 <= 0 )
            goto LABEL_45;
        }
        if ( v9 && (v10 & 0x20000000) == 0 )
          v10 |= 0x40000000u;
        v24 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) == 0;
        v25 = 64;
        v32 = *(_OWORD *)(a1 + 40);
        if ( v24 )
          v25 = 4;
        result = RtlpHpAllocVA((unsigned int)&v29, (unsigned int)&v30, 0, v10, v25, (__int64)&v32);
        a6 = result;
        if ( v9 && (int)result >= 0 && (v10 & 0x40000000) == 0 )
        {
          memset((void *)v20, 0, v21);
          result = (unsigned int)a6;
        }
LABEL_21:
        if ( !v19 )
          return result;
        if ( (int)result < 0 )
        {
          v27 = 0;
        }
        else
        {
          if ( (*v19 & 0x4000) != 0 )
          {
            v26 = 1LL;
            if ( (int)v8 <= 0 )
              v26 = -1LL;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v26);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
          }
          v27 = 1;
        }
        RtlpHpSegMgrCommitComplete(a1, (int)v19, v8, v27, SpinLock, v36);
        result = (unsigned int)a6;
        if ( (v10 & 0x20000000) == 0 || a6 >= 0 || (a5 & 2) != 0 )
          return result;
        v18 = a5 | 1;
        v29 = v20;
        a5 |= 1u;
        v10 &= ~0x20000000u;
        v30 = v21;
      }
    }
    v30 = a2 & 0xFFFFFFFFFFE00000uLL;
    v34 = 0LL;
    v35 = 0LL;
    RtlpHpVaMgrCtxQuery(&unk_140C70DD8, a2 & 0xFFFFFFFFFFE00000uLL, &v34);
    a2 = v37;
    if ( (int)v8 <= 0 || (_DWORD)v11 || v37 <= v30 || v12 >= 0x200000 )
    {
      v18 = a7;
    }
    else
    {
      v18 = a7;
      a5 = a7;
      if ( (a7 & 2) != 0 )
        goto LABEL_10;
      v18 = a7 | 1;
    }
    a5 = v18;
LABEL_10:
    v19 = (_WORD *)(v35 + 2 * (v11 >> 9));
    goto LABEL_11;
  }
  v14 = *(_QWORD **)(a1 + 56);
  v15 = v14 + 4;
  v16 = v14[4];
  v17 = (v14[12] + v14[17]) << 12;
  if ( !v16 && (v16 = qword_140C6AF58, v15 = &qword_140C6AF58, !qword_140C6AF58) || v17 + (a5 << 12) <= v16 )
  {
    a2 = v37;
    goto LABEL_5;
  }
  v28 = v15[1];
  if ( v28 )
    RtlpLogHeapFailure(21, (_DWORD)v14, 0, v28, a5 << 12, v17);
  return 3221225773LL;
}
