/*
 * XREFs of EtwpCovSampContextRemoveAndFreeModule @ 0x1409EF334
 * Callers:
 *     EtwpCovSampContextCleanup @ 0x1409EE264 (EtwpCovSampContextCleanup.c)
 * Callees:
 *     EtwpCovSampModuleCleanup @ 0x1409EF8C8 (EtwpCovSampModuleCleanup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampContextRemoveAndFreeModule(__int64 a1, __int64 *a2)
{
  __int64 v2; // r11
  __int64 *i; // rdx
  _QWORD *v6; // r11
  _QWORD *j; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // [rsp+48h] [rbp+10h]
  __int64 v12; // [rsp+48h] [rbp+10h]

  v2 = *a2;
  a2[8] = 0LL;
  if ( v2 )
  {
    v11 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
    for ( i = (__int64 *)(*(_QWORD *)(a1 + 1200)
                        + 8LL
                        * ((37
                          * (BYTE6(v11)
                           + 37
                           * (BYTE5(v11)
                            + 37
                            * (BYTE4(v11)
                             + 37
                             * (BYTE3(v11)
                              + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                          + HIBYTE(v11)) & (unsigned int)((*(_DWORD *)(a1 + 1196) >> 5) - 1)));
          (*i & 1) == 0;
          i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)(a1 + 1192);
        break;
      }
    }
    *a2 = 0LL;
  }
  v6 = a2 + 2;
  if ( a2[2] )
  {
    v12 = a2[3] & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F));
    for ( j = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                       + 8LL
                       * ((37
                         * (BYTE6(v12)
                          + 37
                          * (BYTE5(v12)
                           + 37
                           * (BYTE4(v12)
                            + 37
                            * (BYTE3(v12)
                             + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
                         + HIBYTE(v12)) & (unsigned int)((*(_DWORD *)(a1 + 1212) >> 5) - 1)));
          (*j & 1) == 0;
          j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v6 )
      {
        *j = *v6;
        --*(_DWORD *)(a1 + 1208);
        break;
      }
    }
    *v6 = 0LL;
  }
  v8 = a2 + 9;
  v9 = a2[9];
  if ( *(__int64 **)(v9 + 8) != a2 + 9 || (v10 = (_QWORD *)a2[10], (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  a2[10] = (__int64)(a2 + 9);
  *v8 = v8;
  --*(_DWORD *)(a1 + 1240);
  EtwpCovSampModuleCleanup(a2);
  ExFreePoolWithTag(a2, 0x56777445u);
}
