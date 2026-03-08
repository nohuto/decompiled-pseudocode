/*
 * XREFs of xxxShowScrollBar @ 0x1C0234CF4
 * Callers:
 *     NtUserShowScrollBar @ 0x1C01DFC80 (NtUserShowScrollBar.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _InitPwSB @ 0x1C00DA0E8 (_InitPwSB.c)
 */

__int64 __fastcall xxxShowScrollBar(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  int v5; // ebp
  int v6; // r9d
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // eax

  v3 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        LOBYTE(v3) = a3 != 0;
        xxxShowWindowEx((__int64)a1, a3 != 0, gdwPUDFlags & 0x10000 | v3 & 0x10000);
        return 1LL;
      }
      if ( v8 == 1 )
        v6 = 3145728;
    }
    else
    {
      v6 = 0x200000;
    }
  }
  else
  {
    v6 = 0x100000;
  }
  v9 = *((_QWORD *)a1 + 5);
  if ( a3 )
  {
    if ( (v6 & *(_DWORD *)(v9 + 28)) != v6 )
    {
      v5 = 1;
      *(_DWORD *)(v9 + 28) |= v6;
    }
    if ( !*((_QWORD *)a1 + 19) )
      InitPwSB((__int64)a1);
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 28);
    if ( (v10 & v6) == 0 )
      return 1LL;
    v5 = 1;
    *(_DWORD *)(v9 + 28) = v10 & ~v6;
  }
  if ( v5 )
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  return 1LL;
}
