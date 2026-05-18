/*
 * XREFs of sub_180022400 @ 0x180022400
 * Callers:
 *     sub_180020388 @ 0x180020388 (sub_180020388.c)
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 *     sub_1800276A0 @ 0x1800276A0 (sub_1800276A0.c)
 *     sub_180027888 @ 0x180027888 (sub_180027888.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180027B98 @ 0x180027B98 (sub_180027B98.c)
 *     sub_18002A008 @ 0x18002A008 (sub_18002A008.c)
 *     sub_18002A788 @ 0x18002A788 (sub_18002A788.c)
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 *     sub_180032518 @ 0x180032518 (sub_180032518.c)
 *     sub_180061D44 @ 0x180061D44 (sub_180061D44.c)
 *     sub_180061F2C @ 0x180061F2C (sub_180061F2C.c)
 *     sub_180064B64 @ 0x180064B64 (sub_180064B64.c)
 *     sub_1800692F4 @ 0x1800692F4 (sub_1800692F4.c)
 *     sub_1800694DC @ 0x1800694DC (sub_1800694DC.c)
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     sub_18006DFC4 @ 0x18006DFC4 (sub_18006DFC4.c)
 *     sub_18006E3B4 @ 0x18006E3B4 (sub_18006E3B4.c)
 *     sub_18006E7A4 @ 0x18006E7A4 (sub_18006E7A4.c)
 *     sub_18006E980 @ 0x18006E980 (sub_18006E980.c)
 *     sub_18006EB5C @ 0x18006EB5C (sub_18006EB5C.c)
 *     sub_18006EDBC @ 0x18006EDBC (sub_18006EDBC.c)
 *     sub_18006EFA4 @ 0x18006EFA4 (sub_18006EFA4.c)
 *     sub_18006F18C @ 0x18006F18C (sub_18006F18C.c)
 *     sub_18006F2C0 @ 0x18006F2C0 (sub_18006F2C0.c)
 *     sub_18006F4F4 @ 0x18006F4F4 (sub_18006F4F4.c)
 *     sub_18006F62C @ 0x18006F62C (sub_18006F62C.c)
 *     sub_18006F780 @ 0x18006F780 (sub_18006F780.c)
 *     sub_18006F8E0 @ 0x18006F8E0 (sub_18006F8E0.c)
 *     sub_18006FA14 @ 0x18006FA14 (sub_18006FA14.c)
 *     sub_18008503C @ 0x18008503C (sub_18008503C.c)
 *     sub_180085270 @ 0x180085270 (sub_180085270.c)
 *     sub_18008B788 @ 0x18008B788 (sub_18008B788.c)
 *     sub_18008B978 @ 0x18008B978 (sub_18008B978.c)
 *     sub_18009D2A0 @ 0x18009D2A0 (sub_18009D2A0.c)
 *     sub_18009D690 @ 0x18009D690 (sub_18009D690.c)
 *     sub_18009D878 @ 0x18009D878 (sub_18009D878.c)
 *     sub_18009DAAC @ 0x18009DAAC (sub_18009DAAC.c)
 *     sub_18009DCE0 @ 0x18009DCE0 (sub_18009DCE0.c)
 *     sub_18009DE18 @ 0x18009DE18 (sub_18009DE18.c)
 *     sub_18009E044 @ 0x18009E044 (sub_18009E044.c)
 *     sub_1800A2928 @ 0x1800A2928 (sub_1800A2928.c)
 *     sub_1800A2B10 @ 0x1800A2B10 (sub_1800A2B10.c)
 *     sub_1800A2C50 @ 0x1800A2C50 (sub_1800A2C50.c)
 *     sub_1800A6908 @ 0x1800A6908 (sub_1800A6908.c)
 *     sub_1800A6B2C @ 0x1800A6B2C (sub_1800A6B2C.c)
 *     sub_1800AE834 @ 0x1800AE834 (sub_1800AE834.c)
 *     sub_1800AEA10 @ 0x1800AEA10 (sub_1800AEA10.c)
 *     sub_1800B675C @ 0x1800B675C (sub_1800B675C.c)
 *     sub_1800B6B4C @ 0x1800B6B4C (sub_1800B6B4C.c)
 *     sub_1800CE62C @ 0x1800CE62C (sub_1800CE62C.c)
 *     sub_1800CEA1C @ 0x1800CEA1C (sub_1800CEA1C.c)
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800D23B0 @ 0x1800D23B0 (sub_1800D23B0.c)
 *     sub_180119594 @ 0x180119594 (sub_180119594.c)
 *     sub_18011977C @ 0x18011977C (sub_18011977C.c)
 *     sub_1801199B0 @ 0x1801199B0 (sub_1801199B0.c)
 *     sub_180119B00 @ 0x180119B00 (sub_180119B00.c)
 *     sub_18011AA30 @ 0x18011AA30 (sub_18011AA30.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall sub_180022400(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // r8
  __int64 *v5; // r9
  __int64 *i; // rax

  v1 = *a1;
  if ( *((_BYTE *)*a1 + 25) )
  {
    *a1 = (__int64 *)v1[2];
    return a1;
  }
  v3 = (__int64 *)*v1;
  if ( !*(_BYTE *)(*v1 + 25) )
  {
    for ( i = (__int64 *)v3[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
      v3 = i;
LABEL_13:
    *a1 = v3;
    return a1;
  }
  v3 = (__int64 *)v1[1];
  if ( !*((_BYTE *)v3 + 25) )
  {
    v4 = v1;
    v5 = v1;
    do
    {
      v1 = v5;
      if ( v4 != (__int64 *)*v3 )
        break;
      v4 = v3;
      *a1 = v3;
      v3 = (__int64 *)v3[1];
      v5 = v4;
      v1 = v4;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  if ( !*((_BYTE *)v1 + 25) )
    goto LABEL_13;
  return a1;
}
