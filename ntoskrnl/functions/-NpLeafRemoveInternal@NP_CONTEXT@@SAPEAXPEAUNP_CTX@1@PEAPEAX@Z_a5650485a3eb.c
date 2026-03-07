unsigned __int64 __fastcall NP_CONTEXT::NpLeafRemoveInternal(struct NP_CONTEXT::NP_CTX *a1, void **a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rdi

  v2 = *(_QWORD *)a1;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v3 = (unsigned __int64)*a2 & 0xFFFFFFFFFFFFF000uLL;
    v4 = (_DWORD *)((v3 + 11) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( *(_QWORD *)v4 && (*(_QWORD *)v4 & 2) == 0 )
    {
      (*(void (**)(void))(v2 + 32))();
      *v4 |= 2u;
      --*(_DWORD *)(v2 + 48);
    }
  }
  else
  {
    --*(_DWORD *)(v2 + 44);
    (*(void (__fastcall **)(struct NP_CONTEXT::NP_CTX *, _QWORD))(v2 + 32))(a1, *a2);
    return 0LL;
  }
  return v3;
}
