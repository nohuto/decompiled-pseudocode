/*
 * XREFs of ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0148932
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     TouchTargetingDownrank @ 0x1C014ADB2 (TouchTargetingDownrank.c)
 *     TouchTargetingBigTargetWindow @ 0x1C0250AE8 (TouchTargetingBigTargetWindow.c)
 */

__int64 __fastcall _TTWindowPenalty(struct tagWND *a1, struct tagPNTRWINDOWHITTTESTARGS *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  unsigned int Prop; // eax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = *((_QWORD *)a2 + 5);
    v9 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( (unsigned int)TouchTargetingBigTargetWindow(&v9, v6) )
    {
      Prop = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1u);
      return (unsigned int)TouchTargetingDownrank(*((_QWORD *)a2 + 5), Prop);
    }
  }
  return v3;
}
