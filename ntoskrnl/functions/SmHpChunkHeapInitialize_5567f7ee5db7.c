unsigned int __fastcall SmHpChunkHeapInitialize(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r9d
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int result; // eax

  memset((void *)a1, 0, 0x238uLL);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a1 + 288);
  *(_DWORD *)(a1 + 256) = 1;
  v5 = 16LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 544) = -1;
  v7 = -v6 & (v6 + 23);
  v8 = (unsigned int)(4096 - v7) / *(_DWORD *)a2;
  *(_DWORD *)(a1 + 548) = v8;
  _BitScanReverse(&v8, v8);
  *(_DWORD *)(a1 + 264) = v8;
  v9 = *(_DWORD *)(a1 + 548);
  if ( !v9 || ((v9 - 1) & v9) != 0 )
    ++*(_DWORD *)(a1 + 264);
  v10 = *(_DWORD *)(a1 + 264);
  v11 = 0xFFFFFFFF >> v10;
  *(_DWORD *)(a1 + 268) = (1 << v10) - 1;
  v12 = (unsigned int)(v9 + 15) >> 4;
  _BitScanReverse(&result, v12);
  *(_DWORD *)(a1 + 260) = v11;
  *(_DWORD *)(a1 + 280) = v7;
  *(_DWORD *)(a1 + 556) = v9;
  *(_DWORD *)(a1 + 552) = result;
  if ( !v12 || (result = v12 - 1, ((v12 - 1) & v12) != 0) )
    ++*(_DWORD *)(a1 + 552);
  return result;
}
