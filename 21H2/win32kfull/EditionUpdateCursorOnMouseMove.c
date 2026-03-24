/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C004DCC0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BF1C (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C0136470 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rax
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL)) )
  {
    v5 = (void *)ReferenceDwmApiPort(v4, v3);
    DwmAsyncTopLevelMouseLeave(v5);
  }
  if ( (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v6 = &gspwndCursorNC;
    v7 = a1;
    HMAssignmentLock(&v6);
  }
  v7 = a1;
  v6 = &gspwndCursor;
  return HMAssignmentLock(&v6);
}
