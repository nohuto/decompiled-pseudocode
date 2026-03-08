/*
 * XREFs of KiPerformExplicitGroupAssignment @ 0x140B668F8
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140B66804 (KiPerformGroupConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall KiPerformExplicitGroupAssignment(_DWORD *a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  int v12; // eax
  int *v13; // rdi
  unsigned __int16 v14; // r10
  __int64 i; // rcx
  unsigned __int16 v16; // cx
  char v17; // al
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  _WORD v24[8]; // [rsp+20h] [rbp-B8h] BYREF
  _DWORD v25[32]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = a2;
  v24[0] = 0;
  v3 = a1;
  if ( !a1 || a2 != *a1 )
    return 0;
  if ( KiSubNodeCount )
  {
    v5 = (unsigned __int16)KiSubNodeCount;
    v6 = KiSubNodeConfigBlock + 5;
    do
    {
      *(_BYTE *)v6 &= ~1u;
      *(_WORD *)(v6 + 1) = -1;
      v6 += 24LL;
      --v5;
    }
    while ( v5 );
  }
  v7 = 32LL;
  while ( v2 )
  {
    --v2;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _WORD *))KiNumaQueryProximityNode)((unsigned int)v3[1], v24) )
      return 0;
    v3 += 2;
    if ( *v3 >= 0x20u && *v3 != 0xFFFF )
      return 0;
    if ( KiSubNodeCount )
    {
      v8 = (unsigned __int16)KiSubNodeCount;
      v9 = KiSubNodeConfigBlock + 5;
      do
      {
        if ( *(_WORD *)(KeNodeBlock[*(unsigned __int16 *)(v9 - 3)] + 2) == v24[0] )
        {
          v10 = *(_WORD *)v3;
          *(_BYTE *)v9 |= 1u;
          *(_WORD *)(v9 + 1) = v10;
        }
        v9 += 24LL;
        --v8;
      }
      while ( v8 );
    }
  }
  v11 = KiSubNodeConfigBlock;
  if ( *(_WORD *)(KiSubNodeConfigBlock + 6) == 0xFFFF )
    return 0;
  v12 = KiMaximumGroupSize;
  v13 = v25;
  v14 = KiSubNodeCount;
  for ( i = 32LL; i; --i )
    *v13++ = v12;
  v16 = 0;
  if ( v14 )
  {
    do
    {
      v17 = *(_BYTE *)(v11 + 24LL * v16 + 5);
      if ( (v17 & 1) == 0 )
        return 0;
      v18 = *(unsigned __int16 *)(v11 + 24LL * v16 + 6);
      if ( (_WORD)v18 == 0xFFFF )
      {
        *(_BYTE *)(v11 + 24LL * v16 + 5) = v17 & 0xFE;
      }
      else
      {
        v19 = *(unsigned __int8 *)(v11 + 24LL * v16 + 4);
        v20 = v25[v18];
        if ( v20 < v19 )
          return 0;
        v25[v18] = v20 - v19;
      }
    }
    while ( ++v16 < v14 );
  }
  KiMaximumGroups = 0;
  v21 = v25;
  do
  {
    if ( *v21 < (unsigned int)KiMaximumGroupSize )
      ++KiMaximumGroups;
    ++v21;
    --v7;
  }
  while ( v7 );
  v22 = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v23 = (_BYTE *)(KiSubNodeConfigBlock + 5);
    do
    {
      *v23 |= 4u;
      v23 += 24;
      --v22;
    }
    while ( v22 );
  }
  return 1;
}
