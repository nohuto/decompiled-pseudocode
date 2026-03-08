/*
 * XREFs of RtlpHpVsChunkFree @ 0x140249D70
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x140249050 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlpHpVsChunkAlignSplit @ 0x140248F60 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14024A580 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkCoalesce @ 0x14024B8C0 (RtlpHpVsChunkCoalesce.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402CD080 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1402E55D8 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140350330 (RtlpHpAcquireQueuedLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, _DWORD *a3, int a4, __int64 a5)
{
  unsigned int v5; // eax
  _DWORD *v6; // rdi
  _QWORD *v7; // r15
  _DWORD *v8; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  unsigned int v23; // edx
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // rdx
  int v28; // r9d
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdi
  int v36; // ebx
  unsigned int v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+30h] [rbp-48h]
  __int128 v40; // [rsp+38h] [rbp-40h] BYREF
  __int64 v41; // [rsp+48h] [rbp-30h]
  unsigned int v42; // [rsp+88h] [rbp+10h] BYREF
  int v43; // [rsp+98h] [rbp+20h]

  v43 = a4;
  v5 = 0;
  v6 = (_DWORD *)(a1 + 176);
  v42 = 0;
  v7 = (_QWORD *)(a2 + 16);
  v8 = (_DWORD *)(a1 + 176);
  while ( 1 )
  {
    v37 = v5;
    v12 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v42);
    v13 = v42;
    a3 = (_DWORD *)v12;
    if ( v42 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v42 <= v37 )
      break;
    v8 = v6;
    v14 = (v12 - a2 + 4127) & 0xFFFFF000;
    v15 = (v12 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v12) ^ *(unsigned __int16 *)(v12 + 2)) - a2) & 0xFFFFF000;
    if ( v14 >= v15 )
      break;
    v16 = v15 - v14;
    v17 = v14 >> 12;
    v13 = (unsigned __int8)v17;
    v18 = *v7 & (-1LL << v17) & (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((unsigned __int64)(v15 - 1) >> 12)));
    if ( v16 < 0x1000 )
      break;
    if ( !v18 )
      break;
    v13 = (0x101010101010101LL
         * ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    v39 = v13;
    if ( *(__int16 *)(a2 + 34) < 0 )
      break;
    v8 = (_DWORD *)(a1 + 176);
    if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
    {
      v32 = *(_QWORD *)(a1 + 48) >> 7;
      if ( v32 <= 8 )
        v32 = 8LL;
      if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v13 <= v32 )
        break;
    }
    *(_BYTE *)(v12 + 6) = BYTE6(v12) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
    *(_DWORD *)(v12 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v12 ^ ((unsigned int)(v12 - a2) >> 12)) | 0x200;
    v38 = v43 & 1;
    if ( (v43 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a5);
    v33 = *(unsigned int *)(a1 + 8);
    v41 = 0LL;
    _BitScanReverse64(&v34, v18);
    _BitScanForward64(&v35, v18);
    v40 = 0LL;
    v36 = v34 - v35 + 1;
    RtlpHpAcquireQueuedLockExclusive(a2 + 24, v33, &v40);
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(
      *(_QWORD *)(a1 + 128) ^ a1,
      a2 + (unsigned int)((_DWORD)v35 << 12),
      (unsigned int)(v36 << 12));
    *v7 &= ~(((1LL << v36) - 1) << v35);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), -v39);
    RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v40);
    if ( !v38 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a5);
    a3[2] &= ~0x200u;
    v6 = (_DWORD *)(a1 + 176);
    v5 = v42;
  }
  if ( (*v8 & 1) != 0 && ((v12 + 32) & 0xFFF) != 0 )
  {
    v19 = RtlpHpVsChunkAlignSplit(v13, a2, v12);
    if ( v19 )
      RtlpHpVsFreeChunkInsert(a1, a2, v19);
  }
  v20 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a3 ^ *a3) >> 16));
  v21 = ((_DWORD)a3 - a2 + 4127) & 0xFFFFF000;
  v22 = ((_DWORD)a3 + 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*a3 ^ (unsigned int)a3) >> 16)) - a2) & 0xFFFFF000;
  if ( v21 < v22 )
  {
    v23 = v22 - v21;
    v24 = *v7 & (-1LL << (v21 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                 - (unsigned __int8)((unsigned __int64)(v22 - 1) >> 12)));
  }
  else
  {
    v23 = 0;
    v24 = 0LL;
  }
  *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                        * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                          + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                            + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  *(_WORD *)a3 = RtlpHpHeapGlobals ^ (unsigned __int16)a3 ^ (((v20
                                                             + (unsigned __int64)((unsigned __int16)a3 & 0xFFF)
                                                             + 4095) >> 12)
                                                           - ((unsigned __int64)(v20 + 4095) >> 12)
                                                           + (v23 >> 12)
                                                           - ((0x101010101010101LL
                                                             * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                               + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                               + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                                 + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v25 = *(_QWORD *)(a1 + 24);
  if ( (v25 & 1) == 0 )
  {
    v26 = *(_QWORD *)(a1 + 16);
    goto LABEL_14;
  }
  v27 = *(_QWORD *)(a1 + 16);
  if ( v27 )
  {
    v26 = v27 ^ (a1 + 16);
LABEL_14:
    v27 = v26;
    v28 = v25 & 1;
    v29 = 0;
    if ( !v26 )
      goto LABEL_27;
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *a3 ^ (unsigned int)a3) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v27 - 8) ^ ((_DWORD)v27 - 8)) )
      {
        v30 = *(_QWORD *)(v27 + 8);
        if ( v28 )
        {
          if ( !v30 )
            goto LABEL_25;
          v30 ^= v27;
        }
        if ( !v30 )
        {
LABEL_25:
          v29 = 1;
          goto LABEL_27;
        }
      }
      else
      {
        v30 = *(_QWORD *)v27;
        if ( v28 )
        {
          if ( !v30 )
            break;
          v30 ^= v27;
        }
        if ( !v30 )
          break;
      }
      v27 = v30;
    }
  }
  v29 = 0;
LABEL_27:
  RtlRbInsertNodeEx(a1 + 16, v27, v29, a3 + 2);
  return 0LL;
}
