__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        struct tagPOINT *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3,
        const struct tagWND *a4)
{
  unsigned int v7; // ebp
  const struct _D3DMATRIX *v9; // rsi
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  unsigned __int64 v11; // r8
  char v12; // al
  struct tagPOINT v13; // r8
  struct tagPOINT v14; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
  if ( (v7 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v9 = 0LL;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a4);
  if ( TopLevelOrDpiBoundaryWindow )
    v9 = (const struct _D3DMATRIX *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
  v11 = (unsigned __int64)*a2;
  v14 = *a2;
  if ( v9 )
  {
    v12 = DCEHitTestWindow((const struct tagRECT *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v9, &v14, a3);
    v13 = v14;
  }
  else
  {
    if ( !TopLevelOrDpiBoundaryWindow )
      return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
    v12 = PtInRect((_DWORD *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v11);
  }
  if ( v12 )
  {
    *a1 = v13;
    return 1LL;
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
}
