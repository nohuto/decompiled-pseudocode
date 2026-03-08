/*
 * XREFs of NtGdiGradientFill @ 0x1C0001410
 * Callers:
 *     <none>
 * Callees:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(int a1, char *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  char *v8; // r9
  __int64 v9; // r12
  unsigned int v10; // eax
  int v11; // r15d
  unsigned int v12; // r15d
  unsigned int v13; // eax
  char *v14; // rbx
  ULONG64 v15; // rcx
  unsigned int v16; // r14d
  ULONG v18; // ecx

  v8 = a2;
  if ( (a6 & 0xFFFFFF00) != 0
    || !a2
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > 0x271000 )
  {
    goto LABEL_32;
  }
  v9 = 16 * a3;
  v10 = 40960000 - v9;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= v10 >> 3 )
    {
      v11 = 8;
      goto LABEL_13;
    }
LABEL_32:
    v18 = 87;
    goto LABEL_33;
  }
  if ( a5 > v10 / 0xCuLL )
    goto LABEL_32;
  v11 = 12;
LABEL_13:
  v12 = a5 * v11;
  v13 = v12 + v9;
  if ( v12 + (unsigned int)v9 >= 0x2710000 )
  {
    v18 = 8;
LABEL_33:
    EngSetLastError(v18);
    return 0LL;
  }
  if ( v13 )
  {
    v14 = (char *)Win32AllocPool(v13, 1886221383LL, 40960000LL, a2);
    v8 = a2;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    if ( (_DWORD)v9 && ((unsigned __int64)&v8[v9] > MmUserProbeAddress || &v8[v9] < v8) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, v8, (unsigned int)v9);
    if ( v12 )
    {
      v15 = (ULONG64)a4 + v12;
      if ( v15 > MmUserProbeAddress || v15 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v14[v9], a4, v12);
    v16 = GreGradientFill(a1, (_DWORD)v14, a3, (int)v9 + (int)v14, a5, (unsigned __int8)a6, v14, &v14[v9]);
    Win32FreePool(v14);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v16;
}
