__int64 __fastcall HalStopProfileInterrupt(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpProfileInterface[2])(a1, 0LL);
}
