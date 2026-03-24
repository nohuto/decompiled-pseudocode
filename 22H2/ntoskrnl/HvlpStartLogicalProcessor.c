/*
 * XREFs of HvlpStartLogicalProcessor @ 0x1404F3DEC
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1404F2A84 (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1404F2884 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v5; // r14d
  __int64 v7; // rbp
  __int64 result; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int16 v16; // ax
  __int16 v17; // bx
  __int128 v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-28h]

  *(_OWORD *)a4 = 0LL;
  v5 = a2;
  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  v7 = *(unsigned __int16 *)(KeNodeBlock[a3] + 148);
  while ( 1 )
  {
    result = HvlpDepositPages(v7, a2, 0);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 1, 0LL, 24LL);
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 2, 0LL, 56LL);
    v11 = KeNodeBlock[v7];
    v12 = v10;
    v9[2] = 0LL;
    v13 = *((_QWORD *)&v19 + 1);
    *(_DWORD *)v9 = a1;
    *((_DWORD *)v9 + 1) = v5;
    *((_DWORD *)v9 + 2) = *(_DWORD *)(v11 + 168);
    v14 = *((_QWORD *)&v21 + 1);
    *((_DWORD *)v9 + 3) = -2147483647;
    v16 = HvcallInitiateHypercall(118, v14, v13, v15);
    v17 = v16;
    if ( v16 != 11 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v12;
      *(_OWORD *)(a4 + 16) = *((_OWORD *)v12 + 1);
      *(_OWORD *)(a4 + 32) = *((_OWORD *)v12 + 2);
      *(_QWORD *)(a4 + 48) = v12[6];
      *(_WORD *)a4 = v16;
    }
    HvlpReleaseHypercallPage((__int64)&v18);
    HvlpReleaseHypercallPage((__int64)&v20);
    if ( v17 != 11 )
      return v17 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
