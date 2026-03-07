__int64 __fastcall DrvDxgkConfigureKernelDisplayPolicy(unsigned int a1, unsigned int a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 752))(a1, a2);
}
