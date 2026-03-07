__int64 __fastcall ConvertToBuffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  _BYTE *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  _BYTE *v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h]
  __int128 v13; // [rsp+30h] [rbp-28h]
  _BYTE *v14; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  WORD1(v12) = 3;
  if ( *(_WORD *)(a1 + 2) == 1 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = 8;
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 16);
      v8 = 4;
    }
    DWORD2(v13) = v8;
    v9 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, v8);
    v14 = v9;
    if ( v9 )
    {
      v10 = v8;
      do
      {
        *v9++ = v7;
        v7 >>= 8;
        --v10;
      }
      while ( v10 );
      goto LABEL_14;
    }
    return (unsigned int)-1073741670;
  }
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 2) - 2 < 2 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( !v5 )
    {
LABEL_14:
      FreeDataBuffs(a2, 1u);
      *(_OWORD *)a2 = v12;
      *(_OWORD *)(a2 + 16) = v13;
      *(_QWORD *)(a2 + 32) = v14;
      return v2;
    }
    DWORD2(v13) = *(_DWORD *)(a1 + 24);
    v6 = (_BYTE *)HeapAlloc(gpheapGlobal, 1381258056, v5);
    v14 = v6;
    if ( v6 )
    {
      memmove(v6, *(const void **)(a1 + 32), v5);
      goto LABEL_14;
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)-1072431095;
}
