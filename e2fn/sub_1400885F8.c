__int64 __fastcall sub_1400885F8(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1400D9958;
  result = a1;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 8) = *a2;
  return result;
}
