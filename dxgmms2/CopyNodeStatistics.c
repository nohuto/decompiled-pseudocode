__int64 __fastcall CopyNodeStatistics(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r10
  _DWORD *v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 12);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = a2 - a1;
  *(_DWORD *)(a1 + 8) = v4;
  v6 = 16LL;
  v7 = 4LL;
  do
  {
    *v2 = *(_DWORD *)((char *)v2 + v5);
    ++v2;
    --v6;
  }
  while ( v6 );
  v8 = (_DWORD *)(a1 + 76);
  v9 = 8LL;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v5);
    v8[1] = *(_DWORD *)((char *)v8 + v5 + 4);
    v8 += 2;
    --v9;
  }
  while ( v9 );
  v10 = (_DWORD *)(a1 + 140);
  do
  {
    *v10 = *(_DWORD *)((char *)v10 + v5 + 8);
    v10[1] = *(_DWORD *)((char *)v10 + v5 + 12);
    v10[3] = *(_DWORD *)((char *)v10 + v5 + 20);
    result = *(unsigned int *)((char *)v10 + v5 + 16);
    v10[2] = result;
    v10 += 4;
    --v7;
  }
  while ( v7 );
  return result;
}
