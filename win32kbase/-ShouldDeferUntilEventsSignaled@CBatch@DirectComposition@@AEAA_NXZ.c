char __fastcall DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(DirectComposition::CBatch *this)
{
  __int64 i; // rbx
  void *v3; // rcx
  DirectComposition::CEvent *v4; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 13); ; *((_QWORD *)this + 13) = i )
  {
    if ( !i )
      return 0;
    v3 = *(void **)(i + 8);
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(v3, UserRequest, 0, 0, &Timeout) )
      break;
    v4 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
    i = *(_QWORD *)v4;
    if ( v4 )
      DirectComposition::CEvent::`scalar deleting destructor'(v4);
  }
  return 1;
}
