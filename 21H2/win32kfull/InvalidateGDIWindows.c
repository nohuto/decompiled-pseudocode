/*
 * XREFs of InvalidateGDIWindows @ 0x1C01E8A10
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1FE4 (zzzUpdateLayeredWindow.c)
 *     InvalidateGDIWindows @ 0x1C01E8A10 (InvalidateGDIWindows.c)
 * Callees:
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     CalcVisRgn @ 0x1C0073950 (CalcVisRgn.c)
 *     InvalidateGDIWindows @ 0x1C01E8A10 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C0287AFC (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct EWNDOBJ *v5; // rdi
  unsigned int v6; // r9d
  __int64 i; // rbx
  HRGN v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = GetProp(a1, (unsigned __int16)atomWndObj, 1LL);
    v5 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v8 = 0LL;
      if ( (*(_DWORD *)(Prop + 184) & 0x20) != 0 )
        v6 = (4 * (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 4)) | 1;
      else
        v6 = 24;
      CalcVisRgn(&v8, a1, (struct tagWND *)a1, v6);
      GreSetClientRgn(v5);
    }
    for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
      InvalidateGDIWindows(i, v3, v4);
  }
}
