/*
 * XREFs of HvlMapSparseGpaPages @ 0x140676BD4
 * Callers:
 *     VmpFillSlat @ 0x1405F6C78 (VmpFillSlat.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(LONGLONG a1, ULONG a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v9; // esi
  PHYSICAL_ADDRESS *v10; // rax
  int v11; // ebp
  int v12; // r15d
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  PHYSICAL_ADDRESS *v15; // rax
  __int64 v16; // rbx
  unsigned __int16 v17; // ax
  int v18; // eax
  __int64 v19; // rax
  unsigned __int16 v20; // bx
  __int16 v21; // rcx^4
  __int128 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+38h] [rbp-30h]
  PHYSICAL_ADDRESS *v26; // [rsp+70h] [rbp+8h]

  v9 = 0;
  v23 = 0LL;
  v24 = 0LL;
  LODWORD(v25) = 0;
  *a5 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v23, 1, 0LL, 0LL);
  v11 = 0;
  v12 = 0;
  v10[1].HighPart = 0;
  v13 = *a5;
  v10[1].LowPart = a2;
  v14 = a3;
  v10->QuadPart = a1;
  v15 = v10 + 2;
  v26 = v15;
  do
  {
    v16 = v14;
    if ( v14 >= 0xFF )
      v16 = 255LL;
    memmove(v15, (const void *)(a4 + 16 * v13), 16 * v16);
    v17 = v12;
    if ( v14 < 0xFF )
      v17 = v11;
    v18 = ((unsigned __int16)v16 ^ v17) & 0xFFF;
    if ( v14 < 0xFF )
      v12 = v11;
    v11 = v12 ^ v18;
    v19 = HvcallInitiateHypercall(110);
    v20 = v19;
    if ( (_WORD)v19 )
      break;
    v21 = WORD2(v19);
    v15 = v26;
    v12 = v11;
    v13 = *a5 + (v21 & 0xFFF);
    *a5 = v13;
    v14 = a3 - v13;
  }
  while ( a3 != v13 );
  HvlpReleaseHypercallPage((__int64)&v23);
  if ( v20 )
    return (unsigned int)HvlpHvToNtStatus(v20);
  return v9;
}
