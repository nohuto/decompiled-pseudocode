/*
 * XREFs of ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C009A76C
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 */

void SetWindowArrangementHotKeys(void)
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = &unk_1C02E1B64;
  v1 = 8LL;
  do
  {
    LODWORD(BugCheckParameter2) = v0[1];
    RegisterHotKey(0LL, BugCheckParameter2);
    v0 += 10;
    --v1;
  }
  while ( v1 );
}
