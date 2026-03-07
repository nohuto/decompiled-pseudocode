__int64 WheapLoadPolicy()
{
  bool v0; // zf
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v5; // [rsp+50h] [rbp+10h] BYREF
  int v6; // [rsp+58h] [rbp+18h]
  int v7; // [rsp+60h] [rbp+20h]

  v6 = 0;
  v5 = 0;
  v7 = 0;
  DestinationString = 0LL;
  if ( WheaRegPolicyDisableOffline != -1 )
    WheapPolicyDisableOffline = WheaRegPolicyDisableOffline != 0;
  if ( WheaRegPolicyMemPersistOffline != -1 )
  {
    v0 = WheaRegPolicyMemPersistOffline == 0;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v5) >= 0 && v5 == 4 && v6 == 4 )
  {
    v0 = v7 == 0;
LABEL_8:
    WheapPolicyMemPersistOffline = !v0;
  }
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheapPolicyMemPfaDisable = WheaRegPolicyMemPfaDisable != 0;
  v1 = WheaRegPolicyMemPfaPageCount;
  if ( (unsigned int)(WheaRegPolicyMemPfaPageCount - 1) <= 0xFFFF
    || (v1 = WheapMaxCorrectedMCEOutstanding, (unsigned int)(WheapMaxCorrectedMCEOutstanding - 1) <= 0xFFFF) )
  {
    WheapPolicyMemPfaPageCount = v1;
  }
  v2 = WheaRegPolicyMemPfaThreshold;
  if ( (unsigned int)(WheaRegPolicyMemPfaThreshold - 1) <= 0xFFFF
    || (v2 = WheapSingleBitEccErrorThreshold, (unsigned int)(WheapSingleBitEccErrorThreshold - 1) <= 0xFFFF) )
  {
    WheapPolicyMemPfaThreshold = v2;
  }
  if ( (unsigned int)WheaRegPolicyMemPfaTimeout <= 0x93A80 )
    WheapPolicyMemPfaTimeout = 10000000LL * (unsigned int)WheaRegPolicyMemPfaTimeout;
  if ( !WheapPolicyMemPfaPageCount || !WheapPolicyMemPfaThreshold )
    WheapPolicyMemPfaDisable = 1;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheapPolicyIgnoreDummyWrite = WheaRegPolicyIgnoreDummyWrite != 0;
  if ( WheapRegPolicyRestoreCmciEnabled != -1 )
    WheapPolicyRestoreCmciEnabled = WheapRegPolicyRestoreCmciEnabled != 0;
  byte_140C6A52C = WheapPolicyRestoreCmciEnabled;
  if ( WheapRegPolicyRestoreCmciMaxAttempts != -1 )
    WheapPolicyRestoreCmciMaxAttempts = WheapRegPolicyRestoreCmciMaxAttempts;
  HalWheaUpdateCmciPolicy(8, WheapPolicyRestoreCmciMaxAttempts);
  if ( WheapRegPolicyRestoreCmciErrorLimit != -1 )
    WheapPolicyRestoreCmciErrorLimit = WheapRegPolicyRestoreCmciErrorLimit;
  HalWheaUpdateCmciPolicy(9, WheapPolicyRestoreCmciErrorLimit);
  if ( WheapRegPolicyCmciThresholdCount != -1 )
  {
    WheapPolicyCmciThresholdCount = WheapRegPolicyCmciThresholdCount;
    HalWheaUpdateCmciPolicy(10, WheapRegPolicyCmciThresholdCount);
  }
  if ( WheapRegPolicyCmciThresholdTime != -1 )
  {
    WheapPolicyCmciThresholdTime = WheapRegPolicyCmciThresholdTime;
    HalWheaUpdateCmciPolicy(11, WheapRegPolicyCmciThresholdTime);
  }
  if ( WheapRegPolicyCmciThresholdPollCount != -1 )
  {
    WheapPolicyCmciThresholdPollCount = WheapRegPolicyCmciThresholdPollCount;
    HalWheaUpdateCmciPolicy(12, WheapRegPolicyCmciThresholdPollCount);
  }
  result = (unsigned int)WheapRegPolicyPendingPageListSz;
  if ( WheapRegPolicyPendingPageListSz != -1 )
    WheapPolicyPendingPageListSz = WheapRegPolicyPendingPageListSz;
  if ( WheaRegPolicyBadPageListMaxSize != -1 )
    WheapPolicyBadPageListMaxSize = WheaRegPolicyBadPageListMaxSize;
  if ( WheaRegPolicyBadPageListLocation != -1 )
    WheapPolicyBadPageListLocation = WheaRegPolicyBadPageListLocation;
  if ( WheaRegPolicyNotifyAllOfflines != -1 )
    WheapPolicyNotifyAllOfflines = WheaRegPolicyNotifyAllOfflines != 0;
  if ( WheaRegPolicyDisableOffline != -1 )
    WheaRegistryKeysPresent |= 1u;
  if ( WheaRegPolicyMemPersistOffline != -1 )
    WheaRegistryKeysPresent |= 2u;
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheaRegistryKeysPresent |= 4u;
  if ( WheaRegPolicyMemPfaPageCount != -1 )
    WheaRegistryKeysPresent |= 8u;
  if ( WheaRegPolicyMemPfaThreshold != -1 )
    WheaRegistryKeysPresent |= 0x10u;
  if ( WheaRegPolicyMemPfaTimeout != -1 )
    WheaRegistryKeysPresent |= 0x20u;
  if ( WheapSingleBitEccErrorThreshold != -1 )
    WheaRegistryKeysPresent |= 0x40u;
  if ( WheapMaxCorrectedMCEOutstanding != -1 )
    WheaRegistryKeysPresent |= 0x80u;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheaRegistryKeysPresent |= 0x100u;
  if ( WheapRegPolicyRestoreCmciEnabled != -1 )
    WheaRegistryKeysPresent |= 0x200u;
  if ( WheapRegPolicyRestoreCmciMaxAttempts != -1 )
    WheaRegistryKeysPresent |= 0x400u;
  if ( WheapRegPolicyRestoreCmciErrorLimit != -1 )
    WheaRegistryKeysPresent |= 0x800u;
  if ( WheapRegPolicyCmciThresholdCount != -1 )
    WheaRegistryKeysPresent |= 0x1000u;
  if ( WheapRegPolicyCmciThresholdTime != -1 )
    WheaRegistryKeysPresent |= 0x2000u;
  if ( WheapRegPolicyCmciThresholdPollCount != -1 )
    WheaRegistryKeysPresent |= 0x4000u;
  if ( WheapRegPolicyPendingPageListSz != -1 )
    WheaRegistryKeysPresent |= 0x8000u;
  if ( WheaRegPolicyBadPageListMaxSize != -1 )
    WheaRegistryKeysPresent |= 0x10000u;
  if ( WheaRegPolicyBadPageListLocation != -1 )
    WheaRegistryKeysPresent |= 0x20000u;
  if ( WheaRegPolicyNotifyAllOfflines != -1 )
    WheaRegistryKeysPresent |= 0x40000u;
  if ( WheaRegPolicyRowFailCheckExtent != -1 )
    WheaRegistryKeysPresent |= 0x80000u;
  if ( WheaRegPolicyRowFailCheckEnable != -1 )
    WheaRegistryKeysPresent |= 0x100000u;
  if ( WheaRegPolicyRowFailCheckThreshold != -1 )
    WheaRegistryKeysPresent |= 0x200000u;
  return result;
}
