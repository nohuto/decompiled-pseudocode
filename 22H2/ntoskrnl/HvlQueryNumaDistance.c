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
  __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
  v4 = a1;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  v6 = (_DWORD *)HvlpAcquireHypercallPage(v14, 1LL, 0LL, 8LL);
  v7 = (__int64 *)HvlpAcquireHypercallPage(v13, 2LL, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v4] + 148)] + 168);
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 148)] + 168);
  v9 = HvcallInitiateHypercall(120);
  if ( v9 )
    v10 = -1LL;
  else
    v10 = *v7;
  *a3 = v10;
  v11 = v9 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(v13);
  HvlpReleaseHypercallPage(v14);
  return v11;
}
