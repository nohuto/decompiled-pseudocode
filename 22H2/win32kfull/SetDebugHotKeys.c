/*
 * XREFs of SetDebugHotKeys @ 0x1C00090CC
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0032BD4 (_RegisterHotKey.c)
 */

__int64 SetDebugHotKeys()
{
  int v0; // eax
  int v1; // eax
  unsigned __int8 v2; // cf
  ULONG_PTR *BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR v6; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v6) = 0;
  BugCheckParameter2 = &v6;
  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey");
  v0 = v6;
  if ( !(_DWORD)v6 )
  {
    if ( gKeyboardInfo > 8u || (v1 = 404, v2 = _bittest(&v1, gKeyboardInfo), v0 = 123, !v2) )
      v0 = 109;
    LODWORD(v6) = v0;
  }
  LODWORD(BugCheckParameter2) = v0;
  RegisterHotKey((struct tagWND *)1, (ULONG_PTR)BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = v6;
  return RegisterHotKey((struct tagWND *)1, BugCheckParameter2a);
}
