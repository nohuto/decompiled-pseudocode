__int64 __fastcall Xp10ScatteredCopy(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  size_t v7; // r9
  size_t v8; // r8
  __int64 v9; // rbx

  v6 = 0;
  do
  {
    v7 = a3 - v6;
    v8 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    if ( v8 >= *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 )
      v8 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    if ( v7 <= v8 )
      v8 = (unsigned int)v7;
    v9 = (unsigned int)v8;
    memmove(*(void **)a1, *(const void **)a2, v8);
    *(_QWORD *)a1 += v9;
    v6 += v9;
    *(_QWORD *)a2 += v9;
  }
  while ( v6 != a3
       && (*(_QWORD *)a1 != *(_QWORD *)(a1 + 8) || (unsigned int)Xp10ScatteredNextBuffer(a1))
       && (*(_QWORD *)a2 != *(_QWORD *)(a2 + 8) || (unsigned int)Xp10ScatteredNextBuffer(a2)) );
  return v6;
}
