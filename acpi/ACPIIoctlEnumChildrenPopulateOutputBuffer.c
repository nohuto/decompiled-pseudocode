__int64 __fastcall ACPIIoctlEnumChildrenPopulateOutputBuffer(_DWORD *a1, unsigned int a2, int *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rbp
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *v12; // r14
  _BYTE *v13; // r12
  int v14; // esi
  _BYTE *v15; // r13
  __int64 v16; // rdi
  unsigned int v17; // edi
  __int64 v19; // [rsp+60h] [rbp+18h]

  v4 = 0;
  *a3 = 0;
  if ( *(_QWORD *)(a4 + 16) <= 0xFFFFFFFFuLL )
  {
    v9 = *(unsigned int *)(a4 + 16);
    memset(a1, 0, a2);
    *a1 = 1198089537;
    v10 = *(_DWORD *)(a4 + 24) + 8 * (v9 + 1);
    if ( a2 >= v10 )
    {
      v11 = *(_QWORD *)(a4 + 8);
      v12 = a1 + 2;
      v13 = *(_BYTE **)(a4 + 32);
      v14 = 8;
      v15 = *(_BYTE **)(v11 + 32);
      a1[1] = v9;
      if ( (_DWORD)v9 )
      {
        v19 = v9;
        do
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v13[v16] );
          v17 = v16 + 1;
          memmove(v12 + 2, v13, v17);
          v12[1] = v17;
          if ( *v15 == 49 )
            *v12 = 1;
          v14 += v17 + 8;
          v12 = (_DWORD *)((char *)v12 + v17 + 8);
          v13 += v17;
          ++v15;
          --v19;
        }
        while ( v19 );
      }
      *a3 = v14;
    }
    else
    {
      v4 = -2147483643;
      a1[1] = v10;
      *a3 = 20;
    }
  }
  else
  {
    return (unsigned int)-1072431089;
  }
  return v4;
}
