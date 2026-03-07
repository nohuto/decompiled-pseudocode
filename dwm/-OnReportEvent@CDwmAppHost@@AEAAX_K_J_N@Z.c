void __fastcall CDwmAppHost::OnReportEvent(CDwmAppHost *this, int a2, unsigned int a3, char a4)
{
  unsigned int v5; // r8d

  v5 = HIWORD(a2) | 0x40000000;
  if ( a4 )
    CDwmAppHost::ReportEventWithDword(this, a2, v5, a3);
  else
    CDwmAppHost::ReportEventW(this, a2, v5, 0LL);
}
