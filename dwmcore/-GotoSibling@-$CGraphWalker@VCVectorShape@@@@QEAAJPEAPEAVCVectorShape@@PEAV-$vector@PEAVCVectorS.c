__int64 __fastcall CGraphWalker<CVectorShape>::GotoSibling(__int64 a1, __int64 *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  int v6; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( v4
    && (*(_DWORD *)(a1 + 28) == 1
     && (v6 = *(_DWORD *)(a1 + 24), v6 != -1)
     && v6 + 1 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 288LL))(v4)
     || !*(_DWORD *)(a1 + 28) && (v6 = *(_DWORD *)(a1 + 24)) != 0) )
  {
    v8 = v6 - 1;
    v9 = v6 + 1;
    if ( *(_DWORD *)(a1 + 28) != 1 )
      v9 = v8;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 296LL))(*(_QWORD *)(a1 + 16), v9);
    *(_QWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 24) = v9;
    *a2 = v10;
  }
  else
  {
    return 1;
  }
  return v2;
}
