__int64 __fastcall DrvChangeD3RequestsState(__int64 a1)
{
  char v1; // di
  __int64 DxgkWin32kInterface; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rbx

  v1 = a1;
  if ( !gProtocolType )
  {
    v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    for ( i = *(_QWORD *)(v5 + 1264); i; i = *(_QWORD *)(i + 128) )
    {
      if ( (*(_DWORD *)(i + 160) & 0x800000) != 0 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6, v5);
        LOBYTE(v4) = v1;
        (*(void (__fastcall **)(_QWORD, __int64))(DxgkWin32kInterface + 664))(*(_QWORD *)(i + 232), v4);
      }
    }
  }
  return 0LL;
}
