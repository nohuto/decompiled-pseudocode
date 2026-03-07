struct VIDPNSOURCEINFO *__fastcall DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnSourceInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)this + 240);
  if ( (unsigned int)v1 >= 4 )
    return 0LL;
  else
    return (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 224 * v1 + 64);
}
