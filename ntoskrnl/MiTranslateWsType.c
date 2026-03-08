/*
 * XREFs of MiTranslateWsType @ 0x1402998EC
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x140299868 (MmGetWorkingSetLeafSize.c)
 *     MiInitializeSystemWorkingSetList @ 0x140726074 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateWsType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return result;
    v4 = v3 - 1;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 3LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 4LL;
    if ( v6 == 1 )
      return 5LL;
  }
  return 0LL;
}
