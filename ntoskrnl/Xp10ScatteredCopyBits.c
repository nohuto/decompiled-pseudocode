/*
 * XREFs of Xp10ScatteredCopyBits @ 0x1409C52B8
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x1409C0EF0 (RtlDecompressBuffer2Xp10.c)
 * Callees:
 *     Xp10BitCopy @ 0x1409C1198 (Xp10BitCopy.c)
 *     Xp10ScatteredNextBuffer @ 0x1409C5514 (Xp10ScatteredNextBuffer.c)
 */

__int64 __fastcall Xp10ScatteredCopyBits(__int64 a1, int *a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  unsigned int v5; // r13d
  unsigned __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // r12d
  unsigned __int8 **v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int8 *v19; // r8
  unsigned __int64 v20; // rdx
  __int64 result; // rax

  v3 = a3;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)a2 < (unsigned __int64)a3 )
    v3 = *a2;
  if ( a2[4] )
  {
    while ( 1 )
    {
      v8 = 8LL * *(_QWORD *)(a1 + 8) - 8LL * *(_QWORD *)a1 - (v5 & 7);
      if ( v8 >= (unsigned int)a2[4] )
        v8 = (unsigned int)a2[4];
      if ( v3 - v4 <= v8 )
        LODWORD(v8) = v3 - v4;
      v9 = v8;
      Xp10BitCopy(*(char **)a1, v5 & 7, (unsigned __int8 *)a2 + 8, 0, (unsigned int)v8);
      v4 += v9;
      v10 = ((v9 + v5) >> 3) - (v5 >> 3);
      v5 += v9;
      *(_QWORD *)a1 += v10;
      *((_QWORD *)a2 + 1) >>= v9;
      v11 = a2[4] == v9;
      a2[4] -= v9;
      if ( v11 )
        break;
      if ( v4 == v3 || !(unsigned int)Xp10ScatteredNextBuffer(a1) )
        goto LABEL_24;
    }
  }
  v12 = 0;
  v13 = (unsigned __int8 **)(a2 + 6);
  do
  {
    v14 = 8LL * *(_QWORD *)(a1 + 8) - 8LL * *(_QWORD *)a1 - (v5 & 7);
    v15 = v12 & 7;
    if ( v14 >= 8LL * *((_QWORD *)a2 + 4) - 8 * (__int64)*v13 - v15 )
      v14 = 8LL * *((_QWORD *)a2 + 4) - 8LL * (_QWORD)*v13 - v15;
    if ( v3 - v4 <= v14 )
      LODWORD(v14) = v3 - v4;
    v16 = v14;
    Xp10BitCopy(*(char **)a1, v5 & 7, *v13, v12 & 7, (unsigned int)v14);
    v4 += v16;
    v17 = ((v16 + v5) >> 3) - (v5 >> 3);
    v5 += v16;
    *(_QWORD *)a1 += v17;
    v18 = ((v16 + v12) >> 3) - (v12 >> 3);
    v12 += v16;
    *v13 += v18;
  }
  while ( v4 != v3
       && (*(_QWORD *)a1 != *(_QWORD *)(a1 + 8) || (unsigned int)Xp10ScatteredNextBuffer(a1))
       && (*v13 != *((unsigned __int8 **)a2 + 4) || (unsigned int)Xp10ScatteredNextBuffer(a2 + 6)) );
  if ( (v12 & 7) != 0 )
  {
    v19 = *v13;
    a2[4] = 8 - (v12 & 7);
    v20 = (unsigned __int64)*v19 >> v12;
    *v13 = v19 + 1;
    *((_QWORD *)a2 + 1) = v20;
  }
LABEL_24:
  result = v4;
  *(_QWORD *)a2 -= v4;
  return result;
}
