__int64 __fastcall DirectComposition::CInteractionMarshaler::SetBufferProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  char *v6; // rcx

  *a6 = 0;
  if ( a4 && a5 == 16 )
  {
    if ( a3 == 1 || a3 == 2 || a3 == 3 )
    {
      v6 = (char *)this + 56;
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(v6, a4);
    }
    if ( (unsigned int)(a3 - 8) <= 1 )
    {
      v6 = (char *)this + 160;
      return DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(v6, a4);
    }
  }
  return 3221225485LL;
}
