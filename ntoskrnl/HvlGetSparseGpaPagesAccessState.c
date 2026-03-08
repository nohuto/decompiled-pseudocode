/*
 * XREFs of HvlGetSparseGpaPagesAccessState @ 0x1406768F8
 * Callers:
 *     VmpProcessAccessedBatch @ 0x1405F854C (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlGetSparseGpaPagesAccessState(
        LONGLONG a1,
        PHYSICAL_ADDRESS a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v9; // r15d
  __int64 v10; // r14
  PHYSICAL_ADDRESS *v11; // rdi
  PHYSICAL_ADDRESS *v12; // rax
  PHYSICAL_ADDRESS *v13; // rcx
  int v14; // esi
  int v15; // r13d
  PHYSICAL_ADDRESS *v16; // rdi
  __int64 v17; // rbx
  unsigned __int16 v18; // cx
  int v19; // eax
  __int64 v20; // rax
  size_t v21; // rbx
  __int64 result; // rax
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+50h] [rbp-18h]
  __int64 v28; // [rsp+58h] [rbp-10h]
  PHYSICAL_ADDRESS *v29; // [rsp+C0h] [rbp+58h]

  v27 = 0LL;
  LODWORD(v28) = 0;
  v24 = 0LL;
  v9 = 0;
  LODWORD(v25) = 0;
  v26 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v11 = HvlpAcquireHypercallPage((__int64)&v26, 1, 0LL, 0LL);
  v12 = HvlpAcquireHypercallPage((__int64)&v23, 2, 0LL, 0LL);
  v13 = v11 + 2;
  v11->QuadPart = a1;
  v11[1] = a2;
  v14 = 0;
  v29 = v11 + 2;
  v15 = 0;
  v16 = v12;
  while ( 1 )
  {
    v17 = 510LL;
    if ( a3 < 0x1FE )
      v17 = a3;
    memmove(v13, (const void *)(a4 + 8 * v10), 8 * v17);
    v18 = v14;
    v19 = v14;
    if ( a3 >= 0x1FE )
    {
      v18 = v15;
      v19 = v15;
    }
    v14 = v19 ^ ((unsigned __int16)v17 ^ v18) & 0xFFF;
    v20 = HvcallInitiateHypercall(202);
    if ( (_WORD)v20 )
      break;
    v21 = WORD2(v20) & 0xFFF;
    memmove((void *)(v10 + a6), v16, v21);
    v13 = v29;
    v10 += v21;
    v15 = v14;
    a3 -= v21;
    if ( !a3 )
      goto LABEL_10;
  }
  v10 += WORD2(v20) & 0xFFF;
  v9 = HvlpHvToNtStatus(v20);
LABEL_10:
  HvlpReleaseHypercallPage((__int64)&v23);
  HvlpReleaseHypercallPage((__int64)&v26);
  result = v9;
  *a5 = v10;
  return result;
}
