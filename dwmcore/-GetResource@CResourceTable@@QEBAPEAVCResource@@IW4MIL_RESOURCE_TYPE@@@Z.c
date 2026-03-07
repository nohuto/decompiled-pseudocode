__int64 __fastcall CResourceTable::GetResource(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  if ( a2
    && a2 < *(_DWORD *)(a1 + 28)
    && (v3 = *(_QWORD *)(a1 + 40), *(_DWORD *)(*(_DWORD *)(a1 + 24) * a2 + v3))
    && (v4 = v3 + *(_DWORD *)(a1 + 24) * a2, (v5 = *(_QWORD *)(v4 + 8)) != 0)
    && (a3 == 147 || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, a3)) )
  {
    return *(_QWORD *)(v4 + 8);
  }
  else
  {
    return 0LL;
  }
}
