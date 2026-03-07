__int64 __fastcall UserSetDelayedSwitchAction(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = SGDGetUserGdiSessionState(a1);
  *(_DWORD *)(result + 16) = v1;
  return result;
}
