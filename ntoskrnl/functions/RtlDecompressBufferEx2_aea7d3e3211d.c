__int64 __fastcall RtlDecompressBufferEx2(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 5u )
    return 3221226079LL;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, int, __int64, __int64))RtlDecompressBufferProcs[a1])(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
