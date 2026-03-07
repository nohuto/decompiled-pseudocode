char HalpHvVpStartEnabled()
{
  if ( qword_140C621D0 )
    return qword_140C621D0();
  else
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
}
