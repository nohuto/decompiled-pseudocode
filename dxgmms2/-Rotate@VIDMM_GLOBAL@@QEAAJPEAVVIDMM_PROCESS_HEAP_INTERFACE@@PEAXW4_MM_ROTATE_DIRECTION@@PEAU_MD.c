__int64 __fastcall VIDMM_GLOBAL::Rotate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v12; // rcx

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64, int, __int64))(*(_QWORD *)a2 + 48LL))(
             a2,
             a1,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  if ( (int)result >= 0 )
  {
    v12 = *(_QWORD *)(a10 + 120);
    if ( !v12 )
      v12 = *(_QWORD *)(a10 + 200);
    if ( a4 <= 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 512));
    else
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 512));
  }
  return result;
}
