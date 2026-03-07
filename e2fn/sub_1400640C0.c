__int64 __fastcall sub_1400640C0(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
                    qword_1400DF6A8,
                    a1,
                    off_1400DF2A0);
  _InterlockedIncrement64((volatile signed __int64 *)(v1 + 400));
  return (***(__int64 (__fastcall ****)(_QWORD))(v1 + 376))(*(_QWORD *)(v1 + 376));
}
