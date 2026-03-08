/*
 * XREFs of ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02D539C
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

STACKMEMOBJ *__fastcall STACKMEMOBJ::STACKMEMOBJ(
        STACKMEMOBJ *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = Win32AllocPool(184LL, 1684817479LL, a3, a4);
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
    *(_DWORD *)(v10 + 8) = 184;
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL) = 0;
    if ( v9 == 1 )
    {
      v13 = Win32AllocPool(184LL, 1684817479LL, v11, v12);
      *((_QWORD *)this + 3) = v13;
      if ( !v13 )
        return this;
      *(_DWORD *)(v13 + 8) = 184;
      *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 0;
    }
    *(_DWORD *)this = v7;
    *((_DWORD *)this + 1) = 32;
    if ( (_DWORD)v7 )
    {
      v14 = (_DWORD *)Win32AllocPool(v7, 1684817479LL, v11, v12);
      *((_QWORD *)this + 4) = v14;
      if ( v14 )
      {
        *((_QWORD *)this + 1) = v14;
        *v14 = v8;
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
