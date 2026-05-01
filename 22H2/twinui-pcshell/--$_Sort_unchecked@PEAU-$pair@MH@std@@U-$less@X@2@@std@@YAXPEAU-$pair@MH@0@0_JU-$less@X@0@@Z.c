/*
 * XREFs of ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x1804BF620
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x1804BF620 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x1804BF868 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAPEAU?$pair@MH@0@PEAU10@QEAU10@U?$less@X@0@@Z @ 0x1804BEFC0 (--$_Insertion_sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAPEAU-$pair@MH@0@PEAU10@QEAU1.c)
 *     ??$_Make_heap_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x1804BF088 (--$_Make_heap_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0U-$less@X@0@@Z.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YA?AU?$pair@PEAU?$pair@MH@std@@PEAU12@@0@PEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x1804BF198 (--$_Partition_by_median_guess_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YA-AU-$pair@PEAU-$p.c)
 *     ??$_Sort_heap_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x1804BF594 (--$_Sort_heap_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0U-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x1804BF620 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 */

__int64 __fastcall std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4)
{
  __int64 result; // rax
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // r9
  char *v10; // rcx
  _QWORD *v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  result = (__int64)((__int64)a2 - a1) >> 3;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::pair<float,int> *,std::less<void>>(
      (unsigned __int64 *)&v11,
      v8,
      (unsigned __int64)v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = a4;
    if ( (__int64)(((unsigned __int64)v11 - v8) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)(((unsigned __int64)v7 - v12) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(v12, v7, a3, v9);
      v7 = v11;
    }
    else
    {
      std::_Sort_unchecked<std::pair<float,int> *,std::less<void>>(v8, v11, a3, v9);
      v8 = v12;
    }
    result = (__int64)((__int64)v7 - v8) >> 3;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_9:
    if ( result >= 2 )
      return (__int64)std::_Insertion_sort_unchecked<std::pair<float,int> *,std::less<void>>(v8, v7);
  }
  else
  {
    std::_Make_heap_unchecked<std::pair<float,int> *,std::less<void>>(v8, (__int64)v7, a4);
    return std::_Sort_heap_unchecked<std::pair<float,int> *,std::less<void>>(v10, (__int64)v7);
  }
  return result;
}
