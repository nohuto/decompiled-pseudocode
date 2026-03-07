__int64 __fastcall HUBDSM_SettingResetOnLastResumeFlagForPDOAfterD3Cold(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0x40u);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0x2000u);
  return 4077LL;
}
