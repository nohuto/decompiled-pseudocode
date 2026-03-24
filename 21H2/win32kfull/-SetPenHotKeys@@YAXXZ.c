/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C0009168
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0032C74 (_RegisterHotKey.c)
 *     Feature_PenTailDockEvents__private_ReportDeviceUsage @ 0x1C01676DC (Feature_PenTailDockEvents__private_ReportDeviceUsage.c)
 */

void SetPenHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-18h]

  Feature_PenTailDockEvents__private_ReportDeviceUsage();
  LODWORD(BugCheckParameter2) = 131;
  RegisterHotKey(0LL, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = 130;
  RegisterHotKey(0LL, BugCheckParameter2a);
  LODWORD(BugCheckParameter2b) = 129;
  RegisterHotKey(0LL, BugCheckParameter2b);
  LODWORD(BugCheckParameter2c) = 131;
  RegisterHotKey(0LL, BugCheckParameter2c);
  LODWORD(BugCheckParameter2d) = 130;
  RegisterHotKey(0LL, BugCheckParameter2d);
}
