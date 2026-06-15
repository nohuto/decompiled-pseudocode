/*
 * XREFs of sub_1800332A0 @ 0x1800332A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033330 @ 0x180033330 (sub_180033330.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_1800332A0(__int64 a1, float a2, unsigned int a3, float *a4, __int64 a5, char a6)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *(_DWORD *)(a1 + 92);
  v7 = 0LL;
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1 + 440);
    do
    {
      *(float *)(v8 + 4 * v7) = a2;
      v7 = (unsigned int)(v7 + 1);
      v6 = *(_DWORD *)(a1 + 92);
    }
    while ( (unsigned int)v7 < v6 );
  }
  if ( a3 < v6 )
  {
    v14 = 0.0;
    if ( a3 )
    {
      v15 = a3;
      do
      {
        if ( v14 <= *a4 )
          v14 = *a4;
        ++a4;
        --v15;
      }
      while ( v15 );
      v6 = *(_DWORD *)(a1 + 92);
    }
    v16 = 0LL;
    if ( v6 )
    {
      v17 = *(_QWORD *)(a1 + 440);
      do
      {
        *(float *)(v17 + 4 * v16) = v14 * *(float *)(v17 + 4 * v16);
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < *(_DWORD *)(a1 + 92) );
    }
  }
  else
  {
    v9 = 0LL;
    if ( v6 )
    {
      v10 = *(_QWORD *)(a1 + 440);
      do
      {
        *(float *)(v10 + 4 * v9) = a4[v9] * *(float *)(v10 + 4 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(a1 + 92) );
    }
  }
  *(_QWORD *)(a1 + 448) = a5;
  if ( !a6 )
    return 0LL;
  v11 = sub_180033330(a1, 0LL, 0LL);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  sub_18004BD84(retaddr, 1697LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v11);
  return v12;
}
