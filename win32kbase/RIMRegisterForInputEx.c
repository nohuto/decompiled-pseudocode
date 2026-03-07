__int64 __fastcall RIMRegisterForInputEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return RIMRegisterForInputWithCallbacks(a1, 0LL, 0LL, 0LL, gpWin32kDriverObject, a2, a3, a4, a5, a6, 0LL, 0, a7);
}
