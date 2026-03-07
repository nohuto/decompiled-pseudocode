__int64 __fastcall sub_1400995A0(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 888));
    _InterlockedExchange((volatile __int32 *)(a1 + 656), 1);
    *(_BYTE *)(a1 + 640) = 1;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 80LL))(*(_QWORD *)(a1 + 456));
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 896));
  }
  return result;
}
