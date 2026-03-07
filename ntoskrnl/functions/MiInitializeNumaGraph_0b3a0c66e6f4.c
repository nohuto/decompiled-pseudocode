__int64 __fastcall MiInitializeNumaGraph(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rdx
  unsigned int i; // ebx
  unsigned int v4; // r9d
  unsigned int k; // ecx
  __int64 v6; // r8
  unsigned int v7; // eax
  char v8; // dl
  unsigned int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // edi
  unsigned int *v12; // r15
  _QWORD *v13; // r14
  unsigned int j; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  size_t v18; // rdx
  int *p_Base; // r11
  int v20; // r10d
  int v21; // edx
  __int64 v22; // r8
  int Base; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v24[127]; // [rsp+28h] [rbp-420h] BYREF

  result = *(_QWORD *)(a1 + 240);
  v2 = *(unsigned int **)(result + 296);
  if ( v2 )
  {
    v9 = *v2;
    v10 = (unsigned __int16)KeNumberNodes;
    v11 = (unsigned __int16)KeNumberNodes;
    if ( *v2 <= (unsigned __int16)KeNumberNodes )
      v11 = *v2;
    result = v9 + 1;
    v12 = &v2[result];
    if ( v11 <= 0x40 )
    {
      i = 0;
      if ( !v11 )
        goto LABEL_3;
    }
    else
    {
      v11 = 64;
    }
    v13 = v24;
    for ( i = 0; i < v11; ++i )
    {
      for ( j = 0; j < v9; v24[v16] = v15 )
      {
        if ( j >= 0x40 )
          break;
        v15 = *((_WORD *)v12 + i * v9 + j);
        if ( !v15 )
          v15 = 1;
        v16 = 2LL * j;
        LODWORD(v24[v16]) = j++;
      }
      if ( j < v10 )
      {
        v17 = &v24[2 * j];
        do
        {
          if ( j >= 0x40 )
            break;
          *v17 = -1LL;
          *((_DWORD *)v17 - 2) = j++;
          v17 += 2;
        }
        while ( j < v10 );
      }
      v18 = (unsigned __int16)KeNumberNodes;
      *v13 = 0LL;
      qsort(&Base, v18, 0x10uLL, MiNodeCostSort);
      v10 = (unsigned __int16)KeNumberNodes;
      result = 0LL;
      if ( KeNumberNodes )
      {
        p_Base = &Base;
        v20 = i * (unsigned __int16)KeNumberNodes;
        do
        {
          v21 = *p_Base;
          v22 = (unsigned int)(v20 + result);
          p_Base += 4;
          result = (unsigned int)(result + 1);
          *(_DWORD *)(qword_140C65718 + 4 * v22) = v21;
        }
        while ( (unsigned int)result < v10 );
      }
      v13 += 2;
    }
  }
  else
  {
    i = 0;
  }
LABEL_3:
  v4 = (unsigned __int16)KeNumberNodes;
  while ( i < v4 )
  {
    for ( k = i; k < v4 + i; *(_DWORD *)(qword_140C65718 + 4 * v6) = v8 & 0x3F )
    {
      v6 = i * (v4 - 1) + k;
      v7 = k++;
      v8 = v7 % v4;
      result = qword_140C65718;
    }
    ++i;
  }
  return result;
}
