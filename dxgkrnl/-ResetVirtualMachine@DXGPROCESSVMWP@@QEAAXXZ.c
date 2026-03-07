void __fastcall DXGPROCESSVMWP::ResetVirtualMachine(DXGPROCESSVMWP *this)
{
  DXGVIRTUALMACHINE *v2; // rcx
  int v3; // eax
  __int64 v4; // rbx

  v2 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
  if ( v2 )
    DXGVIRTUALMACHINE::ResetVirtualMachine(v2, 0);
  v3 = DXGPROCESS::DeferredInitialize(this, 1u);
  if ( v3 < 0 )
  {
    v4 = v3;
    WdLogSingleEntry1(2LL, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VidMm and VidSch processes: 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
    *((_BYTE *)this + 632) = 0;
  }
}
