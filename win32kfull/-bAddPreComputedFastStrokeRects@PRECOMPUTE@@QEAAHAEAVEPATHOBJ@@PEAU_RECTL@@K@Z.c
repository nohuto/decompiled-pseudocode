__int64 __fastcall PRECOMPUTE::bAddPreComputedFastStrokeRects(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct _RECTL *a3,
        __int64 a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbp
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rsi
  const void *v11; // rdx
  void *v12; // rcx
  __int64 result; // rax
  void *v14; // rcx

  v4 = *((_DWORD *)a2 + 15);
  v6 = (unsigned int)a4;
  if ( v4 + (unsigned int)a4 <= v4 )
  {
    if ( v4 )
    {
      *((_DWORD *)a2 + 15) = 0;
      v14 = (void *)*((_QWORD *)a2 + 8);
      goto LABEL_14;
    }
    return 0LL;
  }
  v8 = 16LL * (v4 + (unsigned int)a4);
  if ( v8 > 0xFFFFFFFF
    || !(_DWORD)v8
    || (v9 = (char *)Win32AllocPool((unsigned int)v8, 1734632775LL, a3, a4), (v10 = v9) == 0LL) )
  {
    if ( *((_DWORD *)a2 + 15) )
    {
      *((_DWORD *)a2 + 15) = 0;
      v14 = (void *)*((_QWORD *)a2 + 8);
LABEL_14:
      Win32FreePool(v14);
      *((_QWORD *)a2 + 8) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v11 = (const void *)*((_QWORD *)a2 + 8);
  if ( v11 )
    memmove(v9, v11, 16LL * *((unsigned int *)a2 + 15));
  memmove(&v10[16 * *((unsigned int *)a2 + 15)], a3, 16 * v6);
  v12 = (void *)*((_QWORD *)a2 + 8);
  if ( v12 )
    Win32FreePool(v12);
  *((_DWORD *)a2 + 15) += v6;
  result = 1LL;
  *((_QWORD *)a2 + 8) = v10;
  return result;
}
