__int64 __fastcall TransformVectorWithInputTargetPrecedence(const struct tagWND *a1, int a2, int a3)
{
  _BYTE *v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  _BYTE v17[64]; // [rsp+30h] [rbp-88h] BYREF

  memset_0(v17, 0, sizeof(v17));
  v6 = 0LL;
  v7 = 0;
  v9 = SGDGetUserSessionState(v8);
  result = GetTopLevelWindow(*(_QWORD *)(v9 + 15904));
  v11 = result;
  if ( result )
  {
    v12 = *((_QWORD *)a1 + 2);
    if ( result == GetTopLevelWindow((__int64)a1) )
    {
      v14 = *(_QWORD *)(v12 + 672);
      if ( v14 && *(_QWORD *)(v14 + 16) == v11 )
      {
        if ( (unsigned int)GetMonitorTransform(*(_QWORD *)(v14 + 208), a1, (__int64)v17) )
          v6 = v17;
        goto LABEL_11;
      }
    }
    else
    {
      v15 = *(_QWORD *)(v12 + 432);
      if ( !v15 )
        return v7;
      v16 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v13) + 15904) + 16LL);
      if ( v15 != *(_QWORD *)(v16 + 432) || *(_QWORD *)(v15 + 112) != *(_QWORD *)(SGDGetUserSessionState(v16) + 15904) )
        return v7;
    }
    v6 = *(_BYTE **)(v11 + 216);
LABEL_11:
    v7 = 1;
    if ( v6 )
      TransformVector((_DWORD)v6, a2, a2 + 4, a3, 1);
    return v7;
  }
  return result;
}
