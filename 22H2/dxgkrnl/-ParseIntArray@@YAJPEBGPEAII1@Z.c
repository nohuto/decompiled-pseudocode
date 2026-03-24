/*
 * XREFs of ?ParseIntArray@@YAJPEBGPEAII1@Z @ 0x1C02C7AB4
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C01927C4 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     ?ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z @ 0x1C02C78C0 (-ParseAndCompareIntArrays@@YAJPEBGPEBIIPEAEPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseIntArray(const unsigned __int16 *a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // r10
  unsigned int v5; // r11d
  const unsigned __int16 *v7; // rbx
  unsigned int v8; // esi
  __int64 i; // rdx
  __int64 v11; // rax

  LODWORD(v4) = *a4;
  v5 = 0;
  v7 = a1;
  if ( (_DWORD)a3 )
  {
    while ( 2 )
    {
      *a2 = 0;
      v8 = 0;
      for ( i = v7[(unsigned int)v4]; (unsigned __int16)i >= 0x30u && (unsigned __int16)i <= 0x39u; i = v7[v4] )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v8;
        a1 = (const unsigned __int16 *)((unsigned __int16)i + 2 * (5 * *a2 - 24));
        *a2 = (unsigned int)a1;
        if ( v8 >= 5 )
          goto LABEL_12;
      }
      if ( v5 < (int)a3 - 1 )
      {
        if ( v7[(unsigned int)v4] != 46 )
        {
LABEL_12:
          v11 = WdLogNewEntry5_WdWarning(a1, i, a3);
          *(_QWORD *)(v11 + 24) = v7;
          WdLogEvent5_WdWarning(v11);
          return 3221225485LL;
        }
        LODWORD(v4) = v4 + 1;
      }
      ++v5;
      ++a2;
      if ( v5 < (unsigned int)a3 )
        continue;
      break;
    }
  }
  *a4 = v4;
  return 0LL;
}
