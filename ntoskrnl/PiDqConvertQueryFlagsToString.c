/*
 * XREFs of PiDqConvertQueryFlagsToString @ 0x140959144
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x1402E1820 (RtlStringCbCopyExW.c)
 */

NTSTATUS __fastcall PiDqConvertQueryFlagsToString(unsigned int a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  wchar_t *v6; // r10
  unsigned int v7; // edi
  NTSTATUS result; // eax
  unsigned int v9; // ebx
  size_t v10; // rdx
  size_t cbDest; // [rsp+30h] [rbp-10h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+38h] [rbp-8h] BYREF

  v6 = a2;
  v7 = a1;
  result = 0;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  v9 = 2;
  if ( a3 >= 2 )
    *a2 = 0;
  ppszDestEnd = a2;
  v10 = a3;
  cbDest = a3;
  if ( (a1 & 1) != 0 )
  {
    v7 = a1 & 0xFFFFFFFE;
    v9 = 54;
    if ( a3 >= 0x36 )
    {
      result = RtlStringCbCopyExW(v6, a3, L"DevQueryFlagUpdateResults ", &ppszDestEnd, &cbDest, 0x400u);
      if ( result < 0 )
        return result;
      v6 = ppszDestEnd;
      v10 = cbDest;
    }
  }
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    v9 += 52;
    if ( v9 <= a3 )
    {
      result = RtlStringCbCopyExW(v6, v10, L"DevQueryFlagAllProperties ", &ppszDestEnd, &cbDest, 0x400u);
      if ( result < 0 )
        return result;
      v6 = ppszDestEnd;
      v10 = cbDest;
    }
  }
  if ( (v7 & 4) != 0 )
  {
    v7 &= ~4u;
    v9 += 42;
    if ( v9 <= a3 )
    {
      result = RtlStringCbCopyExW(v6, v10, L"DevQueryFlagLocalize ", &ppszDestEnd, &cbDest, 0x400u);
      if ( result < 0 )
        return result;
      v6 = ppszDestEnd;
      v10 = cbDest;
    }
  }
  if ( !v7
    || (v9 += 24, v9 > a3)
    || (result = RtlStringCbCopyExW(v6, v10, L"<more flags>", &ppszDestEnd, &cbDest, 0x400u), result >= 0) )
  {
    if ( a4 )
      *a4 = v9;
    if ( v9 < a3 )
      return -1073741789;
  }
  return result;
}
