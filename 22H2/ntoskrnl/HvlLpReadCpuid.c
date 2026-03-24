/*
 * XREFs of HvlLpReadCpuid @ 0x1404F52B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadCpuid(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r9
  __int16 v16; // ax
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int128 v21; // [rsp+50h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 1, 0LL, 16LL);
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 2, 0LL, 16LL);
  v12 = *((_QWORD *)&v19 + 1);
  v13 = v11;
  v14 = *((_QWORD *)&v21 + 1);
  v10[3] = 0;
  *v10 = a1;
  v10[1] = 0x10000;
  v10[2] = a2;
  v16 = HvcallInitiateHypercall(136, v14, v12, v15);
  *a3 = *v13;
  *a4 = v13[1];
  LODWORD(v10) = v16 != 0 ? 0xC0000001 : 0;
  *a5 = v13[2];
  *a6 = v13[3];
  HvlpReleaseHypercallPage((__int64)&v18);
  HvlpReleaseHypercallPage((__int64)&v20);
  return (unsigned int)v10;
}
