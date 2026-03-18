/*
 * XREFs of InvalidateGDIWindows @ 0x1C01BDC84
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 *     InvalidateGDIWindows @ 0x1C01BDC84 (InvalidateGDIWindows.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     InvalidateGDIWindows @ 0x1C01BDC84 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C0288350 (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(const struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Prop; // rax
  struct EWNDOBJ *v6; // rdi
  __int64 v7; // r9
  __int64 i; // rbx
  HRGN v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp((__int64)a1, (unsigned __int16)atomWndObj, 1LL, a4);
    v6 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v9 = 0LL;
      if ( (*(_DWORD *)(Prop + 184) & 0x20) != 0 )
        v7 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 1u;
      else
        v7 = 24LL;
      CalcVisRgn(&v9, a1, a1, v7);
      GreSetClientRgn(v6);
    }
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i);
  }
}
