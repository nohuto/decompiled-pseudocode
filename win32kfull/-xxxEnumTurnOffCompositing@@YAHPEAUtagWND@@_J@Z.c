/*
 * XREFs of ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01BDC50
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 */

__int64 __fastcall xxxEnumTurnOffCompositing(struct tagWND *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v1 + 27) & 2) != 0 )
    xxxSetWindowStyle(a1, -20, *(_DWORD *)(v1 + 24) & 0x87F77FF);
  return 1LL;
}
