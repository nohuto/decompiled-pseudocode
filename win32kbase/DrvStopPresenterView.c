char __fastcall DrvStopPresenterView(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DxgkWin32kInterface; // rax

  if ( !*(_QWORD *)(DxDdGetDxgkWin32kInterface(a1, a2) + 528) )
    return 0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3, v2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 528))(0LL, 0LL);
}
