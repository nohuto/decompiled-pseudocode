__int64 __fastcall GreLddmProcessLockScreen(unsigned int a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  return (*(__int64 (__fastcall **)(_QWORD))(DxgkWin32kInterface + 584))(a1);
}
