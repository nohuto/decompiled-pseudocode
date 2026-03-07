char __fastcall CAnimationTrigger::ShouldSendAnimationNotification(CAnimationTrigger *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 10) && *((_QWORD *)this + 11) && (*((_BYTE *)this + 128) & 2) == 0 )
    return 1;
  return result;
}
