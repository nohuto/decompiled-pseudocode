/*
 * XREFs of ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D5440
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     <none>
 */

struct tagKL *__fastcall GetKbdLayoutListHead(struct tagWINDOWSTATION *a1)
{
  if ( a1 )
    return (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    return (struct tagKL *)gspklWinstaLessSessionLayouts;
}
