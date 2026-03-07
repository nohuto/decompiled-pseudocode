__int64 __fastcall DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(DMMVIDPNPRESENTPATH *this)
{
  if ( *((_DWORD *)this + 43) != 2 )
    WdLogSingleEntry0(1LL);
  return *((unsigned int *)this + 44);
}
