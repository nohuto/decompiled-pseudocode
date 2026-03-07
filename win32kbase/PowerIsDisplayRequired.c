__int64 __fastcall PowerIsDisplayRequired(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v9 = 0;
  if ( *(_QWORD *)(v4 + 3040) <= (unsigned __int64)CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 0) )
    return *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3072) > 0;
  return v9;
}
