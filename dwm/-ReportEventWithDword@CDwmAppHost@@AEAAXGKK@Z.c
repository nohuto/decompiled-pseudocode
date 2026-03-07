void __fastcall CDwmAppHost::ReportEventWithDword(CDwmAppHost *this, WORD a2, DWORD a3)
{
  CDwmAppHost *v5; // rcx
  unsigned __int16 v6[8]; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  __int16 v8; // [rsp+44h] [rbp-14h]

  v7 = 0;
  v8 = 0;
  *(_OWORD *)v6 = 0LL;
  StringCchPrintfW(v6, 0xBuLL, (size_t *)L"0x%x");
  CDwmAppHost::ReportEventW(v5, a2, a3, v6);
}
