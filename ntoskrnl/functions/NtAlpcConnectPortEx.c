__int64 __fastcall NtAlpcConnectPortEx(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  return AlpcpConnectPort(a1, 0, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11);
}
