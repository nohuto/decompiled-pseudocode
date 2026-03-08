/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1405424F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(ULONG a1, unsigned int a2, ULONG *a3, LONGLONG *a4)
{
  __int64 v8; // r14
  PHYSICAL_ADDRESS *v9; // rsi
  __int64 v10; // rax
  PHYSICAL_ADDRESS *v11; // rdx
  ULONG v12; // ecx
  unsigned int v13; // ebx
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *v16; // [rsp+28h] [rbp-48h]
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+68h] [rbp-8h]

  v21 = 0LL;
  LODWORD(v22) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v17 = 0LL;
  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  v8 = a2;
  v16 = HvlpAcquireHypercallPage((__int64)&v20, 1, 0LL, 16LL * a2);
  v9 = HvlpAcquireHypercallPage((__int64)&v17, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v10 = a2;
    v11 = v16 + 1;
    do
    {
      v11[-1].LowPart = a1;
      v11[-1].HighPart = 65537;
      v12 = *a3++;
      v11->LowPart = v12;
      v11 += 2;
      --v10;
    }
    while ( v10 );
  }
  v13 = (unsigned __int16)HvcallInitiateHypercall(136) != 0 ? 0xC0000001 : 0;
  if ( a2 )
  {
    do
    {
      QuadPart = v9->QuadPart;
      v9 += 2;
      *a4++ = QuadPart;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage((__int64)&v17);
  HvlpReleaseHypercallPage((__int64)&v20);
  return v13;
}
