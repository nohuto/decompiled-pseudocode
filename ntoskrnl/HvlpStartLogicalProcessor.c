/*
 * XREFs of HvlpStartLogicalProcessor @ 0x14053FE30
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x14053E9B4 (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x14053E7A4 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(ULONG a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  LONG v5; // r15d
  __int64 v7; // r14
  __int64 result; // rax
  PHYSICAL_ADDRESS *v9; // rbx
  PHYSICAL_ADDRESS *v10; // rax
  __int64 v11; // rcx
  PHYSICAL_ADDRESS *v12; // rsi
  __int16 v13; // ax
  __int16 v14; // bx
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]

  v19 = 0LL;
  *(_OWORD *)a4 = 0LL;
  LODWORD(v20) = 0;
  *(_OWORD *)(a4 + 16) = 0LL;
  v16 = 0LL;
  v5 = a2;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v15 = 0LL;
  v7 = *(unsigned __int16 *)(KeNodeBlock[a3] + 2);
  while ( 1 )
  {
    result = HvlpDepositPages(v7, a2, 0, 0);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage((__int64)&v18, 1, 0LL, 16LL);
    v10 = HvlpAcquireHypercallPage((__int64)&v15, 2, 0LL, 56LL);
    v11 = KeNodeBlock[v7];
    v12 = v10;
    v9->LowPart = a1;
    v9->HighPart = v5;
    v9[1].LowPart = *(_DWORD *)(v11 + 4);
    v9[1].HighPart = -2147483647;
    v13 = HvcallInitiateHypercall(118);
    v14 = v13;
    if ( v13 != 11 )
    {
      *(_OWORD *)a4 = *(_OWORD *)&v12->LowPart;
      *(_OWORD *)(a4 + 16) = *(_OWORD *)&v12[2].LowPart;
      *(_OWORD *)(a4 + 32) = *(_OWORD *)&v12[4].LowPart;
      *(PHYSICAL_ADDRESS *)(a4 + 48) = v12[6];
      *(_WORD *)a4 = v13;
    }
    HvlpReleaseHypercallPage((__int64)&v15);
    HvlpReleaseHypercallPage((__int64)&v18);
    if ( v14 != 11 )
      return v14 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
