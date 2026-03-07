__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13840) = v5;
  if ( *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13896) != a1 )
    *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 13896) = a1;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 13880) = v14;
  LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 13888) = v14;
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL);
  result = SGDGetUserSessionState(v21, v20, v22, v23);
  *(_QWORD *)(result + 13848) = v19;
  return result;
}
