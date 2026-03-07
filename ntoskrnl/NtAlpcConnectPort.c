__int64 __fastcall NtAlpcConnectPort(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  return AlpcpConnectPort(a1, a2, 0, a3, a4, a5, 0LL, a6, a7, a8, a9, a10, a11);
}
