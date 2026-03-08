/*
 * XREFs of ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1C01E576C
 * Callers:
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01E51C4 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E7030 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TouchTargetingIsSpecialTarget(struct tagWND *a1, struct tagWND *a2)
{
  return *((_QWORD *)a1 + 2) != *((_QWORD *)a2 + 2)
      || *(_QWORD *)(*((_QWORD *)a2 + 5) + 88LL) == *(_QWORD *)(*((_QWORD *)a2 + 5) + 96LL);
}
