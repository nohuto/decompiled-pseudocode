__int64 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx

  if ( (*a2 & 4) == 0 )
    return 0LL;
  v2 = 0;
  if ( (_BYTE)KiKernelCetEnabled )
    return 0LL;
  LOBYTE(v2) = (unsigned int)KiIsHyperVCr3RspErrataPresent() == 0;
  return v2;
}
