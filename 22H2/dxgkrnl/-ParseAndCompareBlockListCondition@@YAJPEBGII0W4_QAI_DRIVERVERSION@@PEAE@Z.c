/*
 * XREFs of ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C01927C4
 * Callers:
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C01923A8 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     wcsncmp_0 @ 0x1C0024935 (wcsncmp_0.c)
 *     ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x1C0192948 (-ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C02C78C0 (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C02C7AB4 (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareBlockListCondition(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned __int8 *a6)
{
  const unsigned __int16 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  unsigned int v14; // edi
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int8 v22[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v24[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v25[4]; // [rsp+40h] [rbp-20h] BYREF

  v22[0] = 0;
  *a6 = 0;
  v9 = a1;
  if ( wcsncmp_0(a1, L"Vendor=", 7uLL) )
    goto LABEL_18;
  v13 = v9[7] == 42;
  v23 = 7;
  v14 = 9;
  if ( v13 )
  {
    if ( v9[8] != 35 )
      goto LABEL_18;
    v16 = 9LL;
LABEL_7:
    v9 += v16;
    if ( !wcsncmp_0(v9, L"Device=", 7uLL) )
    {
      v13 = v9[7] == 42;
      v23 = 7;
      if ( v13 )
      {
        if ( v9[8] != 35 )
          goto LABEL_18;
      }
      else
      {
        result = ParseAndCompareHexValue(v9, a3, v22, &v23);
        if ( (int)result < 0 || !v22[0] )
          return result;
        v14 = v23;
      }
      v9 += v14;
      if ( !wcsncmp_0(v9, L"Version=", 8uLL) )
      {
        v13 = v9[8] == 42;
        v23 = 8;
        if ( !v13 )
        {
          v24[0] = 0;
          if ( (int)ParseIntArray(a4, v25, 4u, v24) < 0 )
          {
            v18 = WdLogNewEntry5_WdWarning(v20, v19, v21);
            *(_QWORD *)(v18 + 24) = a4;
            goto LABEL_20;
          }
          result = ParseAndCompareIntArrays(v9, v25, 4u, v22, &v23);
          if ( (int)result < 0 || !v22[0] )
            return result;
          v17 = v23;
          goto LABEL_14;
        }
        if ( v9[9] == 35 )
        {
          v17 = 10LL;
LABEL_14:
          v9 += v17;
          if ( !wcsncmp_0(v9, L"Model=", 6uLL) )
          {
            v13 = v9[6] == 42;
            v23 = 6;
            if ( !v13 )
            {
              v24[0] = a5 / 0x3E8u;
              v24[1] = a5 % 0x3E8u / 0x64;
              result = ParseAndCompareIntArrays(v9, v24, 2u, v22, &v23);
              if ( (int)result < 0 || !v22[0] )
                return result;
LABEL_17:
              *a6 = 1;
              return 0LL;
            }
            if ( v9[7] == 35 )
              goto LABEL_17;
          }
        }
      }
    }
LABEL_18:
    v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v18 + 24) = v9;
LABEL_20:
    WdLogEvent5_WdWarning(v18);
    return 3221225485LL;
  }
  result = ParseAndCompareHexValue(v9, a2, v22, &v23);
  if ( (int)result >= 0 && v22[0] )
  {
    v16 = v23;
    goto LABEL_7;
  }
  return result;
}
