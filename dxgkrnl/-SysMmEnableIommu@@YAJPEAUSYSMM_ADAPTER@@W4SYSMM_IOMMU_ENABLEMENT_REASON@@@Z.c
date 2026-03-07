__int64 __fastcall SysMmEnableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-18h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry1(3LL, 2778LL);
    return 3221225485LL;
  }
  v5 = 0;
  SmmAcquirePushLockExclusive<4>(a1 + 64);
  v10 = *(unsigned int *)(a1 + 96);
  if ( ((unsigned int)v10 & (unsigned int)v3) != 0 )
    WdLogSingleEntry5(0LL, 484LL, 2LL, a1, v10, v3);
  v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = v3;
  if ( *(_DWORD *)(a1 + 96) )
  {
LABEL_11:
    SmmTelemetryEnableIommu((const struct SYSMM_ADAPTER *)a1, v3, *(_DWORD *)(a1 + 96));
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    {
      LODWORD(v14) = v3;
      McTemplateK0pt_EtwWriteTransfer(SysMmControlGuid_Context, &EnableIommu, v13, a1, v14);
    }
    *(_DWORD *)(a1 + 96) |= v3;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 20) & 4) != 0 )
  {
    if ( (_DWORD)v3 == 128 )
      v12 = SmmIommuSwitchToGpuVaIoMmu(a1);
    else
      v12 = SmmIommuSwitchToTranslation(a1);
    v5 = v12;
    if ( v12 < 0 )
      goto LABEL_14;
    goto LABEL_11;
  }
  WdLogSingleEntry1(3LL, a1);
  v5 = -1073741637;
LABEL_14:
  SmmReleasePushLockExclusive<4>(a1 + 64);
  return v5;
}
