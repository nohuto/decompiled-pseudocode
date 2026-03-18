/*
 * XREFs of _GetKeyState @ 0x1C002CF00
 * Callers:
 *     NtUserGetKeyState @ 0x1C002CDC0 (NtUserGetKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int16 __fastcall GetKeyState(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // di
  __int16 v4; // bx
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v7; // r8d
  __int16 result; // ax

  v3 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2, a3);
    return 0;
  }
  else
  {
    HIBYTE(v4) = 0;
    v5 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
    v7 = *(unsigned __int8 *)(((unsigned __int64)v3 >> 2) + *(_QWORD *)(v5 + 432) + 228);
    LOBYTE(v4) = _bittest(&v7, (unsigned __int8)(2 * (v3 & 3) + 1));
    result = (unsigned __int8)v4 | 0xFF80;
    if ( !_bittest(&v7, (unsigned __int8)(2 * (v3 & 3))) )
      return v4;
  }
  return result;
}
