/*
 * XREFs of ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C020E618
 * Callers:
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C020E1FC (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C00243C5 (wcsncmp_0.c)
 *     ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x1C020E79C (-ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C039524C (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C0395448 (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareBlockListCondition(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned __int8 *a6)
{
  bool v10; // zf
  unsigned int v11; // edi
  __int64 result; // rax
  __int64 v13; // rax
  const unsigned __int16 *v14; // rbx
  __int64 v15; // rax
  unsigned __int8 v16[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v19[4]; // [rsp+40h] [rbp-20h] BYREF

  v16[0] = 0;
  *a6 = 0;
  if ( wcsncmp_0(a1, L"Vendor=", 7uLL) )
    goto LABEL_22;
  v10 = a1[7] == 42;
  v17 = 7;
  v11 = 9;
  if ( v10 )
  {
    if ( a1[8] == 35 )
    {
      v13 = 9LL;
LABEL_7:
      v14 = &a1[v13];
      if ( !wcsncmp_0(v14, L"Device=", 7uLL) )
      {
        v10 = v14[7] == 42;
        v17 = 7;
        if ( v10 )
        {
          if ( v14[8] != 35 )
            goto LABEL_19;
        }
        else
        {
          result = ParseAndCompareHexValue(v14, a3, v16, &v17);
          if ( (int)result < 0 || !v16[0] )
            return result;
          v11 = v17;
        }
        v14 += v11;
        if ( !wcsncmp_0(v14, L"Version=", 8uLL) )
        {
          v10 = v14[8] == 42;
          v17 = 8;
          if ( !v10 )
          {
            v18[0] = 0;
            if ( (int)ParseIntArray(a4, v19, 4u, v18) < 0 )
            {
              WdLogSingleEntry1(3LL, a4);
              return 3221225485LL;
            }
            result = ParseAndCompareIntArrays(v14, v19, 4u, v16, &v17);
            if ( (int)result < 0 || !v16[0] )
              return result;
            v15 = v17;
            goto LABEL_14;
          }
          if ( v14[9] == 35 )
          {
            v15 = 10LL;
LABEL_14:
            v14 += v15;
            if ( !wcsncmp_0(v14, L"Model=", 6uLL) )
            {
              v10 = v14[6] == 42;
              v17 = 6;
              if ( !v10 )
              {
                v18[0] = a5 / 0x3E8u;
                v18[1] = a5 % 0x3E8u / 0x64;
                result = ParseAndCompareIntArrays(v14, v18, 2u, v16, &v17);
                if ( (int)result < 0 || !v16[0] )
                  return result;
LABEL_17:
                *a6 = 1;
                return 0LL;
              }
              if ( v14[7] == 35 )
                goto LABEL_17;
            }
          }
        }
      }
LABEL_19:
      WdLogSingleEntry1(3LL, v14);
      return 3221225485LL;
    }
LABEL_22:
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
  result = ParseAndCompareHexValue(a1, a2, v16, &v17);
  if ( (int)result >= 0 && v16[0] )
  {
    v13 = v17;
    goto LABEL_7;
  }
  return result;
}
