_BOOL8 __fastcall GreStackExpansionRequired(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  v4 = 0LL;
  v5 = 0LL;
  IoGetStackLimits(&v4, &v5);
  return (unsigned __int64)&v3[-v4] < v1;
}
