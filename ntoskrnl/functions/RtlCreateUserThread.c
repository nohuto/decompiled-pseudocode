__int64 __fastcall RtlCreateUserThread(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        HANDLE *a9,
        _OWORD *a10)
{
  __int64 v11; // [rsp+30h] [rbp-38h]

  return RtlpCreateUserThreadEx(a1, a2, a3 == 1, a4, a5, a6, v11, a7, a8, a9, a10);
}
