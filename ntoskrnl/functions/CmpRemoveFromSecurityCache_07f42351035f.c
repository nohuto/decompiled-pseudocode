char __fastcall CmpRemoveFromSecurityCache(__int64 a1, int a2)
{
  char result; // al
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdx
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  result = CmpFindSecurityCellCacheIndex(a1, a2, &v9);
  if ( result )
  {
    v4 = v9;
    v5 = 16LL * v9;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1888) + v5 + 8);
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v7 + 8) != v6 + 8 || (v8 = *(_QWORD **)(v6 + 16), *v8 != v6 + 8) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v6, (unsigned int)(*(_DWORD *)(v6 + 24) + 32));
    result = (unsigned __int8)memmove(
                                (void *)(v5 + *(_QWORD *)(a1 + 1888)),
                                (const void *)(*(_QWORD *)(a1 + 1888) + 16LL * (v4 + 1)),
                                16LL * (*(_DWORD *)(a1 + 1872) - v4 - 1));
    --*(_DWORD *)(a1 + 1872);
  }
  return result;
}
