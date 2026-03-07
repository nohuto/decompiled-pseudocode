char __fastcall NeedsUpdateKeyboardLEDs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl

  v8 = 0;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12672) )
    return (*(_DWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 12616) & 7) != 0;
  return v8;
}
