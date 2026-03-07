void __fastcall GreDxgkPreSessionDisconnected(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v5; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v3, v2);
  LOBYTE(v5) = a1;
  (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 368))(v5);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
}
