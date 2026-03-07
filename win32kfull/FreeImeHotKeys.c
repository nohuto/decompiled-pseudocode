__int64 __fastcall FreeImeHotKeys(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  while ( 1 )
  {
    result = SGDGetUserSessionState(a1);
    if ( !*(_QWORD *)(result + 12728) )
      break;
    v1 = *(__int64 **)(SGDGetUserSessionState(v6) + 12728);
    v2 = *v1;
    v3 = SGDGetUserSessionState(v1);
    Win32FreePool(*(void **)(v3 + 12728));
    *(_QWORD *)(SGDGetUserSessionState(v4) + 12728) = v2;
  }
  return result;
}
