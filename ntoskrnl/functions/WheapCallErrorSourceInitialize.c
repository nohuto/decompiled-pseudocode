__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 result; // rax
  __int64 (__fastcall *ErrorSourceFunction)(_QWORD, _QWORD); // r8

  if ( *(_DWORD *)(a1 + 40) == 16 )
  {
    ErrorSourceFunction = (__int64 (__fastcall *)(_QWORD, _QWORD))WheapGetErrorSourceFunction(a1, 1LL, 0LL);
    result = 0LL;
    if ( ErrorSourceFunction )
      result = ErrorSourceFunction(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 124));
  }
  else
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))WheapGetErrorSourceFunction(a1, 1LL, 0LL);
    if ( v4 )
      result = v4(a2, a1 + 96, *(_QWORD *)(a1 + 56), v4);
    else
      result = 3221225474LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
