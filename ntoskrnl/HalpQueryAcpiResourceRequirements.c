__int64 __fastcall HalpQueryAcpiResourceRequirements(unsigned int **a1)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // edi
  unsigned int v9; // ebp
  unsigned int *Pool2; // rax
  char *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]

  v16 = 0LL;
  v17 = 0;
  v2 = HalpInterruptModel() - 1;
  if ( v2 && (v13 = v2 - 1) != 0 && (v14 = v13 - 1) != 0 && (v15 = v14 - 1) != 0 && v15 != 4092 )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    result = HalpInterruptGetIrtInfo((int *)&v16);
    if ( (int)result < 0 )
      return result;
    v4 = 205;
    v5 = 205 - HIDWORD(v16) / (unsigned int)HalQueryMaximumProcessorCount();
  }
  if ( SecondaryIcServicesEnabled )
  {
    v6 = v4;
    v7 = 256;
  }
  else
  {
    v6 = -1;
    v7 = 0;
  }
  v8 = v4 + v7 - v5;
  v9 = 32 * (v8 - 1) + 72;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, v9, 1097621832LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2] = -1;
  *Pool2 = v9;
  Pool2[7] = 1;
  Pool2[1] = 15;
  Pool2[8] = 65537;
  Pool2[9] = v8;
  if ( v8 )
  {
    v11 = (char *)Pool2 + 42;
    v12 = v8;
    do
    {
      if ( v5 >= v6 && v5 < v7 )
        v5 = v7;
      *(_DWORD *)(v11 + 6) = v5;
      *(_DWORD *)(v11 + 10) = v5++;
      *(_WORD *)(v11 - 1) = 258;
      v11 += 32;
      --v12;
    }
    while ( v12 );
  }
  *a1 = Pool2;
  return 0LL;
}
