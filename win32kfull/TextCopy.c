/*
 * XREFs of TextCopy @ 0x1C00D176C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     NtUserInternalGetWindowText @ 0x1C00D1530 (NtUserInternalGetWindowText.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C012E4C8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     _GetAltTabInfo @ 0x1C01CB224 (_GetAltTabInfo.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall TextCopy(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // r9
  __int64 v6; // rbx

  v3 = a3;
  if ( a3 )
  {
    v5 = *(_DWORD *)a1 >> 1;
    if ( (unsigned int)v5 >= a3 - 1 )
      v5 = a3 - 1;
    v3 = v5;
    v6 = 2 * v5;
    memmove(a2, *(const void **)(a1 + 8), 2 * v5);
    *(_WORD *)&a2[v6] = 0;
  }
  return v3;
}
