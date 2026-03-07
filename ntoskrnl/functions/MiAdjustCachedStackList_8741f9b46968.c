__int64 __fastcall MiAdjustCachedStackList(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  int v4; // ebp
  __int64 result; // rax
  _BYTE *v9; // rdi
  int v10; // r8d
  int v11; // edx
  __int64 v12; // r8
  int v13; // ecx
  int v14; // r9d
  unsigned int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // ecx

  v4 = 3;
  if ( !a4 )
    v4 = a3;
  if ( *(_BYTE *)(a2 + 29) )
  {
    MiRemoveNonIdealCachedStacks((PSLIST_HEADER)a2);
    *(_BYTE *)(a2 + 29) = 0;
  }
  result = (unsigned int)(*(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 24));
  if ( (_DWORD)result )
  {
    v13 = *(_DWORD *)(a2 + 16);
    v14 = 16;
    if ( (unsigned int)result >= 0x10 || v13 < 16 )
    {
      v14 = 4;
      v15 = *(_DWORD *)(a2 + 16);
      v16 = v13 >> 31;
    }
    else
    {
      v15 = *(_DWORD *)(a2 + 16);
      v16 = v13 >> 31;
      if ( v13 < 64 )
        v14 = 8;
    }
    v17 = __SPAIR64__(v16, v15) / v14;
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 20);
    v9 = (_BYTE *)(a2 + 28);
    if ( !v17 )
      v17 = 1;
    v18 = v17 + v13;
    result = 256LL;
    if ( v18 > 256 )
      v18 = 256;
    *(_DWORD *)(a2 + 16) = v18;
  }
  else
  {
    v9 = (_BYTE *)(a2 + 28);
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v10 = *(_DWORD *)(a2 + 16);
      v11 = v10 / 20;
      if ( !(v10 / 20) )
        v11 = v10 != 0;
      v12 = (unsigned int)(v10 - v11);
      if ( (a4 || !v4) && (int)v12 < 5 )
        v12 = 5LL;
      *(_DWORD *)(a2 + 16) = v12;
      result = MiPruneCachedStackList(a1, a2, v12, a4);
    }
  }
  *v9 = 0;
  return result;
}
