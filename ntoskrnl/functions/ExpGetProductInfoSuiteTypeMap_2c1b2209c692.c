char __fastcall ExpGetProductInfoSuiteTypeMap(int a1, __int64 a2)
{
  char v2; // r9
  __int64 v3; // rax
  char *i; // r8
  __int64 v5; // xmm0_8
  int v6; // eax

  v2 = 0;
  v3 = 0LL;
  for ( i = ExpProductInfoSuiteTypeMap; *(_DWORD *)i != a1; i += 12 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x33 )
      return v2;
  }
  v2 = 1;
  v5 = *(_QWORD *)&ExpProductInfoSuiteTypeMap[12 * v3];
  v6 = *(_DWORD *)&ExpProductInfoSuiteTypeMap[12 * v3 + 8];
  *(_QWORD *)a2 = v5;
  *(_DWORD *)(a2 + 8) = v6;
  return v2;
}
