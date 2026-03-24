/*
 * XREFs of ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C0030684
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0032BD4 (_RegisterHotKey.c)
 */

void SetWindowArrangementHotKeys(void)
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = &unk_1C02E5164;
  v1 = 14LL;
  do
  {
    LODWORD(BugCheckParameter2) = v0[1];
    RegisterHotKey(0LL, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
}
