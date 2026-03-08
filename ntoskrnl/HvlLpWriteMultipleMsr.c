/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x140542640
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(ULONG a1, unsigned int a2, ULONG *a3, PHYSICAL_ADDRESS *a4)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  PHYSICAL_ADDRESS *v11; // rax
  PHYSICAL_ADDRESS *v12; // rcx
  ULONG v13; // eax
  PHYSICAL_ADDRESS v14; // rax
  unsigned int v15; // ebx
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v7 = 32LL * a2;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  if ( v7 > 0x1000 )
    return 3221225485LL;
  v11 = HvlpAcquireHypercallPage((__int64)&v16, 1, 0LL, v7);
  if ( a2 )
  {
    v12 = v11 + 1;
    do
    {
      v12[-1].LowPart = a1;
      v12[-1].HighPart = 65537;
      v13 = *a3++;
      v12->LowPart = v13;
      v12 += 4;
      v14 = *a4++;
      v12[-3] = v14;
      --v6;
    }
    while ( v6 );
  }
  v15 = (unsigned __int16)HvcallInitiateHypercall(137) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v16);
  return v15;
}
