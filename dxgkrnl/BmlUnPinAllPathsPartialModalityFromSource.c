/*
 * XREFs of BmlUnPinAllPathsPartialModalityFromSource @ 0x1C03B9070
 * Callers:
 *     BmlUnPinSourceMode @ 0x1C03B9310 (BmlUnPinSourceMode.c)
 * Callees:
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C03B9114 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlUnPinAllPathsPartialModalityFromSource(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  __int64 v6; // r15
  int v7; // ebp

  v3 = 0;
  if ( !*a1 )
    return 0LL;
  v6 = 120LL * a3;
  while ( 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&a1[120 * v3 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&a1[v6 + 16] + 24LL) )
    {
      v7 = BmlUnPinPartialPathModalityOnPath(a1, a2, v3);
      if ( v7 < 0 )
        break;
    }
    if ( ++v3 >= (unsigned __int8)*a1 )
      return 0LL;
  }
  WdLogSingleEntry3(3LL, a1, a2, v3);
  return (unsigned int)v7;
}
