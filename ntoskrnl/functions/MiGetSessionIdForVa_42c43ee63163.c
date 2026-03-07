__int64 __fastcall MiGetSessionIdForVa(__int64 a1, unsigned __int64 a2)
{
  if ( a2 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}
