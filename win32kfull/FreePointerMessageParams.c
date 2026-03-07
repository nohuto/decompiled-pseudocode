void __fastcall FreePointerMessageParams(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( *(_DWORD *)(a1 + 24) != 595 )
  {
    if ( *(_DWORD *)(a1 + 96) )
    {
      v2 = SGDGetUserSessionState(a1);
      v3 = 3LL;
    }
    else
    {
      v2 = SGDGetUserSessionState(a1);
      v3 = 2LL;
    }
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v2 + 3424), *(_QWORD *)(a1 + 40), v3, a1);
  }
}
