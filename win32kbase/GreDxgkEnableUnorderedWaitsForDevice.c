__int64 __fastcall GreDxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rdx

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  LOBYTE(v5) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(DxgkWin32kInterface + 424))(a1, v5);
}
