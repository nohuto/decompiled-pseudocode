/*
 * XREFs of _GetKeyState @ 0x1C00992D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 */

__int16 __fastcall GetKeyState(unsigned int a1, __int64 a2)
{
  char v2; // bl
  int v3; // r8d
  __int16 v4; // r9
  __int16 result; // ax

  v2 = a1;
  if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL, a2);
    return 0;
  }
  else
  {
    v3 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2)
                            + *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432)
                            + 228);
    v4 = _bittest(&v3, (unsigned __int8)(2 * (v2 & 3) + 1));
    result = v4 | 0xFF80;
    if ( !_bittest(&v3, (unsigned __int8)(2 * (v2 & 3))) )
      return v4;
  }
  return result;
}
