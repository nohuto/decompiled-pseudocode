/*
 * XREFs of ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C039524C
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C020E618 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C0395448 (-ParseIntArray@@YAJPEBGPEAII1@Z.c)
 */

__int64 __fastcall ParseAndCompareIntArrays(
        const unsigned __int16 *a1,
        char *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int *a5)
{
  unsigned __int8 v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int16 v13; // r10
  bool v14; // cl
  bool v15; // dl
  unsigned int v16; // r8d
  char *v17; // rax
  signed __int64 v18; // r11
  signed __int64 v19; // rsi
  unsigned int v20; // r8d
  unsigned int *v21; // rdx
  bool v22; // zf
  unsigned int v23; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v24[4]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v25[4]; // [rsp+38h] [rbp-18h] BYREF

  v9 = 0;
  v23 = *a5;
  v10 = v23;
  if ( a1[v23] != 35 )
  {
    LODWORD(v11) = v23;
    while ( a1[(unsigned int)v11] )
    {
      result = ParseIntArray(a1, v24, a3, &v23);
      if ( (int)result < 0 )
        return result;
      v10 = v23;
      v13 = a1[v23];
      if ( v13 == 45 )
      {
        ++v23;
        result = ParseIntArray(a1, v25, a3, &v23);
        if ( (int)result < 0 )
          return result;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        if ( a3 )
        {
          v17 = a2;
          v18 = (char *)v24 - a2;
          v19 = (char *)v25 - a2;
          do
          {
            if ( !v14 )
            {
              if ( *(_DWORD *)v17 < *(_DWORD *)&v17[v18] )
                goto LABEL_17;
              v14 = *(_DWORD *)v17 > *(_DWORD *)&v17[v18];
            }
            if ( !v15 )
            {
              if ( *(_DWORD *)v17 > *(_DWORD *)&v17[v19] )
                goto LABEL_17;
              v15 = *(_DWORD *)v17 < *(_DWORD *)&v17[v19];
            }
            ++v16;
            v17 += 4;
          }
          while ( v16 < a3 );
        }
        v9 = 1;
LABEL_17:
        v10 = v23;
        if ( a1[v23] != 44 )
          break;
      }
      else
      {
        v20 = 0;
        if ( a3 )
        {
          v21 = v24;
          while ( *(unsigned int *)((char *)v21 + a2 - (char *)v24) == *v21 )
          {
            ++v20;
            ++v21;
            if ( v20 >= a3 )
              goto LABEL_23;
          }
        }
        else
        {
LABEL_23:
          v9 = 1;
        }
        if ( v13 != 44 )
          break;
      }
      v11 = v10 + 1;
      v22 = a1[v11] == 35;
      ++v10;
      v23 = v11;
      if ( v22 )
        break;
    }
  }
  result = 0LL;
  if ( a1[v10] == 35 )
  {
    *a4 = v9;
    *a5 = v10 + 1;
  }
  else
  {
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
  return result;
}
