_BOOL8 __fastcall IsCddCddRemoteSessionFilteringAllowed(__int64 a1)
{
  __int64 v1; // rcx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  result = 0LL;
  if ( !*(_DWORD *)(v1 + 1220) )
    return gRemoteSessionUseWddm == 0;
  return result;
}
