/*
 * XREFs of IvtUpdateContextEntry @ 0x14052B564
 * Callers:
 *     IvtUpdateTranslationStructures @ 0x14052BCBC (IvtUpdateTranslationStructures.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x14052A538 (IvtGetBlockedDomain.c)
 *     IvtInvalidateContextEntry @ 0x14052AF68 (IvtInvalidateContextEntry.c)
 */

__int64 __fastcall IvtUpdateContextEntry(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  unsigned int v7; // edx
  _QWORD *v9; // rax
  char v10; // r14
  unsigned __int16 v11; // r15
  __int64 v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int16 BlockedDomain; // ax
  int v16; // ebx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v7 = *a2;
  if ( *(_BYTE *)(a1 + 320) )
    v9 = (_QWORD *)(v5 + 8 * (2 * ((unsigned __int64)v7 >> 8) + ((unsigned __int8)((unsigned __int8)v7 >> 3) >= 0x10u)));
  else
    v9 = (_QWORD *)(v5 + 16 * ((unsigned __int64)v7 >> 8));
  v10 = 0;
  v11 = 0;
  v12 = *v9 + 16LL * (unsigned __int8)v7;
  if ( (*(_OWORD *)v12 & 1) != 0 && !a5 )
  {
    v10 = 1;
    v11 = (unsigned int)*(_QWORD *)(v12 + 8) >> 8;
  }
  v13 = *(_DWORD *)(a3 + 4);
  v14 = 0LL;
  v25 = 0LL;
  if ( v13 == 1 )
  {
    BlockedDomain = IvtGetBlockedDomain(a1, a2, &v25);
    v14 = v25;
    LOWORD(v16) = BlockedDomain;
    v17 = 0LL;
  }
  else
  {
    v16 = *(_DWORD *)(a3 + 48);
    if ( v13 )
    {
      v14 = *(_QWORD *)(a3 + 40) >> 12;
      v25 = v14;
      v17 = 0LL;
    }
    else
    {
      v17 = 2LL;
    }
  }
  v18 = v17 | (v14 << 10);
  v19 = a2[1];
  v20 = ((unsigned __int64)(unsigned __int16)v16 << 8) | *(_DWORD *)(a1 + 248) & 7;
  result = 3 - v19;
  v22 = (4 * v18) | 1;
  if ( 1 << v19 )
  {
    result = 16LL * (unsigned int)(1 << (3 - v19));
    v23 = (unsigned int)(1 << v19);
    do
    {
      *(_QWORD *)(v12 + 8) = v20;
      *(_QWORD *)v12 = v22;
      v12 += result;
      --v23;
    }
    while ( v23 );
  }
  if ( v10 )
  {
    IvtInvalidateContextEntry(a1, (int *)a2, v11, v20, 1);
    return IvtInvalidateContextEntry(a1, (int *)a2, v16, v24, 1);
  }
  return result;
}
