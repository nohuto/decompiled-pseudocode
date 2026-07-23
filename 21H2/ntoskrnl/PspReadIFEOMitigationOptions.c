/*
 * XREFs of PspReadIFEOMitigationOptions @ 0x1406B0A94
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PspValidateMitigationOptions @ 0x14060DEFC (PspValidateMitigationOptions.c)
 *     PspReadOptionsMapFromIFEO @ 0x1406B0B78 (PspReadOptionsMapFromIFEO.c)
 */

__int64 __fastcall PspReadIFEOMitigationOptions(__int64 a1, __m128i *a2)
{
  __int64 result; // rax
  __m128i v4; // xmm2
  __int64 v5; // xmm3_8
  __m128i v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __m128i v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  result = PspReadOptionsMapFromIFEO(a1, L"MitigationOptions", &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    v5 = v9;
    v6 = v8;
    v7 = v9;
    result = PspValidateMitigationOptions(&v6, 1);
    if ( (int)result >= 0 )
    {
      *a2 = v4;
      a2[1].m128i_i64[0] = v5;
    }
  }
  return result;
}
