__int64 __fastcall GreDxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (**)(void))(DxgkWin32kInterface + 464))();
}
