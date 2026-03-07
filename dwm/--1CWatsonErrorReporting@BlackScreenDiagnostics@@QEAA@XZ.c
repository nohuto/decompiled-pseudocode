void __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting(
        BlackScreenDiagnostics::CWatsonErrorReporting *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  v2 = *(void **)this;
  if ( v2 && *((_BYTE *)this + 8) )
    WerReportCloseHandle(v2);
  v3 = *((_QWORD *)this + 13);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*((char **)this + 10), 2 * v3 + 2);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 7LL;
  *((_WORD *)this + 40) = 0;
  v4 = *((_QWORD *)this + 9);
  if ( v4 >= 8 )
    std::_Deallocate<16,0>(*((char **)this + 6), 2 * v4 + 2);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 7LL;
  *((_WORD *)this + 24) = 0;
  v5 = *((_QWORD *)this + 5);
  if ( v5 >= 8 )
    std::_Deallocate<16,0>(*((char **)this + 2), 2 * v5 + 2);
  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 8) = 0;
}
