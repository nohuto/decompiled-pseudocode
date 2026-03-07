__int64 __fastcall SeAccessCheckFromStateEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  return SeAccessCheckWithHint(a1, a4, a5, a6, a7, a8, a9, a10);
}
