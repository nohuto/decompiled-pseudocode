void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  struct tagWND *v1; // rbx
  __int64 DC; // rax
  HDC v3; // rsi
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // [rsp+20h] [rbp-68h]

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(struct tagWND **)(v0 + 304);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 304)) )
  {
    DC = _GetDC();
    v3 = (HDC)DC;
    if ( *(_QWORD *)(*((_QWORD *)v1 + 5) + 136LL) )
    {
      GreSaveDCInternal(DC, 1LL);
      v4 = 1;
      if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 21LL) & 1) != 0 )
        ExcludeUpdateRgn(v3, v1);
    }
    else
    {
      v4 = 0;
    }
    if ( *(_QWORD *)(v0 + 344) > 1uLL )
    {
      v5 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 344));
      NtGdiBitBltInternal(
        v3,
        *(unsigned int *)(v0 + 324),
        *(unsigned int *)(v0 + 328),
        *(unsigned int *)(v0 + 336),
        *(_DWORD *)(v0 + 332),
        ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(ghdcMem, v5);
    }
    else
    {
      GrePolyPatBlt(v3, v6);
    }
    if ( v4 )
      GreRestoreDC(v3, 0xFFFFFFFFLL);
    _ReleaseDC(v3);
  }
  else
  {
    *(_DWORD *)(v0 + 312) &= ~1u;
  }
}
