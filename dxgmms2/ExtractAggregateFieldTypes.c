/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1C004C108
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C0034448 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U?$_tlgWrapSz@D@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@2AEBU?$_tlgWrapSz@D@@3@Z @ 0x1C0046AC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
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
  char v12; // dl
  __int64 v13; // rax

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
      v12 = *v6;
      if ( *v6 >= 0 )
        break;
      if ( v12 != (char)0x80 )
        return v3;
      ++v6;
    }
    if ( v11 != 9 || (unsigned __int8)(v12 - 113) > 2u )
      break;
    v13 = 2LL * v3++;
    *(_BYTE *)(a2 + 8 * v13 + 45) = v12;
  }
  return v3;
}
