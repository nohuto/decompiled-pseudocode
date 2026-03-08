/*
 * XREFs of ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00A1EF8
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     CkptUpdate @ 0x1C0100B24 (CkptUpdate.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0044A68 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00A1FC8 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00A3584 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00FF4A0 (GetMonitorWorkRectForWindow.c)
 */

struct tagRECT *__fastcall GetMonitorMaxArea(
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a2,
        struct tagMONITOR *a3)
{
  struct tagWND *v6; // rax
  const struct tagWND *v7; // r9
  __int64 v8; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int16 v12; // si
  unsigned __int16 v13; // di
  __int64 v14; // rax

  v6 = _HungWindowFromGhostWindow(a2);
  v7 = a2;
  if ( v6 )
    v7 = v6;
  v8 = *((_QWORD *)v7 + 5);
  if ( (*(_BYTE *)(v8 + 30) & 1) != 0 && (*(_BYTE *)(v8 + 16) & 8) != 0 && !*(_WORD *)(gpDispInfo + 160LL) )
  {
    GetMonitorWorkRectForWindow(retstr, a3, a2);
  }
  else
  {
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
    v10 = *((_QWORD *)a3 + 5);
    v11 = *(unsigned __int16 *)(v10 + 62);
    v12 = *(_WORD *)(v10 + 60);
    *retstr = *(struct tagRECT *)(v10 + 28);
    v13 = (WindowCompositedDpiContext >> 8) & 0x1FF;
    if ( v13 )
    {
      v14 = ExpandMonitorSpaceVertex(v13, v11, *(_QWORD *)&retstr->left);
      ScaleDPIRect((_DWORD)retstr, (_DWORD)retstr, v13, v12, v14, *(_QWORD *)&retstr->left);
    }
  }
  return retstr;
}
