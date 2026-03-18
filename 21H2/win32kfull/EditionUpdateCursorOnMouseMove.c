/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C0077740
 * Callers:
 *     <none>
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C0121C10 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  void *v5; // rax
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2)) )
  {
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncTopLevelMouseLeave(v5);
  }
  if ( (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v6 = &gspwndCursorNC;
    v7 = a1;
    HMAssignmentLock(&v6, 1LL);
  }
  v7 = a1;
  v6 = &gspwndCursor;
  return HMAssignmentLock(&v6, 1LL);
}
