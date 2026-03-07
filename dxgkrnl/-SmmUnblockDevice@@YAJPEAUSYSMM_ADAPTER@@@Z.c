__int64 __fastcall SmmUnblockDevice(struct SYSMM_ADAPTER *a1)
{
  __int64 v2; // rcx
  unsigned int *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // [rsp+68h] [rbp+10h] BYREF

  if ( !SmmUseIommuV2Interface() && !SmmUseIommuV3Interface() || (*(_DWORD *)(v2 + 20) & 4) == 0 )
    return 0LL;
  v4 = (unsigned int *)(v2 + 100);
  LODWORD(v5) = 0;
  v6 = **(_QWORD **)(v2 + 376);
  ((void (__fastcall *)(__int64, __int64))qword_1C013BC68)(v6, v2 + 100);
  v7 = *v4;
  if ( (_DWORD)v7 != 2 && (*((_DWORD *)a1 + 22) & 8) == 0 )
  {
    if ( (v7 & 2) == 0 )
    {
      if ( (v7 & 1) == 0 )
      {
        WdLogSingleEntry1(2LL, v7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"QueryAvailableDomainTypes returned unexpected list of available types. No passthrough or translate do"
                    "mains available. AvailableDomainTypes=0x%.8x",
          *v4,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v5) = -1073741823;
        return (unsigned int)v5;
      }
      v9 = SysMmEnableIommu(a1, 1LL);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v12 = 1;
        if ( SmmUseIommuV2Interface() || SmmUseIommuV3Interface() )
        {
          v10 = ((__int64 (__fastcall *)(void (__fastcall *)(struct _IOMMU_INTERFACE_STATE_CHANGE *, _DWORD *), struct SYSMM_ADAPTER *, __int64, int *))qword_1C013BC70)(
                  SmmDomainTypeStateChangeCallback,
                  a1,
                  v6,
                  &v12);
          LODWORD(v5) = v10;
          if ( v10 < 0 )
          {
            v11 = v10;
            WdLogSingleEntry1(2LL, v10);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to register domain state callback. Status=0x%.8x",
              v11,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        return (unsigned int)v5;
      }
      goto LABEL_9;
    }
    v8 = SmmIommuSwitchToPassthrough(a1);
    v5 = v8;
    if ( v8 < 0 )
LABEL_9:
      WdLogSingleEntry1(4LL, v5);
  }
  return (unsigned int)v5;
}
