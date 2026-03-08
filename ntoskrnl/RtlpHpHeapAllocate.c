/*
 * XREFs of RtlpHpHeapAllocate @ 0x140375668
 * Callers:
 *     RtlpHpHeapCreate @ 0x140375288 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x14020DC8C (RtlpHpFreeVA.c)
 *     RtlpHpMetadataAlloc @ 0x1402B71FC (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1402B72FC (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpAllocVA @ 0x140330920 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x1403C1314 (RtlpHpMetadataCommit.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  unsigned __int64 v4; // r13
  int v5; // edi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int16 v8; // r14
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // r10d
  char v16; // bl
  int v17; // r14d
  volatile signed __int64 *v18; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+38h] [rbp-48h]
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  __int128 v25; // [rsp+70h] [rbp-10h] BYREF
  void *v26; // [rsp+D0h] [rbp+50h] BYREF
  unsigned __int64 v27; // [rsp+D8h] [rbp+58h] BYREF

  v26 = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v6 = 64LL;
  v27 = 4096LL;
  v7 = *a3;
  v8 = 1;
  v9 = (((unsigned __int64)(unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v23 = *a3;
  if ( a2 <= 0x40 )
    v6 = a2;
  v22 = v7;
  v10 = v9 + 9 * (v6 + 15) - (((_BYTE)v6 - 1) & 7);
  v11 = v10 + v9 + (unsigned int)v6 * (v9 + 64) - (((_BYTE)v10 - 1) & 0x3F);
  v12 = 4095 - ((129 * v11 + 10238) & 0xFFF) + 129 * v11 + 10239;
  v13 = v12;
  v21 = v12;
  v14 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v23);
  if ( v14 && (v15 & 0x40000000) == 0 && !BYTE2(v22) && v12 < *(unsigned int *)(v14 + 528) )
  {
    v24 = v7;
    v20 = RtlpHpMetadataAlloc(v12, 0x1000uLL, 1, &v24);
    v18 = (volatile signed __int64 *)v20;
    if ( !v20 )
      return v18;
    v25 = *a3;
    RtlpHpMetadataCommit(v20, v20 + 4096, v12 - 4096, (unsigned int)&v25, 0);
    goto LABEL_11;
  }
  v16 = BYTE1(v22);
  if ( (unsigned __int8)(BYTE1(v22) - 2) <= 2u )
  {
    if ( (unsigned __int8)(BYTE1(v22) - 2) <= 1u )
      v21 = 0x200000LL;
  }
  else
  {
    v5 = 0x1000000;
  }
  v17 = (v15 & 0x40000000) != 0 ? 64 : 4;
  v25 = v7;
  if ( (int)RtlpHpAllocVA((unsigned __int64 *)&v26, (__int64 *)&v21, 0LL, v5 | 0x2000u, v17, &v25) >= 0 )
  {
    v13 = v21;
    if ( v16 == 3 )
    {
      v5 = 0x20000000;
    }
    else
    {
      if ( v16 != 2 )
        goto LABEL_9;
      v5 = 541065216;
    }
    v27 = v21;
LABEL_9:
    v24 = *a3;
    if ( (int)RtlpHpAllocVA((unsigned __int64 *)&v26, (__int64 *)&v27, 0LL, v5 | 0x1000u, v17, &v24) >= 0 )
    {
      v18 = (volatile signed __int64 *)v26;
      v8 = 0;
      v4 = v27;
      v26 = 0LL;
LABEL_11:
      memset((void *)v18, 0, 0x840uLL);
      *((_QWORD *)v18 + 29) = v18 + 264;
      *((_QWORD *)v18 + 30) = (char *)v18 + v4;
      *((_QWORD *)v18 + 31) = (char *)v18 + v12;
      *((_QWORD *)v18 + 32) = (char *)v18 + v13;
      *((_WORD *)v18 + 15) = v8 | *((_WORD *)v18 + 15) & 0xFFFE;
      _InterlockedExchangeAdd64(v18 + 16, v13 >> 12);
      _InterlockedExchangeAdd64(v18 + 17, v27 >> 12);
      goto LABEL_12;
    }
  }
  v18 = 0LL;
LABEL_12:
  if ( v26 )
  {
    v25 = *a3;
    RtlpHpFreeVA((unsigned __int64 *)&v26, &v21, v5 | 0x8000, &v25);
  }
  return v18;
}
