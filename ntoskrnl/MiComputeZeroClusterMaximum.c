/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x14029EAD0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14029E7B4 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140667A14 (MiGetClusterPage.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r11
  _QWORD *v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int16 **v17; // rsi
  unsigned __int16 *v18; // rbp
  unsigned int v19; // r14d
  unsigned int v20; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v6 = (((unsigned __int64)(*(_DWORD *)v5 & 0xFFF) + *(_QWORD *)(v5 + 8) + 4095LL) >> 12) - v3;
  v7 = *(_QWORD *)v5 + (v3 << 12);
  if ( a3
    && v6 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v7 >> 12) + 1 )
  {
    v6 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v7 >> 12) + 1;
  }
  v8 = *(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a2 + 174));
  v9 = *(_QWORD *)(v8[2115] + 2384LL);
  if ( v9 <= 0x4E20 || (v9 & 0xFFFFFFFFFFFFFFFEuLL) <= 0x4E20 )
    v10 = 10000LL;
  else
    v10 = v9 >> 1;
  v11 = v8[2152];
  v12 = v10 >> 1;
  if ( v11 < v12 )
  {
    v16 = 0LL;
    v17 = (unsigned __int16 **)(v8 + 851);
    while ( 1 )
    {
      v18 = *v17;
      v19 = 0;
      if ( dword_140C6577C )
        break;
LABEL_24:
      ++v16;
      ++v17;
      if ( v16 > 1 )
      {
        v6 = 1LL;
        goto LABEL_8;
      }
    }
    while ( 1 )
    {
      v11 += *v18;
      if ( v11 >= v12 )
        break;
      ++v19;
      v18 += 8;
      if ( v19 >= dword_140C6577C )
        goto LABEL_24;
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(a2 + 184) & 0x40) != 0 && (*(_BYTE *)a1 != 1 || (*(_DWORD *)(a1 + 80) & 0x4000) == 0) )
  {
    v14 = *(_QWORD *)(a2 + 128);
    v15 = *(_QWORD *)(a2 + 120);
    if ( v14 >= v15 )
      return 1LL;
    if ( v14 + v6 > v15 )
      v6 = v15 - v14;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v20 = *(_DWORD *)(a1 + 80);
    if ( (v20 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v8, ((v20 >> 3) & 7) + 1);
      if ( v6 > AvailablePagesBelowPriority )
        v6 = AvailablePagesBelowPriority;
    }
  }
  if ( !v6 )
    v6 = 1LL;
  result = 512 - ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v6 <= result )
    return v6;
  return result;
}
