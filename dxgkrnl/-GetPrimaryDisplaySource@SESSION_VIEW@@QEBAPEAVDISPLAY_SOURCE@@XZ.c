struct DISPLAY_SOURCE *__fastcall SESSION_VIEW::GetPrimaryDisplaySource(SESSION_VIEW *this)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DISPLAY_SOURCE *)(*v1 - 56LL);
}
