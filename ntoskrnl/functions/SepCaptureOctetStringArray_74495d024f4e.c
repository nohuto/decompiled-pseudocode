__int64 __fastcall SepCaptureOctetStringArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // r15
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int *Pool2; // rbx
  unsigned int i; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // edi
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  char *v17; // r15
  unsigned int j; // edi
  __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v6 = 16LL * a2;
  v7 = 0xFFFFFFFFLL;
  if ( v6 <= 0xFFFFFFFF )
    v7 = (unsigned int)v6;
  result = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)v7, 1950442835LL);
    if ( Pool2 )
    {
      if ( (_DWORD)v7 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v7] > 0x7FFFFFFF0000LL || &Src[v7] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(Pool2, Src, (unsigned int)v7);
      for ( i = 0; ; ++i )
      {
        v11 = v7;
        if ( i >= a2 )
          break;
        v12 = v7 + Pool2[4 * i + 2];
        v13 = -1;
        if ( v12 >= (unsigned int)v7 )
          v13 = v7 + Pool2[4 * i + 2];
        LODWORD(v7) = v13;
        v14 = v12 < v11 ? 0xC0000095 : 0;
        if ( v12 < v11 )
          goto LABEL_20;
      }
      v15 = (_QWORD *)ExAllocatePool2(256LL, (unsigned int)v7, 1950442835LL);
      v16 = v15;
      if ( !v15 )
      {
        v14 = -1073741670;
LABEL_20:
        ExFreePoolWithTag(Pool2, 0);
        return v14;
      }
      memmove(v15, Pool2, v6);
      v17 = (char *)&v16[v6 / 8];
      for ( j = 0; j < a2; ++j )
      {
        v19 = Pool2[4 * j + 2];
        if ( (_DWORD)v19 )
        {
          v20 = *(_QWORD *)&Pool2[4 * j];
          if ( v20 + v19 > 0x7FFFFFFF0000LL || v20 + v19 < v20 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(v17, *(const void **)&Pool2[4 * j], Pool2[4 * j + 2]);
        v16[2 * j] = v17;
        v17 += Pool2[4 * j + 2];
      }
      ExFreePoolWithTag(Pool2, 0);
      *a4 = v16;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
