/*
 * XREFs of ?PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020BA3C
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020AE28 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtInRectSpace(_DWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d
  int v5; // r8d
  unsigned __int64 v6; // rdx

  result = 0LL;
  if ( a3 )
  {
    v4 = a3 - 1;
    if ( !v4 )
      goto LABEL_6;
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( (int)a2 < *a1 )
        return result;
      goto LABEL_7;
    }
    if ( v5 != 1 )
    {
      if ( (int)a2 < *a1 )
        return result;
LABEL_6:
      if ( (int)a2 >= a1[2] )
        return result;
LABEL_7:
      v6 = HIDWORD(a2);
      if ( (int)v6 < a1[1] )
        return result;
LABEL_18:
      if ( (int)v6 >= a1[3] )
        return result;
      return 1LL;
    }
    if ( (int)a2 >= *a1 && (int)a2 < a1[2] && SHIDWORD(a2) >= a1[1] )
      return 1LL;
  }
  else if ( (int)a2 >= *a1 && (int)a2 < a1[2] )
  {
    v6 = HIDWORD(a2);
    goto LABEL_18;
  }
  return result;
}
