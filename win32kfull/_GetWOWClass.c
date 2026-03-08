/*
 * XREFs of _GetWOWClass @ 0x1C01BF328
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01D5400 (NtUserGetWOWClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetClassPtr @ 0x1C00ECC80 (GetClassPtr.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, size_t *a2)
{
  _QWORD *ClassPtr; // rdi
  struct tagTHREADINFO *v5; // rsi
  __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v8; // rcx
  unsigned __int16 v9[256]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  v5 = PtiCurrentShared(a1);
  if ( RtlStringCchCopyW(v9, 0x100uLL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v9);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *((_QWORD *)v5 + 53), a1);
  if ( ClassPtr )
  {
    result = (_QWORD *)*ClassPtr;
    v8 = *((_QWORD *)v5 + 57);
    if ( v8 == *(_QWORD *)(*ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v8 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411);
  return 0LL;
}
