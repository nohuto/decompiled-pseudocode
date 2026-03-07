__int64 __fastcall sub_1400E60F0(__int64 a1)
{
  __int64 v2; // rax

  sub_140002D68();
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    sub_1400A1C34(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), 4u, 0xEu, 0x10u, (__int64)&unk_1400D41C0);
  sub_140003CCC();
  sub_1400022DC();
  v2 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 944))(qword_1400DF6A8, a1);
  return sub_1400E6170(v2);
}
