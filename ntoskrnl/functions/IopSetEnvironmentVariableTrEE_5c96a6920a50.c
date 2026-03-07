__int64 __fastcall IopSetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *Src,
        unsigned int Size,
        int a7)
{
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 Pool2; // rax
  __int64 v13; // rdi
  int v14; // ebx
  int v15; // ecx
  int v17; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-30h] BYREF

  v17 = 0;
  v18 = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a3[v10] );
  v11 = 2 * v10 + 2;
  Pool2 = ExAllocatePool2(256LL, v11 + Size + 36, 2035511113LL);
  v13 = Pool2;
  if ( Pool2 )
  {
    v15 = a7 | 6;
    *(_OWORD *)(Pool2 + 4) = *a4;
    if ( (a7 & 1) == 0 )
      v15 = a7;
    *(_DWORD *)(Pool2 + 20) = v15;
    *(_DWORD *)Pool2 = 36;
    memmove((void *)(Pool2 + 36), a3, v11);
    *(_DWORD *)(v13 + 32) = v11 + 36;
    *(_QWORD *)(v13 + 24) = Size;
    memmove((void *)(v13 + v11 + 36), Src, Size);
    v14 = IopIssueTrEERequest(2, a1, a2, v13, v11 + Size + 36, (__int64)&v18, 8u, 8u, &v17);
    if ( v14 >= 0 && v18 )
      v14 = IopEfiStatusToNTSTATUS(v18);
    ExFreePoolWithTag((PVOID)v13, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v14;
}
