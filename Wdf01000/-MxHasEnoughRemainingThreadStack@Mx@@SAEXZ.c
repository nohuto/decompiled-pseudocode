bool __fastcall Mx::MxHasEnoughRemainingThreadStack()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  IoGetStackLimits(&v2, &v1);
  return (unsigned __int64)&v1 - v2 >= 0x3000;
}
