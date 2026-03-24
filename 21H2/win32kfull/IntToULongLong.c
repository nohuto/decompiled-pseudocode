/*
 * XREFs of IntToULongLong @ 0x1C0228C70
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C0232030 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall IntToULongLong(INT iOperand, ULONGLONG *pullResult)
{
  ULONGLONG v2; // rax

  if ( iOperand < 0 )
    v2 = -1LL;
  else
    v2 = iOperand;
  *pullResult = v2;
  return (iOperand >> 31) & 0x80070216;
}
