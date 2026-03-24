/*
 * XREFs of HvlQueryNumaDistance @ 0x1404F1F60
 * Callers:
 *     KiComputeNumaCosts @ 0x140A4D2E0 (KiComputeNumaCosts.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  _DWORD *v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // ax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-18h]

  v3 = a2;
  v4 = a1;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v6 = (_DWORD *)HvlpAcquireHypercallPage(&v18, 1LL, 0LL, 8LL);
  v7 = (__int64 *)HvlpAcquireHypercallPage(&v16, 2LL, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v4] + 148)] + 168);
  v9 = *((_QWORD *)&v19 + 1);
  v10 = *((_QWORD *)&v17 + 1);
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 148)] + 168);
  v12 = HvcallInitiateHypercall(120, v9, v10, v11);
  if ( v12 )
    v13 = -1LL;
  else
    v13 = *v7;
  *a3 = v13;
  v14 = v12 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(&v16);
  HvlpReleaseHypercallPage(&v18);
  return v14;
}
