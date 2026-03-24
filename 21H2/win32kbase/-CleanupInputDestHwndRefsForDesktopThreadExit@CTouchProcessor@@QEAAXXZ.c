/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1C00CCC10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     _lambda_eba40ec2e57c463160aa5102b24468e6_::operator() @ 0x1C00CCBE4 (_lambda_eba40ec2e57c463160aa5102b24468e6_--operator().c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(CTouchProcessor *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // r12
  __int64 i; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 **v10; // rbx
  CInpLockGuard *v11[6]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v11,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v3 = (__int64 *)*((_QWORD *)this + 7);
  LOBYTE(v12) = 0;
  if ( v3 != (__int64 *)((char *)this + 56) )
  {
    do
    {
      v4 = 0;
      v5 = v3[17];
      for ( i = v3[16]; v4 < *((_DWORD *)v3 + 10); ++v4 )
      {
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v2, (CInputDest *)(v5 + 160LL * v4 + 16), (char *)&v12);
        v7 = 480LL * v4;
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v8, (CInputDest *)(v7 + i + 24), (char *)&v12);
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v9, (CInputDest *)(v7 + i + 352), (char *)&v12);
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != (__int64 *)((char *)this + 56) );
    if ( (_BYTE)v12 )
    {
      v12 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 16323LL);
    }
  }
  LOBYTE(v12) = 0;
  v10 = (__int64 **)*((_QWORD *)this + 9);
  if ( v10 != (__int64 **)((char *)this + 72) )
  {
    do
    {
      lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v2, (CInputDest *)(v10 + 8), (char *)&v12);
      v10 = (__int64 **)*v10;
    }
    while ( v10 != (__int64 **)((char *)this + 72) );
    if ( (_BYTE)v12 )
    {
      v12 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 16333LL);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v11);
}
