void __fastcall ShellHangDetection::Execute(ShellHangDetection *this)
{
  __int64 v1; // rdi
  const struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rbx

  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  v2 = *(const struct tagTHREADINFO **)(v1 + 280);
  if ( v2 && IsThreadHungTimeCheck(*(const struct tagTHREADINFO **)(v1 + 280), gdwHungAppTimeout)
    || (v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 192LL)) != 0
    && (v2 = *(const struct tagTHREADINFO **)(v3 + 16)) != 0LL
    && IsThreadHungTimeCheck(v2, gdwHungAppTimeout) )
  {
    ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer(v2);
  }
}
