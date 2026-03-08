/*
 * XREFs of PpmHeteroComputeCoreParkingUtilities @ 0x140594838
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140594418 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140594A00 (PpmHeteroComputeMultiClassUnparkCount.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall PpmHeteroComputeCoreParkingUtilities(
        int a1,
        __int64 *a2,
        unsigned int *a3,
        void *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _QWORD *v7; // r13
  unsigned int v10; // esi
  __int16 v12; // ax
  unsigned __int8 v13; // di
  __int16 v14; // ax
  __int64 Prcb; // rax
  unsigned int v16; // ecx
  unsigned __int8 v17; // r8
  int v18; // edx
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // r8d
  unsigned int v22; // edx
  unsigned __int16 *v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  __int16 v25; // [rsp+30h] [rbp-10h]
  int v26; // [rsp+32h] [rbp-Eh]
  __int16 v27; // [rsp+36h] [rbp-Ah]
  unsigned int v28; // [rsp+78h] [rbp+38h] BYREF

  v7 = a6;
  v26 = 0;
  v27 = 0;
  *a5 = 0LL;
  v10 = 0;
  *v7 = 0LL;
  v28 = 0;
  memset(a3, 0, 0x100uLL);
  memset(a4, 0, 0x100uLL);
  v12 = *((_WORD *)a2 + 4);
  v13 = -1;
  v23 = 0LL;
  v25 = v12;
  v24 = *a2;
  do
  {
    if ( (unsigned int)KeEnumerateNextProcessor(&v28, &v23) )
      break;
    if ( v13 >= *(_BYTE *)(KeGetPrcb(v28) + 34056) )
      v13 = *(_BYTE *)(KeGetPrcb(v28) + 34056);
  }
  while ( v13 != a1 );
  v14 = *((_WORD *)a2 + 4);
  v23 = 0LL;
  v25 = v14;
  v24 = *a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v23) )
  {
    Prcb = KeGetPrcb(v28);
    v16 = *(_DWORD *)(Prcb + 34008);
    v17 = *(_BYTE *)(Prcb + 34056);
    if ( PpmCheckCurrentPipelineId != 5 )
      v16 -= *(_DWORD *)(Prcb + 34016);
    v18 = *(_DWORD *)(Prcb + 34032);
    if ( v18 )
      v16 = (v18 * v16) >> 16;
    a3[v10] = v16;
    v19 = *(_DWORD *)(Prcb + 34032);
    v20 = *(_DWORD *)(Prcb + 34020);
    if ( v19 )
      v20 = (v19 * v20) >> 16;
    *((_DWORD *)a4 + v10) = v20;
    if ( v17 > v13 )
    {
      v21 = *(_DWORD *)(Prcb + 34032);
      v22 = *(_DWORD *)(Prcb + 34024);
      if ( v21 )
        v22 = (v21 * v22) >> 16;
      v20 += v22;
      *((_DWORD *)a4 + v10) = v20;
    }
    *v7 += v20;
    *a5 += a3[v10++];
  }
  qsort(a3, v10, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
  qsort(a4, v10, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
}
