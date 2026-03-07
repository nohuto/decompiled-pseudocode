__int64 __fastcall sub_140099560(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 656), 0, 1);
  if ( (_DWORD)result )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 880));
    return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1400DF8F8)(qword_1400DF700, *(_QWORD *)(a1 + 360));
  }
  return result;
}
