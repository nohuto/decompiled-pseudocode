__int64 __fastcall RemoveKeyboardLayoutFile(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _UNKNOWN ***v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 result; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *i; // rax

  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13840);
  if ( v5 == a1[4] )
  {
    v9 = SGDGetUserSessionState(v6, v5, v7, v8);
    v6 = KbdTablesFallback;
    *(_QWORD *)(v9 + 13840) = KbdTablesFallback;
  }
  v11 = *(_QWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 13848);
  if ( v11 == a1[6] )
    *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 13848) = 0LL;
  if ( a1 == *(_QWORD **)(SGDGetUserSessionState(v11, v10, v12, v13) + 13864) )
  {
    v18 = a1[2];
    result = SGDGetUserSessionState(v15, v14, v16, v17);
    *(_QWORD *)(result + 13864) = v18;
  }
  else
  {
    v20 = *(_QWORD **)(SGDGetUserSessionState(v15, v14, v16, v17) + 13864);
    for ( i = *(_QWORD **)(*(_QWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 13864) + 16LL);
          a1 != i;
          i = (_QWORD *)i[2] )
    {
      v20 = i;
    }
    result = i[2];
    v20[2] = result;
  }
  return result;
}
