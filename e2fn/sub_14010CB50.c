__int64 __fastcall sub_14010CB50(__int64 a1, __int64 a2, __int64 a3)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 64));
  LOBYTE(a3) = 1;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(qword_1400DF678 + 2560))(
           qword_1400DF6A8,
           *(_QWORD *)(a1 + 16),
           a3);
}
