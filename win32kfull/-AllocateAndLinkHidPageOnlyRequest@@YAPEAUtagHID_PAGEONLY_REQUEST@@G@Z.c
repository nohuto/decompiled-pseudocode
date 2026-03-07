struct tagHID_PAGEONLY_REQUEST *__fastcall AllocateAndLinkHidPageOnlyRequest(__int16 a1)
{
  struct tagHID_PAGEONLY_REQUEST *result; // rax
  __int64 v3; // rcx
  struct tagHID_PAGEONLY_REQUEST *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  result = (struct tagHID_PAGEONLY_REQUEST *)Win32AllocPoolZInit(24LL, 1919447893LL);
  v4 = result;
  if ( result )
  {
    *((_WORD *)result + 8) = a1;
    v5 = SGDGetUserSessionState(v3) + 392;
    v6 = *(_QWORD *)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *((_QWORD *)v4 + 1) = v5;
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)v5 = v4;
    return v4;
  }
  return result;
}
