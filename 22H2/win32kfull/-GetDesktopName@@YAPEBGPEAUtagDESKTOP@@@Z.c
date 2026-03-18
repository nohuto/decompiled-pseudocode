/*
 * XREFs of ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C009C538
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006DCB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009C3C0 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall GetDesktopName(struct tagDESKTOP *a1)
{
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 198;
  if ( !a1 || ObQueryNameString(a1, &s_strName, 0xC6u, &ReturnLength) < 0 )
    return L"null";
  s_strName.Name.Buffer[(unsigned __int64)s_strName.Name.Length >> 1] = 0;
  return s_strName.Name.Buffer;
}
