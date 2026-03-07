unsigned __int64 __fastcall HalpHvEpReadMsr(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  if ( (a1 & 0x100000000LL) != 0 )
    return __readmsr(a2);
  v5 = 0LL;
  v3 = a1 & 0x7FFFFFFF;
  if ( !a3 || !(unsigned __int8)HalpHvLpReadMcaStatusMsr(v3, a2, a3, &v5) )
    HalpHvLpReadMultipleMsr(v3, 1LL, &v6, &v5);
  return v5;
}
