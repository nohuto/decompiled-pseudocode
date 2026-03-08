/*
 * XREFs of HalpQueryResources @ 0x1408229CC
 * Callers:
 *     HalpDispatchPnp @ 0x140821D00 (HalpDispatchPnp.c)
 * Callees:
 *     HalpQueryAcpiResourceRequirements @ 0x14080BBE4 (HalpQueryAcpiResourceRequirements.c)
 *     HalConvertDeviceIdtToIrql @ 0x140822B00 (HalConvertDeviceIdtToIrql.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpQueryResources(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  __int64 result; // rax
  _DWORD *v6; // rbp
  _DWORD *Pool2; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int16 v11; // ax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  P = 0LL;
  if ( *(_DWORD *)(v2 + 32) == 129 )
  {
    result = HalpQueryAcpiResourceRequirements((unsigned int **)&P);
    if ( (int)result < 0 )
      return result;
    v6 = P;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(20 * *((_DWORD *)P + 9) + 39), 1886150984LL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      ExFreePoolWithTag(v6, 0);
      return 3221225626LL;
    }
    Pool2[2] = -1;
    *Pool2 = 1;
    Pool2[1] = 15;
    Pool2[3] = 65537;
    Pool2[4] = v6[9];
    if ( v6[9] )
    {
      do
      {
        v9 = 8LL * v3;
        v10 = 5LL * v3;
        LOBYTE(v8[v10 + 5]) = BYTE1(v6[v9 + 10]);
        BYTE1(v8[v10 + 5]) = BYTE2(v6[v9 + 10]);
        HIWORD(v8[v10 + 5]) = v6[v9 + 11];
        ++v3;
        LOWORD(v8[v10 + 6]) = (unsigned __int8)HalConvertDeviceIdtToIrql((unsigned int)v6[v9 + 12]);
        v8[v10 + 7] = v6[v9 + 12];
        v11 = HIWORD(v6[v9 + 14]);
        *(_QWORD *)&v8[v10 + 8] = -1LL;
        HIWORD(v8[v10 + 6]) = v11;
      }
      while ( v3 < v6[9] );
    }
    *a2 = v8;
    ExFreePoolWithTag(v6, 0);
  }
  else if ( *(_DWORD *)(v2 + 32) != 130 && (unsigned int)(*(_DWORD *)(v2 + 32) - 131) >= 2 )
  {
    return 3221225659LL;
  }
  return 0LL;
}
