int __fastcall ClosePointerDeviceProcessEvents(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( *(_QWORD *)(SGDGetUserSessionState(a1) + 16336) )
  {
    v2 = SGDGetUserSessionState(v1);
    NtClose(*(HANDLE *)(v2 + 16336));
  }
  v3 = SGDGetUserSessionState(v1);
  if ( *(_QWORD *)(v3 + 16344) )
  {
    v5 = SGDGetUserSessionState(v4);
    LODWORD(v3) = NtClose(*(HANDLE *)(v5 + 16344));
  }
  return v3;
}
