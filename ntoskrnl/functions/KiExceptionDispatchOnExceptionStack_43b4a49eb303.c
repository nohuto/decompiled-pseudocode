// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall KiExceptionDispatchOnExceptionStack(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  _disable();
  return KxExceptionDispatchOnExceptionStack(a1, a2, a3, a4, a5, a6, a7, (__int64)&retaddr);
}
