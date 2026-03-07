void WheapApplyPolicyChanges()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  unsigned int *v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ecx
  bool v8; // zf
  BOOL v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  do
  {
    if ( !WheaRegPolicyTableChanged[v1] )
      goto LABEL_44;
    if ( v2 >= 80 )
      _report_rangecheckfailure();
    v3 = (unsigned int *)(&off_140A77418)[v2];
    WheaRegPolicyTableChanged[v1] = 0;
    if ( v0 <= 0xA )
    {
      if ( v0 == 10 )
      {
        v6 = *v3;
        v7 = 10;
        WheaRegistryKeysPresent |= 0x1000u;
        WheapPolicyCmciThresholdCount = v6;
      }
      else
      {
        if ( v0 <= 5 )
        {
          if ( v0 == 5 )
          {
            v5 = *v3;
            WheaRegistryKeysPresent |= 0x20u;
            WheapPolicyMemPfaTimeout = 10000000 * v5;
          }
          else if ( v0 )
          {
            if ( v0 == 1 )
            {
              WheapPolicyMemPersistOffline = *v3 != 0;
              WheaRegistryKeysPresent |= 2u;
            }
            else if ( v0 == 2 )
            {
              WheapPolicyMemPfaDisable = *v3 != 0;
              WheaRegistryKeysPresent |= 4u;
            }
            else
            {
              v4 = *v3;
              if ( v0 == 3 )
              {
                WheaRegistryKeysPresent |= 8u;
                WheapPolicyMemPfaPageCount = v4;
              }
              else
              {
                WheaRegistryKeysPresent |= 0x10u;
                WheapPolicyMemPfaThreshold = v4;
              }
            }
          }
          else
          {
            WheapPolicyDisableOffline = *v3 != 0;
            WheaRegistryKeysPresent |= 1u;
          }
          goto LABEL_44;
        }
        if ( v0 == 6 )
        {
          v9 = *v3 != 0;
          WheaRegistryKeysPresent |= 0x100u;
          WheaRegPolicyIgnoreDummyWrite = v9;
          goto LABEL_44;
        }
        if ( v0 == 7 )
        {
          v8 = *v3 == 0;
          v7 = 7;
          WheaRegistryKeysPresent |= 0x200u;
          WheapPolicyRestoreCmciEnabled = !v8;
          v6 = !v8;
        }
        else
        {
          v6 = *v3;
          if ( v0 == 8 )
          {
            v7 = 8;
            WheaRegistryKeysPresent |= 0x400u;
            WheapPolicyRestoreCmciMaxAttempts = v6;
          }
          else
          {
            v7 = 9;
            WheaRegistryKeysPresent |= 0x800u;
            WheapPolicyRestoreCmciErrorLimit = v6;
          }
        }
      }
LABEL_43:
      HalWheaUpdateCmciPolicy(v7, v6);
      goto LABEL_44;
    }
    switch ( v0 )
    {
      case 0xBu:
        v6 = *v3;
        v7 = 11;
        WheaRegistryKeysPresent |= 0x2000u;
        WheapPolicyCmciThresholdTime = v6;
        goto LABEL_43;
      case 0xCu:
        v6 = *v3;
        v7 = 12;
        WheaRegistryKeysPresent |= 0x4000u;
        WheapPolicyCmciThresholdPollCount = v6;
        goto LABEL_43;
      case 0xDu:
        v14 = *v3;
        WheaRegistryKeysPresent |= 0x8000u;
        WheapPolicyPendingPageListSz = v14;
        break;
      case 0xEu:
        v13 = *v3;
        WheaRegistryKeysPresent |= 0x10000u;
        WheapPolicyBadPageListMaxSize = v13;
        break;
      case 0xFu:
        v12 = *v3;
        WheaRegistryKeysPresent |= 0x20000u;
        WheapPolicyBadPageListLocation = v12;
        break;
      case 0x10u:
        WheapPolicyNotifyAllOfflines = *v3 != 0;
        WheaRegistryKeysPresent |= 0x40000u;
        break;
      case 0x11u:
        v11 = *v3;
        WheaRegistryKeysPresent |= 0x80000u;
        WheapPolicyRowFailCheckExtent = v11;
        break;
      case 0x12u:
        WheapPolicyRowFailCheckEnable = *v3 != 0;
        WheaRegistryKeysPresent |= 0x100000u;
        break;
      default:
        v10 = *v3;
        WheaRegistryKeysPresent |= 0x200000u;
        WheapPolicyRowFailCheckThreshold = v10;
        break;
    }
LABEL_44:
    ++v0;
    ++v1;
    v2 += 4LL;
  }
  while ( v0 < 0x14 );
}
