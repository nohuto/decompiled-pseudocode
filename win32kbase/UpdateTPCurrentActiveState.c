__int64 __fastcall UpdateTPCurrentActiveState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  char v14; // bl
  int v15; // ebx
  __int64 result; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = -__CFSHR__(*(_DWORD *)(v4 + 16820), 4);
  UpdateMouseConnectionState(v7, v6, v8, v9);
  v13 = *(unsigned int *)(v4 + 16820);
  v14 = v13;
  if ( (v13 & 1) != 0 )
  {
    v15 = v13 | 8;
  }
  else
  {
    v13 = (unsigned int)v13 & 0xFFFFFFF7;
    v15 = v13 | ((unsigned __int8)(~v14 & 0x10) >> 1);
  }
  *(_DWORD *)(v4 + 16820) = v15;
  *(_DWORD *)(SGDGetUserSessionState(v13, v10, v11, v12) + 544) = (unsigned __int8)(v15 & 8) >> 3;
  CPTPProcessor::EnvironmentChanged();
  result = v5 != 0;
  if ( (*(_DWORD *)(v4 + 16820) & 8u) >> 3 != (_DWORD)result )
    return UpdateInputSettingWnfState(175LL);
  return result;
}
