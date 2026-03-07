__int64 __fastcall CVisual::NotifyVisualTreeListeners(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi

  result = CPtrArrayBase::GetCount((CPtrArrayBase *)(a1 + 24));
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    v6 = (unsigned int)result;
    do
    {
      result = (__int64)CPtrArrayBase::operator[]((__int64 *)(a1 + 24), v5);
      if ( result != *(_QWORD *)(a1 + 88) )
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)result + 72LL))(result, a2, a1);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
