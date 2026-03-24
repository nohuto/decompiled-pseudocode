/*
 * XREFs of ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C020A1B4
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D06C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020D970 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangeActionCompatibleWithStyle(__int64 a1, int a2)
{
  char *v2; // r9
  unsigned int v3; // r8d
  bool v5; // zf

  v2 = *(char **)(a1 + 40);
  v3 = 1;
  if ( v2[24] < 0 )
    return 0LL;
  switch ( a2 )
  {
    case 0:
      if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) == *(_WORD *)(gpsi + 900LL) || (v2[30] & 1) == 0 )
        return 0;
      v5 = (v2[31] & 1) == 0;
      goto LABEL_21;
    case 1:
      if ( (v2[30] & 2) == 0 )
        return 0;
      v5 = (v2[31] & 0x20) == 0;
LABEL_21:
      if ( v5 )
        return v3;
      return 0;
    case 2:
      if ( (v2[31] & 1) == 0 || (v2[30] & 4) != 0 )
        return v3;
      return 0;
  }
  if ( a2 > 2 )
  {
    if ( a2 > 5 )
    {
      if ( a2 <= 7 )
        return **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL);
      return v3;
    }
    if ( (v2[30] & 4) != 0 && **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
      return v3;
    return 0;
  }
  return v3;
}
