__int64 __fastcall sub_140064690(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(qword_1400DF678 + 2552))(
           qword_1400DF6A8,
           *(_QWORD *)(a1 + 16),
           -10000LL * a2);
}
