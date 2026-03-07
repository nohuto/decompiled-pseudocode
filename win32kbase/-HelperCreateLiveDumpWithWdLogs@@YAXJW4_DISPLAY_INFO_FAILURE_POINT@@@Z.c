__int64 __fastcall HelperCreateLiveDumpWithWdLogs(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 DxgkWin32kInterface; // rax
  char v6; // [rsp+28h] [rbp-20h]

  v2 = (int)a2;
  v3 = (int)a1;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v6 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, char))(DxgkWin32kInterface + 720))(
           403LL,
           2061LL,
           v3,
           v2,
           0LL,
           v6);
}
