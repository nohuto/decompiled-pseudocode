void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(CTouchProcessor *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  char v4; // al
  CTouchProcessor *v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 i; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE v12[48]; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v12,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v3 = (__int64 *)*((_QWORD *)this + 7);
  v4 = 0;
  LOBYTE(v13) = 0;
  if ( v3 != (__int64 *)((char *)this + 56) )
  {
    do
    {
      v6 = 0;
      v7 = v3[30];
      for ( i = v3[29]; v6 < *((_DWORD *)v3 + 10); ++v6 )
      {
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v2, v7 + 160LL * v6 + 16, &v13);
        v9 = 480LL * v6;
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v10, v9 + i + 24, &v13);
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v11, v9 + i + 352, &v13);
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != (__int64 *)((char *)this + 56) );
    v4 = v13;
  }
  if ( !gbIgnoreStressedOutStuff && v4 )
  {
    v13 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17009LL);
  }
  LOBYTE(v13) = 0;
  v5 = (CTouchProcessor *)*((_QWORD *)this + 9);
  if ( v5 != (CTouchProcessor *)((char *)this + 72) )
  {
    do
    {
      lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v2, (char *)v5 + 72, &v13);
      v5 = *(CTouchProcessor **)v5;
    }
    while ( v5 != (CTouchProcessor *)((char *)this + 72) );
    if ( (_BYTE)v13 )
    {
      v13 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 17019LL);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v12);
}
