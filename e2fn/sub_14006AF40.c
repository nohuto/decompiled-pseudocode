__int64 __fastcall sub_14006AF40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = &off_1400D8BC0;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 8) = 0xA5A5A5A5A5000047uLL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_14006AFE8(a1, a5);
  sub_14006B044(a1, a4);
  return a1;
}
