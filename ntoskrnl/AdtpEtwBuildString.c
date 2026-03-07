__int64 __fastcall AdtpEtwBuildString(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned int v7; // ecx
  unsigned __int16 v8; // dx
  __int64 v9; // rbp
  unsigned int v10; // edi
  bool v11; // zf
  _WORD *Pool2; // rbx
  __int64 v13; // rax
  __int64 result; // rax

  v7 = *a2;
  v8 = a2[1];
  v9 = v7 >> 1;
  v10 = v9 + 1;
  v11 = v8 == (unsigned __int16)v7;
  if ( v8 > (unsigned __int16)v7 )
  {
    Pool2 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !Pool2[v9] )
    {
LABEL_8:
      *(_QWORD *)a1 = Pool2;
      *(_DWORD *)(a1 + 8) = 2 * v10;
      result = 0LL;
      *(_DWORD *)(a1 + 12) = 0;
      return result;
    }
    v11 = v8 == (unsigned __int16)v7;
  }
  if ( v11 && v10 > 1 )
  {
    Pool2 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !Pool2[(unsigned int)(v9 - 1)] )
    {
      v10 = v7 >> 1;
      goto LABEL_8;
    }
  }
  v13 = (unsigned int)*a4;
  if ( (unsigned int)v13 + v10 < 0x400 )
  {
    Pool2 = (_WORD *)(a3 + 2 * v13);
    *a4 = v13 + v10;
LABEL_7:
    memmove(Pool2, *((const void **)a2 + 1), *a2);
    Pool2[v9] = 0;
    goto LABEL_8;
  }
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL * v10, 1799447891LL);
  if ( Pool2 )
  {
    *a5 = 1;
    goto LABEL_7;
  }
  return 3221225495LL;
}
