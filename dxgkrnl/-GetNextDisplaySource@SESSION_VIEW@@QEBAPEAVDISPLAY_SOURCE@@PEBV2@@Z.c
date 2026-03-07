struct DISPLAY_SOURCE *__fastcall SESSION_VIEW::GetNextDisplaySource(
        SESSION_VIEW *this,
        const struct DISPLAY_SOURCE *a2)
{
  SESSION_VIEW *v2; // r8

  v2 = (SESSION_VIEW *)*((_QWORD *)a2 + 7);
  if ( v2 == (SESSION_VIEW *)((char *)this + 48) )
    return 0LL;
  else
    return (SESSION_VIEW *)((char *)v2 - 56);
}
