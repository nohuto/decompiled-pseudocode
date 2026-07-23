/*
 * XREFs of RtlpHpHeapAllocate @ 0x14037B400
 * Callers:
 *     RtlpHpHeapCreate @ 0x14037AA74 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x140223158 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140223290 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x1403CB264 (RtlpHpMetadataCommit.c)
 *     memset @ 0x140414300 (memset.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  size_t v4; // r15
  int v5; // esi
  __int16 v6; // r12
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // ebx
  volatile signed __int64 *v17; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  __int128 v21; // [rsp+38h] [rbp-51h]
  __int128 v22; // [rsp+50h] [rbp-39h] BYREF
  __int128 v23; // [rsp+60h] [rbp-29h] BYREF
  __int128 v24; // [rsp+70h] [rbp-19h] BYREF
  __int128 v25; // [rsp+80h] [rbp-9h] BYREF
  __int128 v26; // [rsp+90h] [rbp+7h] BYREF
  __int128 v27[4]; // [rsp+A0h] [rbp+17h] BYREF
  void *v28; // [rsp+100h] [rbp+77h] BYREF
  size_t v29; // [rsp+108h] [rbp+7Fh] BYREF

  v28 = 0LL;
  v4 = 4096LL;
  v5 = 0;
  v29 = 4096LL;
  v6 = 1;
  v7 = *a3;
  v8 = *a3;
  v9 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v10 = 64LL;
  v22 = *a3;
  if ( a2 <= 0x40 )
    v10 = a2;
  v21 = v7;
  v11 = v9 + 9 * (v10 + 15) - (((_BYTE)v10 - 1) & 7);
  v12 = v11
      + (unsigned int)v10 * (v9 + 64)
      - (((_BYTE)v11 - 1) & 0x3F)
      + ((unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6);
  v13 = 129 * v12 + 10175 - ((129 * (_WORD)v12 + 10174) & 0xFFF) + 4095;
  v20 = v13;
  v14 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v22);
  if ( v14 && (v15 & 0x40000000) == 0 && !BYTE2(v21) && v13 < *(unsigned int *)(v14 + 464) )
  {
    v23 = v8;
    v19 = RtlpHpMetadataAlloc(v13, 0x1000uLL, 1, &v23);
    v17 = (volatile signed __int64 *)v19;
    if ( !v19 )
      return v17;
    v24 = *a3;
    RtlpHpMetadataCommit(v19, v19 + 4096, v13 - 4096, (unsigned int)&v24, 0);
    goto LABEL_7;
  }
  v5 = BYTE1(v21) < 2u ? 0x1000000 : 0;
  v25 = v8;
  v16 = (v15 & 0x40000000) != 0 ? 64 : 4;
  if ( (int)RtlpHpAllocVA(&v28, &v20, 0LL, v5 | 0x2000u, v16, &v25) >= 0 )
  {
    v26 = *a3;
    if ( (int)RtlpHpAllocVA(&v28, &v29, 0LL, v5 | 0x1000u, v16, &v26) >= 0 )
    {
      v17 = (volatile signed __int64 *)v28;
      v6 = 0;
      v13 = v20;
      v4 = v29;
      v28 = 0LL;
LABEL_7:
      memset((void *)v17, 0, 0x800uLL);
      *((_QWORD *)v17 + 29) = v17 + 256;
      *((_QWORD *)v17 + 30) = (char *)v17 + v4;
      *((_QWORD *)v17 + 31) = (char *)v17 + v13;
      *((_WORD *)v17 + 15) = v6 | *((_WORD *)v17 + 15) & 0xFFFE;
      _InterlockedExchangeAdd64(v17 + 16, v13 >> 12);
      _InterlockedExchangeAdd64(v17 + 17, v29 >> 12);
      goto LABEL_8;
    }
  }
  v17 = 0LL;
LABEL_8:
  if ( v28 )
  {
    v27[0] = *a3;
    RtlpHpFreeVA((unsigned __int64 *)&v28, &v20, v5 | 0x8000u, v27);
  }
  return v17;
}
