__int64 __fastcall SysMmDisableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-38h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry1(3LL, 2868LL);
    return 3221225485LL;
  }
  else if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
  {
    v6 = 0;
    SmmAcquirePushLockExclusive<4>(v5 + 64);
    v11 = *(unsigned int *)(a1 + 96);
    if ( ((unsigned int)v11 & (unsigned int)v3) == 0 )
      WdLogSingleEntry5(0LL, 484LL, 3LL, a1, v11, v3);
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = v3;
    if ( *(_DWORD *)(a1 + 96) != (_DWORD)v3 || (v6 = SmmIommuSwitchToPassthrough((struct SYSMM_ADAPTER *)a1), v6 >= 0) )
    {
      SmmTelemetryDisableIommu((const struct SYSMM_ADAPTER *)a1, v3, *(_DWORD *)(a1 + 96));
      if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      {
        LODWORD(v14) = v3;
        McTemplateK0pt_EtwWriteTransfer(SysMmControlGuid_Context, (const EVENT_DESCRIPTOR *)"\n", v13, a1, v14);
      }
      *(_DWORD *)(a1 + 96) &= ~(_DWORD)v3;
    }
    SmmReleasePushLockExclusive<4>(a1 + 64);
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry1(1LL, 2874LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Can only disable IOMMU from v2 or v3 interface",
      2874LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
