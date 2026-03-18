/*
 * XREFs of _GetWOWClass @ 0x1C01E38C8
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01F6E90 (NtUserGetWOWClass.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C0070980 (GetClassPtr.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v6; // rdx
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v9; // rcx
  char v10[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (int)RtlStringCchCopyW(v10, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v10);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 424), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v9 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( v9 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v9 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411LL, v6);
  return 0LL;
}
