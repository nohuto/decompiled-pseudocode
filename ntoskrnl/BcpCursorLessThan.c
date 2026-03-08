/*
 * XREFs of BcpCursorLessThan @ 0x14066FC38
 * Callers:
 *     BcpDisplayProgress @ 0x140670320 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
