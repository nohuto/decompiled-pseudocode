/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1C00C302C
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C003AB94 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1C0086D3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C0168AE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // r9
  unsigned __int64 v5; // r10
  char *v6; // rcx
  char v7; // al
  char v10; // al
  char v11; // r8
  char v13; // dl
  __int64 v14; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  while ( (unsigned __int64)v6 < v5 )
  {
    while ( *v6++ )
      ;
    if ( *v6 >= 0 )
      break;
    v10 = v6[1];
    v11 = *v6 & 0x7F;
    v6 += 2;
    if ( v10 >= 0 )
      break;
    while ( 1 )
    {
      v13 = *v6;
      if ( *v6 >= 0 )
        break;
      if ( v13 != (char)0x80 )
        return v3;
      ++v6;
    }
    if ( v11 != 9 || (unsigned __int8)(v13 - 113) > 2u )
      break;
    v14 = 2LL * v3++;
    *(_BYTE *)(a2 + 8 * v14 + 45) = v13;
  }
  return v3;
}
