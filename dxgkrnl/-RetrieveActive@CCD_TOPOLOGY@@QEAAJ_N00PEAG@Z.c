__int64 __fastcall CCD_TOPOLOGY::RetrieveActive(CCD_TOPOLOGY *this, bool a2, char a3, bool a4, unsigned __int16 *a5)
{
  int v8; // eax
  __int64 v9; // rdi
  CCD_BTL *v10; // rax
  char v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0;
  if ( a3
    || (v8 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v12, 0), v9 = v8, v8 >= 0) )
  {
    v10 = CCD_BTL::Global();
    LODWORD(v9) = CCD_BTL::RetrieveActiveTopology(v10, a2, a4, this, a5);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, this);
      if ( (int)v9 >= 0 )
        LODWORD(v9) = CCD_TOPOLOGY::FillPathsTargetFlags(this);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v12 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v9;
}
