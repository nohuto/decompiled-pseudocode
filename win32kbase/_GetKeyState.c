__int16 __fastcall GetKeyState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  __int16 v5; // bx
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v8; // r8d
  __int16 result; // ax

  v4 = a1;
  if ( (unsigned int)a1 >= 0x100 )
  {
    UserSetLastError(87);
    return 0;
  }
  else
  {
    HIBYTE(v5) = 0;
    if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v6 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
    v8 = *(unsigned __int8 *)(((unsigned __int64)v4 >> 2) + *(_QWORD *)(v6 + 432) + 236);
    LOBYTE(v5) = _bittest(&v8, (unsigned __int8)(2 * (v4 & 3) + 1));
    result = (unsigned __int8)v5 | 0xFF80;
    if ( !_bittest(&v8, (unsigned __int8)(2 * (v4 & 3))) )
      return v5;
  }
  return result;
}
