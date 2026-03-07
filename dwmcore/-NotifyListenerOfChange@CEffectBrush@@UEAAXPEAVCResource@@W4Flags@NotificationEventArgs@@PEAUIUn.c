__int64 __fastcall CEffectBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v9; // rcx

  v5 = a3;
  if ( a3 == 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 80LL) + 48LL);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) > 1 && a4 != a1 )
      v5 = 6;
  }
  return CBrush::NotifyListenerOfChange(a1, a2, v5, a1);
}
