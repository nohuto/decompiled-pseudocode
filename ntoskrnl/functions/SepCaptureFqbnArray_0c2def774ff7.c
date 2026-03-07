__int64 __fastcall SepCaptureFqbnArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v5; // r12
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned __int16 *Pool2; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  char *v16; // rsi
  unsigned int i; // edi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx

  v5 = 24LL * a2;
  v6 = 0xFFFFFFFFLL;
  if ( v5 <= 0xFFFFFFFF )
    v6 = (unsigned int)v5;
  v7 = -1073741675;
  result = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, (unsigned int)v6, 1950442835LL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( (_DWORD)v6 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v6] > 0x7FFFFFFF0000LL || &Src[v6] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, Src, (unsigned int)v6);
    if ( ((v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
      goto LABEL_19;
    v10 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
    v11 = 0LL;
    v12 = a2;
    while ( (unsigned int)v11 < a2 )
    {
      v13 = v10 + Pool2[12 * v11 + 4];
      if ( v13 < (unsigned int)v10 )
        goto LABEL_19;
      v10 = v13;
      v11 = (unsigned int)(v11 + 1);
    }
    v14 = (_QWORD *)ExAllocatePool2(256LL, v10, 1950442835LL);
    v15 = v14;
    if ( !v14 )
    {
      v7 = -1073741670;
LABEL_19:
      ExFreePoolWithTag(Pool2, 0);
      return v7;
    }
    memmove(v14, Pool2, v5);
    v16 = (char *)(((unsigned __int64)&v15[v5 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    for ( i = 0; i < v12; ++i )
    {
      v18 = Pool2[12 * i + 4];
      if ( (_WORD)v18 )
      {
        v19 = *(_QWORD *)&Pool2[12 * i + 8];
        if ( (v19 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v19 + v18 > 0x7FFFFFFF0000LL || v19 + v18 < v19 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(v16, *(const void **)&Pool2[12 * i + 8], Pool2[12 * i + 4]);
      v15[3 * i + 2] = v16;
      v16 += Pool2[12 * i + 4];
      v12 = a2;
    }
    ExFreePoolWithTag(Pool2, 0);
    *a4 = v15;
    return 0LL;
  }
  return result;
}
