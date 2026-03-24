/*
 * XREFs of HvlMapSparseGpaPages @ 0x1405C9AE8
 * Callers:
 *     VmpFillSlat @ 0x1405A33CC (VmpFillSlat.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // esi
  _QWORD *v10; // rax
  void *v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int16 v17; // bx
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h]

  v5 = 0;
  *a5 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v19, 1, 0LL, 0LL);
  *((_DWORD *)v10 + 3) = 0;
  v11 = v10 + 2;
  v12 = *a5;
  *((_DWORD *)v10 + 2) = a2;
  v13 = a3;
  *v10 = a1;
  v14 = 0;
  do
  {
    if ( v13 >= 0xFF )
      v13 = 255LL;
    memmove(v11, (const void *)(a4 + 16 * v12), 16 * v13);
    v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v13) & 0xFFF;
    v16 = HvcallInitiateHypercall(110, *((__int64 *)&v20 + 1), 0LL, v15);
    v17 = v16;
    if ( (_WORD)v16 )
      break;
    v12 = *a5 + (WORD2(v16) & 0xFFF);
    *a5 = v12;
    v13 = a3 - v12;
  }
  while ( a3 != v12 );
  HvlpReleaseHypercallPage((__int64)&v19);
  if ( v17 )
    return (unsigned int)HvlpHvToNtStatus(v17);
  return v5;
}
