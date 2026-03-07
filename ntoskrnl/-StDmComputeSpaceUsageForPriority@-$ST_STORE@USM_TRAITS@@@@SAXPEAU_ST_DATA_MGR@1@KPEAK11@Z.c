_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v5; // r14
  unsigned int v6; // r10d
  int v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // r9d
  int v14; // r15d
  unsigned int v15; // r8d
  __int64 v16; // rcx
  _DWORD *result; // rax

  v5 = a2;
  v6 = 0;
  v10 = *(_DWORD *)(a1 + 8LL * a2 + 1824);
  v11 = *(_DWORD *)(a1 + 8LL * a2 + 1828);
  if ( *(_BYTE *)(a1 + 776) )
    v12 = v10 << *(_DWORD *)(a1 + 812);
  else
    v12 = v11;
  v13 = *(_DWORD *)(a1 + 816);
  v14 = *(_DWORD *)(a1 + 820);
  v15 = v10 * (v13 - v14 + 1) - v11;
  if ( v10 * (v13 - v14 + 1) >= v11 && v15 >= v13 )
  {
    v16 = *(unsigned int *)(a1 + 16 * (v5 + 78));
    if ( (_DWORD)v16 != -1 )
      v15 = v14 + (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v16) & 0x1FFF) - v13 + v15 - 1;
    if ( v15 >= v13 )
      v6 = v15;
  }
  *a3 += v10;
  *a4 += v12;
  result = a5;
  *a5 += v6;
  return result;
}
