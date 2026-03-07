__int64 __fastcall VfRemoveContext(unsigned __int16 *a1)
{
  int v2; // r14d
  unsigned int v4; // r8d
  __int64 ContextPointer; // rax
  volatile __int64 *v6; // rsi
  volatile signed __int32 *v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // edx

  v2 = -1073741275;
  if ( !ViVerifierEnabled )
    return 3221225473LL;
  if ( !(unsigned __int8)ViIsContextIdValid(*a1, a1[1]) )
    return 3221225485LL;
  ContextPointer = ViGetContextPointer(*((_QWORD *)a1 + 1), v4);
  v6 = (volatile __int64 *)ContextPointer;
  if ( !ContextPointer )
    return 3221225659LL;
  if ( !(unsigned __int8)ViLockContextPointer(ContextPointer) )
    return (unsigned int)v2;
  v7 = (volatile signed __int32 *)*v6;
  v8 = a1[1];
  if ( *(unsigned __int16 **)(*v6 + 8 * v8 + 8) != a1
    || (*(_QWORD *)&v7[2 * v8 + 2] = 0LL, v2 = 0, _InterlockedExchangeAdd(v7 + 1, 0xFFFFFFFF) != 1) )
  {
    ViUnlockContextPointer(v6);
    if ( v2 >= 0 && !(v9 + _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, v9)) )
      (*((void (__fastcall **)(unsigned __int16 *))a1 + 2))(a1);
    return (unsigned int)v2;
  }
  _InterlockedExchange64(v6, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) == 1 )
    (*((void (__fastcall **)(unsigned __int16 *, __int64))a1 + 2))(a1, 0xFFFFFFFFLL);
  ViFreeContextTable((PVOID)v7);
  return 0LL;
}
