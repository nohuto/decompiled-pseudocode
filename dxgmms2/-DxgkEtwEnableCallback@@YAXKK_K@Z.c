void __fastcall DxgkEtwEnableCallback()
{
  bool v0; // al

  v0 = (qword_1C0076010 & 0x461C8ED7) != 0 && (qword_1C0076018 & 0xFFFFFFFFB9E37128uLL) == 0;
  bTracingEnabled = v0;
}
