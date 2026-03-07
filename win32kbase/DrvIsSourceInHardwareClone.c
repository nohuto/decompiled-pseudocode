__int64 __fastcall DrvIsSourceInHardwareClone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DxgkWin32kInterface; // rax

  v4 = a2;
  if ( !*(_QWORD *)(DxDdGetDxgkWin32kInterface(a1, a2) + 576) )
    return 3221225659LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7, v6);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(DxgkWin32kInterface + 576))(a1, v4, a3);
}
