__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 i; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  __int64 j; // rbx
  _DWORD *v13; // rdx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  __int64 k; // rbx
  _DWORD *v17; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-28h]

  *(_OWORD *)P = 0LL;
  v21 = 0LL;
  v7 = 0;
  v8 = dword_140C3D48C;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      v10 = *(_DWORD **)(a1 + 8 * v8 + 64);
      P[i] = v10;
    }
    else
    {
      v11 = *(_DWORD **)(a1 + 8 * i + 64);
      v10 = v11;
      P[i] = v11;
      if ( (_DWORD)i == 2 && !v11 )
      {
        P[i] = P[1];
        v10 = P[1];
      }
    }
    v7 += 8;
    if ( v10 )
    {
      ++*v10;
      v7 += v10[1];
    }
  }
  if ( a3 < v7 )
  {
    v15 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v13 = P[j];
      if ( v13 )
      {
        *a2 = v13[2];
        a2[1] = v13[1];
        v14 = v13[1];
        memmove(a2 + 2, v13 + 3, v14);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v14 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v14 + 8);
    }
    *a4 = v7;
    v15 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v17 = P[k];
    if ( v17 )
    {
      if ( (*v17)-- == 1 )
        ExFreePoolWithTag(v17, 0x74655350u);
    }
  }
  return v15;
}
