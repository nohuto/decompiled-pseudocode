struct VIDPNTARGETINFO *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        unsigned int a2)
{
  if ( a2 >= 4 )
    return 0LL;
  else
    return (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 248 * a2 + 964);
}
