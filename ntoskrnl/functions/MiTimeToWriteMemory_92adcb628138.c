unsigned __int64 __fastcall MiTimeToWriteMemory(unsigned int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rax

  v5 = *(_QWORD *)(376LL * a1 + qword_140C65720 + 368);
  v6 = 1;
  if ( a3 != 3 )
    v6 = a3;
  v7 = v6;
  if ( a2 == 3 )
  {
    v8 = 0LL;
    v9 = (unsigned int *)(32 * v7 + v5 + 56);
    while ( 1 )
    {
      v10 = *((_QWORD *)v9 + 3);
      if ( v10 )
        break;
      ++v8;
      v9 += 24;
      if ( v8 >= 3 )
        goto LABEL_11;
    }
  }
  else
  {
    v9 = (unsigned int *)(v5 + 32 * (v6 + 2LL * a2 + a2) + 56);
    v10 = *((_QWORD *)v9 + 3);
    if ( !v10 )
    {
LABEL_11:
      v12 = 1216LL;
      v11 = 0x200000LL;
      return a5 * v12 / v11;
    }
  }
  v11 = *((_QWORD *)v9 + 1) * *v9;
  v12 = *(_QWORD *)(v10 + 8LL * a4);
  if ( !v11 )
    goto LABEL_11;
  return a5 * v12 / v11;
}
