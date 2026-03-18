/*
 * XREFs of CmpIsKeyStackSymlink @ 0x1406D32B0
 * Callers:
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D5850 (CmpGetKcbAtLayerHeight.c)
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
