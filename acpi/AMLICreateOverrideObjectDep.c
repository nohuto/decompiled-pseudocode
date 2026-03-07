__int64 __fastcall AMLICreateOverrideObjectDep(_BYTE *Src, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  _BYTE *v7; // rbp
  unsigned int i; // ecx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  unsigned int *v11; // rax
  unsigned int *v12; // r15
  __int64 v13; // rdi
  unsigned int *v14; // r14
  __int64 v15; // rax
  void *v16; // rax
  __int128 v17; // xmm1
  unsigned int *v18; // xmm0_8
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h]
  unsigned int *v22; // [rsp+40h] [rbp-28h]

  v3 = 0;
  v4 = 0;
  v7 = Src;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 && Src[a2 - 1] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = 0; i < a2; i += v10 + 1 )
    {
      v9 = &v7[i];
      if ( !*v9 )
        break;
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      ++v4;
    }
    WORD1(v20) = 4;
    DWORD2(v21) = 40 * v4 + 48;
    v11 = (unsigned int *)NewObjData(gpheapGlobal, &v20);
    v22 = v11;
    v12 = v11;
    if ( v11 )
    {
      LODWORD(v13) = 0;
      *v11 = v4;
      if ( v4 )
      {
        v14 = v11 + 8;
        while ( 1 )
        {
          *((_WORD *)v14 - 11) = 2;
          v15 = -1LL;
          do
            ++v15;
          while ( v7[v15] );
          *v14 = v15 + 1;
          v16 = (void *)NewObjData(gpheapGlobal, v14 - 6);
          *((_QWORD *)v14 + 1) = v16;
          if ( !v16 )
            break;
          memmove(v16, v7, *v14);
          LODWORD(v13) = v13 + 1;
          v7 += *v14;
          v14 += 10;
          if ( (unsigned int)v13 >= v4 )
            goto LABEL_17;
        }
        v3 = -1073741670;
        while ( (_DWORD)v13 )
        {
          v13 = (unsigned int)(v13 - 1);
          FreeObjData(&v12[8 * v13 + 2 + 2 * (unsigned int)v13]);
        }
        FreeObjData(&v20);
      }
      else
      {
LABEL_17:
        v17 = v21;
        *(_OWORD *)a3 = v20;
        v18 = v22;
        *(_OWORD *)(a3 + 16) = v17;
        *(_QWORD *)(a3 + 32) = v18;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
