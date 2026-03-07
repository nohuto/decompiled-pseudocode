__int64 __fastcall sub_140095E50(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 800));
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 88LL))(*(_QWORD *)(a1 + 456));
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 808));
  }
  return result;
}
