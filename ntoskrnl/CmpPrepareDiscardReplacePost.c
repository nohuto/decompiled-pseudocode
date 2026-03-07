__int64 __fastcall CmpPrepareDiscardReplacePost(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // eax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  ULONG_PTR v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  CmpReferenceKeyControlBlock(a1);
  v6 = CmpCloneToUnbackedKcb(a1, &v10);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD **)(a3 + 24);
    v8 = (_QWORD *)(v10 + 120);
    if ( *v7 != a3 + 16 )
      __fastfail(3u);
    *v8 = a3 + 16;
    v8[1] = v7;
    *v7 = v8;
    *(_QWORD *)(a3 + 24) = v8;
    v6 = 0;
  }
  *(_DWORD *)(a3 + 8) = v6;
  LOBYTE(v3) = v6 < 0;
  return v3;
}
