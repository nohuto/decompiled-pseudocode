/*
 * XREFs of ??$_Sort_heap_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0U?$less@X@0@@Z @ 0x1800A5CD0
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800A5DE0 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800A59C4 (--$_Pop_heap_hole_by_index@PEAEEU-$less@X@std@@@std@@YAXPEAE_J1$$QEAEU-$less@X@0@@Z.c)
 */

unsigned __int8 *__fastcall std::_Sort_heap_unchecked<unsigned char *,std::less<void>>(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v4; // rdi
  __int64 v5; // rsi
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int8 *)(a2 - (_QWORD)a1);
  if ( a2 - (__int64)a1 >= 2 )
  {
    v4 = (unsigned __int8 *)(a2 - 1);
    v5 = 1LL - (_QWORD)a1;
    do
    {
      if ( (__int64)&v4[v5] >= 2 )
      {
        v6 = *v4;
        *v4 = *a1;
        std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>((__int64)a1, 0LL, v4 - a1, &v6);
      }
      --v4;
      result = &v4[v5];
    }
    while ( (__int64)&v4[v5] >= 2 );
  }
  return result;
}
