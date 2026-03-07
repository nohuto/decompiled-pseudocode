__int64 __fastcall CmpDestroySecurityCache(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  result = *(unsigned int *)(a1 + 1872);
  v2 = (_QWORD *)(a1 + 1888);
  v3 = 0;
  if ( (_DWORD)result )
  {
    do
    {
      v5 = *(_QWORD *)(*v2 + 16LL * v3 + 8);
      v6 = *(_QWORD *)(v5 + 8);
      if ( *(_QWORD *)(v6 + 8) != v5 + 8 || (v7 = *(_QWORD **)(v5 + 16), *v7 != v5 + 8) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v5, (unsigned int)(*(_DWORD *)(v5 + 24) + 32));
      result = *(unsigned int *)(a1 + 1872);
      ++v3;
    }
    while ( v3 < (unsigned int)result );
    if ( (_DWORD)result )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*v2, (unsigned int)(16 * *(_DWORD *)(a1 + 1876)));
  }
  *(_DWORD *)(a1 + 1872) = 0;
  *v2 = 0LL;
  *(_DWORD *)(a1 + 1876) = 0;
  return result;
}
