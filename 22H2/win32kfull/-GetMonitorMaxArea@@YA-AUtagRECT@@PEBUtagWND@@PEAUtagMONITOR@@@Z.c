/*
 * XREFs of ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00CFAA0
 * Callers:
 *     CkptUpdate @ 0x1C00C7B24 (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C00C39DC (GetMonitorWorkRectForWindow.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00CFB70 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00D0BA8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
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
    GetMonitorWorkRectForWindow(retstr, (__int64)a3, a2);
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
