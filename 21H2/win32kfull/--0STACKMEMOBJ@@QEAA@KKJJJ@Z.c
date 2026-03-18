/*
 * XREFs of ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02B7854
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02B8670 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

STACKMEMOBJ *__fastcall STACKMEMOBJ::STACKMEMOBJ(STACKMEMOBJ *this, unsigned int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v7 = a2;
  v10 = Win32AllocPool(184LL, 1684817479LL);
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = 184;
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL) = 0;
    if ( a3 == 1 )
    {
      v11 = Win32AllocPool(184LL, 1684817479LL);
      *((_QWORD *)this + 3) = v11;
      if ( !v11 )
        return this;
      *(_DWORD *)(v11 + 8) = 184;
      *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 0;
    }
    *(_DWORD *)this = v7;
    *((_DWORD *)this + 1) = 32;
    if ( (_DWORD)v7 )
    {
      v12 = (_DWORD *)Win32AllocPool(v7, 1684817479LL);
      *((_QWORD *)this + 4) = v12;
      if ( v12 )
      {
        *((_QWORD *)this + 1) = v12;
        *v12 = a4;
        *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) = 1;
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) = 32;
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL) = *((_QWORD *)this + 1);
        *(_DWORD *)(*((_QWORD *)this + 1) + 24LL) = a5;
        *(_DWORD *)(*((_QWORD *)this + 1) + 28LL) = a6;
      }
    }
    else
    {
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  return this;
}
