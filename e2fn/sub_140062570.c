bool __fastcall sub_140062570(__int64 a1)
{
  char v2; // al

  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 40));
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_1400DF678 + 896))(qword_1400DF6A8, *(_QWORD *)(a1 + 16));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 48), v2 == 0);
  return v2 != 0;
}
