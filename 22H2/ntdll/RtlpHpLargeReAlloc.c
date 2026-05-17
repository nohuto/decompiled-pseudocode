/*
 * XREFs of RtlpHpLargeReAlloc @ 0x18010E7FC
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     RtlpHeapLogRangeRelease @ 0x180108244 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpReallocMove @ 0x18010E410 (RtlpHpReallocMove.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, unsigned __int64 a2, const void *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v11; // rcx
  int v12; // r13d
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  bool v26; // zf
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  volatile signed __int64 *v30; // rdx
  unsigned __int64 v31; // r14
  unsigned __int64 v33; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-30h]
  unsigned __int64 v36; // [rsp+38h] [rbp-28h]
  __int128 v37; // [rsp+40h] [rbp-20h] BYREF
  __int128 v38; // [rsp+50h] [rbp-10h] BYREF
  int v39; // [rsp+A8h] [rbp+48h]

  v39 = a2;
  v4 = *(_QWORD *)(a4 + 32);
  v6 = a4;
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v9 = (v4 + 4095) >> 12;
  v36 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8
    || (v11 = *(_QWORD *)a1, BYTE1(*(_QWORD *)a1) >= 2u) && (v11 & 6) == 0
    || (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove(a1, a3, a4, a2);
    return 0LL;
  }
  v12 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 64, a2, (unsigned __int64)a3, a4);
    v6 = a4;
  }
  v13 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v13 )
      v13 ^= a1 + 72;
    else
      v13 = 0LL;
  }
  while ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( (unsigned __int64)a3 < v14 )
    {
      v15 = *(_QWORD *)v13;
    }
    else
    {
      if ( (unsigned __int64)a3 <= v14 )
        break;
      v15 = *(_QWORD *)(v13 + 8);
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v15 )
      v13 ^= v15;
    else
      v13 = v15;
  }
  if ( v13 )
  {
    v16 = 1LL << (((unsigned __int8)*(_QWORD *)(v13 + 32) >> 2) & 0x3F);
    v17 = *(_QWORD *)(v13 + 32) & 0xFFFLL;
    v18 = ((*(_QWORD *)(v13 + 32) >> 12) + ((*(_QWORD *)(v13 + 32) >> 1) & 1LL)) << 12;
    v35 = v16 - ((v16 - 1) & (v16 + v18 - 1)) + v18 - 1;
    *(_QWORD *)(v13 + 32) = (v9 << 12) | v17;
    *(_WORD *)(v13 + 24) = ((_WORD)v9 << 12) - *(_WORD *)(v6 + 24);
    if ( !v12 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      v6 = a4;
    }
    if ( *(_DWORD *)(v6 + 16) )
    {
      v19 = (__int64)a3 + *(_QWORD *)v6 + 16;
      if ( (v39 & 0x10000000) == 0 )
        v19 = (__int64)a3 + *(_QWORD *)v6;
      v20 = (unsigned __int8 *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v21 = (__int64)a3 + *(_QWORD *)(v6 + 24) + 16;
      if ( (v39 & 0x10000000) == 0 )
        v21 = (__int64)a3 + *(_QWORD *)(v6 + 24);
      memmove((void *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v20, 16 * (v20[3] + 1LL));
    }
    if ( v9 < v8 )
    {
      v22 = *(_OWORD *)a1;
      v34 = (unsigned __int64)a3 + 4096 * (v9 + ((*(_DWORD *)(v13 + 32) >> 1) & 1));
      v33 = (unsigned __int64)a3 + v35 - v34;
      v37 = v22;
      RtlpHpFreeVA(&v34, &v33, 0x8000, &v37);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v25 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v25 = 2147353480LL;
      if ( *(_BYTE *)v25 )
        RtlpHeapLogRangeRelease();
      v35 -= v33;
      v27 = v34 - ((_QWORD)a3 + v36);
      v26 = v34 == (_QWORD)a3 + v36;
      v34 = (unsigned __int64)a3 + v36;
      v33 = v27;
      if ( !v26 )
      {
        v38 = *(_OWORD *)a1;
        RtlpHpFreeVA(&v34, &v33, 0x4000, &v38);
      }
      _BitScanForward64(&v28, v35);
      v29 = *(_QWORD *)(v13 + 32);
      v36 = (unsigned int)v28;
      if ( (unsigned int)v28 != (unsigned __int64)((unsigned __int8)v29 >> 2) )
      {
        v30 = (volatile signed __int64 *)(a1 + 64);
        if ( !v12 )
        {
          RtlAcquireSRWLockExclusive(a1 + 64, (unsigned __int64)v30, v23, v24);
          v29 = *(_QWORD *)(v13 + 32);
          v30 = (volatile signed __int64 *)(a1 + 64);
        }
        *(_QWORD *)(v13 + 32) = v29 ^ (unsigned __int8)(v29 ^ (4 * v36)) & 0xFC;
        if ( !v12 )
          RtlReleaseSRWLockExclusive(v30);
      }
      v31 = v9 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v31);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v31);
    }
    return (__int64)a3;
  }
  else
  {
    if ( !v12 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    return -1LL;
  }
}
