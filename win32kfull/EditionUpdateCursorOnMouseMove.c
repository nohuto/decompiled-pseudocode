__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, unsigned __int64 a2)
{
  _DWORD *v4; // rax
  __int64 v6; // rcx
  void *v7; // rax
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+4Ch] [rbp+14h]

  v10 = HIDWORD(a2);
  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || PtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2)) )
  {
    v7 = (void *)ReferenceDwmApiPort(v6);
    DwmAsyncTopLevelMouseLeave(v7);
  }
  v4 = *(_DWORD **)(a1 + 40);
  if ( (int)a2 < v4[26] || (int)a2 >= v4[28] || v10 < v4[27] || v10 >= v4[29] )
  {
    v9 = a1;
    v8 = &gspwndCursorNC;
    HMAssignmentLock(&v8, 1LL);
  }
  else
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  v9 = a1;
  v8 = &gspwndCursor;
  return HMAssignmentLock(&v8, 1LL);
}
