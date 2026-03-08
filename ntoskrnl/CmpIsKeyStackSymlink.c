/*
 * XREFs of CmpIsKeyStackSymlink @ 0x1407A9830
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 */

bool __fastcall CmpIsKeyStackSymlink(__int64 a1)
{
  __int64 v1; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v3; // dx

  v1 = a1;
  if ( *(__int16 *)(a1 + 2) < 0 )
    return 0;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v1);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      break;
    if ( (__int16)(v3 - 1) < 0 )
      return 0;
  }
  return (*(_DWORD *)(KcbAtLayerHeight + 184) & 0x100000) != 0;
}
