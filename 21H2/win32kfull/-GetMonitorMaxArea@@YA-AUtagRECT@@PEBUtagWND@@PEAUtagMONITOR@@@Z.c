/*
 * XREFs of ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C010435C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     CkptUpdate @ 0x1C007CA54 (CkptUpdate.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C01043E4 (_HungWindowFromGhostWindow.c)
 */

struct tagRECT *__fastcall GetMonitorMaxArea(
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a2,
        struct tagMONITOR *a3)
{
  __int64 v6; // rax
  const struct tagWND *v7; // r9
  __int64 v8; // rcx

  v6 = HungWindowFromGhostWindow(a2);
  v7 = a2;
  if ( v6 )
    v7 = (const struct tagWND *)v6;
  v8 = *((_QWORD *)v7 + 5);
  if ( (*(_BYTE *)(v8 + 30) & 1) != 0 && (*(_BYTE *)(v8 + 16) & 8) != 0 && !*(_WORD *)(gpDispInfo + 160LL) )
    GetMonitorWorkRectForWindow((__int64)retstr, (__int64)a3, a2);
  else
    GetMonitorRectForWindow((__int64)retstr, (__int64)a3, a2);
  return retstr;
}
