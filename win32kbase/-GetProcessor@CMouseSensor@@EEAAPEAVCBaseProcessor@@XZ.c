struct CBaseProcessor *__fastcall CMouseSensor::GetProcessor(CMouseSensor *this)
{
  if ( gbInMitRitHandOff )
    return 0LL;
  else
    return (struct CBaseProcessor *)*((_QWORD *)this + 234);
}
