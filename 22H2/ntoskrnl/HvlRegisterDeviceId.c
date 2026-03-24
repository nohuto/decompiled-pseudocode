/*
 * XREFs of HvlRegisterDeviceId @ 0x1404F5DC0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1CE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FA958 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRegisterDeviceId(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]

  v2 = -1LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
      return 3221225659LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) );
    v5 = (v6 + 8) & 0xFFFFFFF8;
  }
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL || (unsigned __int64)v5 + 40 > 0x1000 )
    return 3221225485LL;
  v7 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v17, 1, 0LL, 0LL);
  memset(v7, 0, v5 + 40LL);
  v9 = v7[1];
  *v7 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7[1] = v9 & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    *((_WORD *)v7 + 4) = *(_WORD *)(a1 + 12);
    *((_WORD *)v7 + 5) = *(_WORD *)(a1 + 8);
  }
  else
  {
    v7[1] = v9 | 0xC000000000000000uLL;
    v10 = *(_BYTE **)(a1 + 8);
    do
      ++v2;
    while ( v10[v2] );
    memmove(v7 + 5, v10, v2 + 1);
  }
  *((_DWORD *)v7 + 4) |= 1u;
  v7[3] = a2;
  while ( 1 )
  {
    v11 = HvcallInitiateHypercall((v5 << 14) & 0x3FE0000 | 0x82, *((__int64 *)&v18 + 1), 0LL, v8);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v11, v11) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v13, v12, v14) < 0 )
    {
      v15 = -1073741670;
      goto LABEL_19;
    }
  }
  v15 = HvlpHvToNtStatus(v13);
LABEL_19:
  HvlpReleaseHypercallPage((__int64)&v17);
  return v15;
}
