__int64 __fastcall PowerUpdateBrightnessLevels(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 result; // rax

  v4 = *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3116);
  *(_DWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3088) = v4;
  v13 = *(_DWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 3116);
  *(_DWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 3092) = v13;
  v22 = *(_DWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 3132);
  *(_DWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 3096) = v22;
  v31 = *(_DWORD *)(SGDGetUserSessionState(v28, v27, v29, v30) + 3132);
  result = SGDGetUserSessionState(v33, v32, v34, v35);
  *(_DWORD *)(result + 3100) = v31;
  return result;
}
