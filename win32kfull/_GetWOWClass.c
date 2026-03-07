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
