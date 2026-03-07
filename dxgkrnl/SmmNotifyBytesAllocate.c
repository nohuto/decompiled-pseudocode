void __fastcall SmmNotifyBytesAllocate(_QWORD *a1, __int64 a2, __int64 a3)
{
  a1[160] += a2;
  a1[161] -= a2;
  a1[163] += a2 - a3;
  a1[162] += a3;
}
