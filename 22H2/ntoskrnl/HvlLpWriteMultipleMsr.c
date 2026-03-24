/*
 * XREFs of HvlLpWriteMultipleMsr @ 0x1404F54F0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpWriteMultipleMsr(int a1, unsigned int a2, int *a3, __int64 *a4)
{
  unsigned __int64 v6; // r9
  __int64 v8; // rsi
  _QWORD *v11; // rax
  __int64 v12; // r9
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int128 v17; // [rsp+28h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-20h]

  v6 = 32LL * a2;
  v8 = a2;
  v17 = 0LL;
  v18 = 0LL;
  if ( v6 > 0x1000 )
    return 3221225485LL;
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v17, 1, 0LL, v6);
  if ( a2 )
  {
    v13 = v11 + 1;
    do
    {
      *(v13 - 2) = a1;
      *(v13 - 1) = 65537;
      v14 = *a3++;
      *v13 = v14;
      v13 += 8;
      v15 = *a4++;
      *((_QWORD *)v13 - 3) = v15;
      --v8;
    }
    while ( v8 );
  }
  v16 = (unsigned __int16)HvcallInitiateHypercall(137, *((__int64 *)&v18 + 1), 0LL, v12) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v17);
  return v16;
}
