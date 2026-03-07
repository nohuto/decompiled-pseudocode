__int64 __fastcall CCD_TOPOLOGY::RetrieveAllPaths(CCD_TOPOLOGY *this, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  CCD_BTL *v6; // rax
  char v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  v4 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v8, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v6 = CCD_BTL::Global();
    LODWORD(v5) = CCD_BTL::RetrieveAllPaths(v6, this, a2);
    if ( (int)v5 >= 0 )
    {
      LODWORD(v5) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v5 >= 0 )
        LODWORD(v5) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  if ( v8 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v5;
}
