/*
 * XREFs of DxgkCreateDoDPrimarySection @ 0x1C02B8110
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

PVOID __fastcall DxgkCreateDoDPrimarySection(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v4; // eax
  __int64 v5; // rbx
  PVOID v7; // rcx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  Object = 0LL;
  if ( v2 > a2 )
    a2 = v2;
  *(_DWORD *)a1 = a2;
  v9 = a2;
  v4 = MmCreateSection(&Object, 0LL, 0LL, &v9, 4, 0x8000000, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    v7 = Object;
    *(_QWORD *)(a1 + 8) = Object;
    ObfReferenceObject(v7);
    return Object;
  }
  else
  {
    v5 = v4;
    WdLogSingleEntry1(2LL, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create section object for DoD primary backing store (Status = 0x%I64x).",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
