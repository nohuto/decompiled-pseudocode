void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 27)
    && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 1
    && (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) == 2
    && *(_DWORD *)(gptiCurrent + 764LL) == *(_DWORD *)(gptiCurrent + 776LL)
    && *(_DWORD *)(gptiCurrent + 768LL) == *(_DWORD *)(gptiCurrent + 780LL) )
  {
    v4 = *(__int16 *)a2;
    v5 = *((__int16 *)a2 + 1);
    PhysicalToLogicalInPlacePointWithParent(a1, &v4, 0LL);
    *a2 = ((unsigned __int16)v5 << 16) | (unsigned __int16)v4;
  }
}
