/*
 * XREFs of MiMarkHugeRangeTransition @ 0x14062C4CC
 * Callers:
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 * Callees:
 *     MiUnlockIoPfnTree @ 0x14029B9B4 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14029C1B0 (MiLockIoPfnTree.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MiMarkHugeRangeTransition(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  int v4; // ebp
  char v5; // di
  unsigned __int8 v6; // r10
  __int128 *i; // r8
  unsigned __int64 j; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  _QWORD **v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx

  v1 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
LABEL_2:
  v6 = MiLockIoPfnTree(v3 + 1);
  for ( i = &xmmword_140C69200; (__int64)i < (__int64)&xmmword_140C69210; i = (__int128 *)((char *)i + 8) )
  {
    j = *(_QWORD *)i;
    if ( !*(_QWORD *)i )
      continue;
    v9 = a1 + 0x3FFFF;
    while ( 1 )
    {
      v10 = *(_QWORD *)(j + 24);
      if ( v9 >= v10 )
        break;
      j = *(_QWORD *)j;
LABEL_10:
      if ( !j )
        goto LABEL_23;
    }
    if ( a1 >= v10 + 512 )
    {
      j = *(_QWORD *)(j + 8);
      goto LABEL_10;
    }
LABEL_23:
    while ( j && v9 >= *(_QWORD *)(j + 24) )
    {
      if ( *(_DWORD *)(j + 32) )
      {
        if ( !v3 )
        {
          MiUnlockIoPfnTree(v6, 1);
          v3 = 1;
          goto LABEL_2;
        }
        ++v4;
      }
      v11 = *(_QWORD ***)(j + 8);
      v12 = j;
      if ( v11 )
      {
        v13 = *v11;
        for ( j = *(_QWORD *)(j + 8); v13; v13 = (_QWORD *)*v13 )
          j = (unsigned __int64)v13;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v12 )
            break;
          v12 = j;
        }
      }
    }
  }
  if ( v3 )
  {
    if ( v4 )
      *(_QWORD *)(qword_140C67A70 + 8 * ((a1 >> 18) & 0x3FFFFF)) = *(_DWORD *)(qword_140C67A70
                                                                             + 8 * ((a1 >> 18) & 0x3FFFFF)) & 0x7FF8 | ((unsigned __int64)(v4 & 0x1FF) << 15) | 5;
    v5 = 2;
  }
  MiUnlockIoPfnTree(v6, v5);
  LOBYTE(v1) = v4 != 0;
  return v1;
}
