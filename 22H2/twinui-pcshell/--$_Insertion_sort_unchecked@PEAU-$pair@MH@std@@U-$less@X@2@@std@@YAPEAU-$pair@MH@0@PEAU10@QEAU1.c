/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAPEAU?$pair@MH@0@PEAU10@QEAU10@U?$less@X@0@@Z @ 0x1804BEFC0
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x1804BF620 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Insertion_sort_unchecked<std::pair<float,int> *,std::less<void>>(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // r8
  _QWORD *v3; // r10
  float v4; // xmm0_4
  _QWORD *j; // r9
  float v6; // xmm1_4
  _DWORD *v7; // r10
  int *v8; // r9
  int v9; // eax
  __int64 v11; // [rsp+8h] [rbp+8h]

  if ( (_QWORD *)a1 != a2 )
  {
    for ( i = (_QWORD *)(a1 + 8); i != a2; ++i )
    {
      v3 = i;
      v11 = *i;
      LODWORD(v4) = *i;
      if ( *(float *)a1 > v4 || v4 <= *(float *)a1 && (int)HIDWORD(*i) < *(_DWORD *)(a1 + 4) )
      {
        v7 = i + 1;
        if ( i != (_QWORD *)a1 )
        {
          v8 = (int *)i - 1;
          do
          {
            v7 -= 2;
            *v7 = *(v8 - 1);
            v9 = *v8;
            v8 -= 2;
            v7[1] = v9;
          }
          while ( v8 + 1 != (int *)a1 );
        }
        *(_DWORD *)(a1 + 4) = HIDWORD(v11);
        *(float *)a1 = v4;
      }
      else
      {
        for ( j = i; ; v3 = j )
        {
          v6 = *(float *)--j;
          if ( *(float *)j <= v4 && (v4 > v6 || SHIDWORD(v11) >= *((_DWORD *)j + 1)) )
            break;
          *(float *)v3 = v6;
          *((_DWORD *)v3 + 1) = *((_DWORD *)j + 1);
        }
        *(float *)v3 = v4;
        *((_DWORD *)v3 + 1) = HIDWORD(v11);
      }
    }
  }
  return a2;
}
