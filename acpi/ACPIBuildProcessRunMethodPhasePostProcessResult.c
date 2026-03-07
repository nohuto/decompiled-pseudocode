__int64 __fastcall ACPIBuildProcessRunMethodPhasePostProcessResult(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  char v4; // r8
  const char *v5; // rax
  const char *v6; // rcx
  __int64 v7; // rdx

  v1 = (*(_DWORD *)(a1 + 84) & 0x100) == 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v1 )
  {
    PerformDLMObjectBindings(a1 + 88, **(_QWORD **)(a1 + 56));
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(a1 + 88, 1LL);
  }
  v4 = 0;
  v5 = (const char *)&unk_1C00622D0;
  v6 = (const char *)&unk_1C00622D0;
  if ( v3 )
  {
    v7 = v3[1];
    v4 = (char)v3;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v3[76];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x44u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      0,
      v4,
      v5,
      v6);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
