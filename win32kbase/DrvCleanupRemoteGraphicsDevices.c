__int64 __fastcall DrvCleanupRemoteGraphicsDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  __int64 DxgkWin32kInterface; // rax

  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    WdLogSingleEntry0(1LL);
  result = SGDGetSessionState(v4);
  v7 = *(_QWORD *)(result + 24);
  for ( i = *(_QWORD *)(v7 + 1344); i; i = *(_QWORD *)(i + 128) )
  {
    if ( (*(_DWORD *)(i + 160) & 0x4000000) != 0 )
    {
      if ( *(_QWORD *)(i + 296) )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v7, v6);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(DxgkWin32kInterface + 400))(
          *(_QWORD *)(i + 272),
          0LL,
          *(_QWORD *)(i + 280));
        *(_QWORD *)(i + 272) = 0LL;
        result = 0LL;
        *(_QWORD *)(i + 288) = 0LL;
        *(_QWORD *)(i + 296) = 0LL;
      }
    }
  }
  return result;
}
