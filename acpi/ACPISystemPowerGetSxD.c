__int64 __fastcall ACPISystemPowerGetSxD(__int64 a1, int a2, int *a3)
{
  int v3; // ebx
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  *a3 = 0;
  if ( a2 < 1 )
    return 3221225523LL;
  if ( (*(_QWORD *)(a1 + 8) & 0xA000000000000LL) != 0 )
    return 3221225524LL;
  v8 = ACPIGet(a1, *(_DWORD *)&aS3wS4wS1wS2wSw[4 * a2 + 20], -1878786046, 0LL, 0, 0LL, 0LL, (__int64)&v10, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772
      && a2 == 2
      && (*(_QWORD *)(a1 + 8) & 0xA00000000000LL) != 0
      && (*(_QWORD *)(a1 + 8) & 0x2000000LL) != 0 )
    {
      *a3 = 2;
      return 0;
    }
  }
  else
  {
    if ( (unsigned __int8)v10 < 4u )
      v3 = DevicePowerStateTranslation[(unsigned __int8)v10];
    *a3 = v3;
  }
  return v9;
}
