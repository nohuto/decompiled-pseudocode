__int64 __fastcall IopWriteDriverList(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  PVOID *v4; // rbx
  __int64 v5; // rsi
  unsigned int *v6; // rdi
  int v7; // ebp
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx

  v4 = (PVOID *)PsLoadedModuleList;
  v5 = a1 + a3;
  v6 = (unsigned int *)(a1 + a4);
  v7 = a1;
  v8 = 0;
  while ( 1 )
  {
    if ( v4 == &PsLoadedModuleList )
      return 0LL;
    if ( !KiIsAddressRangeValid((__int64)v4, 160LL)
      || !KiIsAddressRangeValid((__int64)v4[12], *((unsigned __int16 *)v4 + 44)) )
    {
      break;
    }
    v9 = *((unsigned __int16 *)v4 + 44) >> 1;
    *v6 = v9;
    memmove(v6 + 1, v4[12], 2 * v9);
    *((_WORD *)v6 + *v6 + 2) = 0;
    v10 = v8++;
    v11 = v5 + 144 * v10;
    *(_OWORD *)(v11 + 8) = *(_OWORD *)v4;
    *(_OWORD *)(v11 + 24) = *((_OWORD *)v4 + 1);
    *(_OWORD *)(v11 + 40) = *((_OWORD *)v4 + 2);
    *(_OWORD *)(v11 + 56) = *((_OWORD *)v4 + 3);
    *(_OWORD *)(v11 + 72) = *((_OWORD *)v4 + 4);
    *(_OWORD *)(v11 + 88) = *((_OWORD *)v4 + 5);
    *(_OWORD *)(v11 + 104) = *((_OWORD *)v4 + 6);
    *(_OWORD *)(v11 + 120) = *((_OWORD *)v4 + 7);
    *(_QWORD *)(v11 + 136) = v4[16];
    *(_DWORD *)(v11 + 136) = *((_DWORD *)v4 + 39);
    *(_DWORD *)(v11 + 72) = *((_DWORD *)v4 + 38);
    *(_DWORD *)v11 = (_DWORD)v6 - v7;
    v4 = (PVOID *)*v4;
    v6 = (unsigned int *)(((unsigned __int64)v6 + 2 * *v6 + 13) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 3221225473LL;
}
