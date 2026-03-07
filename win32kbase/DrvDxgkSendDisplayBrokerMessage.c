__int64 __fastcall DrvDxgkSendDisplayBrokerMessage(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD, __int64))(DxgkWin32kInterface
                                                                                               + 760))(
           a1,
           a2,
           0LL,
           a4,
           a5,
           0LL,
           a7);
}
