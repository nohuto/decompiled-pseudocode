/*
 * XREFs of WheapApplyPolicyChanges @ 0x14095DD1C
 * Callers:
 *     WheapPfaReset @ 0x14095E7A4 (WheapPfaReset.c)
 * Callees:
 *     HalWheaUpdateCmciPolicy @ 0x1403BABF0 (HalWheaUpdateCmciPolicy.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 */

void WheapApplyPolicyChanges()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  int *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  BOOL v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  bool v10; // zf

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  do
  {
    if ( WheaRegPolicyTableChanged[v1] )
    {
      if ( v2 >= 39 )
        _report_rangecheckfailure();
      v3 = (&off_140985208)[v2];
      WheaRegPolicyTableChanged[v1] = 0;
      if ( v0 > 6 )
      {
        switch ( v0 )
        {
          case 7u:
            v10 = *v3 == 0;
            v9 = 7;
            WheaRegistryKeysPresent |= 0x200u;
            WheapPolicyRestoreCmciEnabled = !v10;
            v8 = !v10;
            break;
          case 8u:
            v8 = *v3;
            v9 = 8;
            WheaRegistryKeysPresent |= 0x400u;
            WheapPolicyRestoreCmciMaxAttempts = v8;
            break;
          case 9u:
            v8 = *v3;
            v9 = 9;
            WheaRegistryKeysPresent |= 0x800u;
            WheapPolicyRestoreCmciErrorLimit = v8;
            break;
          case 0xAu:
            v8 = *v3;
            v9 = 10;
            WheaRegistryKeysPresent |= 0x1000u;
            WheapPolicyCmciThresholdCount = v8;
            break;
          default:
            v8 = *v3;
            if ( v0 == 11 )
            {
              v9 = 11;
              WheaRegistryKeysPresent |= 0x2000u;
              WheapPolicyCmciThresholdTime = v8;
            }
            else
            {
              v9 = 12;
              WheaRegistryKeysPresent |= 0x4000u;
              WheapPolicyCmciThresholdPollCount = v8;
            }
            break;
        }
        HalWheaUpdateCmciPolicy(v9, v8);
      }
      else if ( v0 == 6 )
      {
        v7 = *v3 != 0;
        WheaRegistryKeysPresent |= 0x100u;
        WheaRegPolicyIgnoreDummyWrite = v7;
      }
      else if ( v0 )
      {
        switch ( v0 )
        {
          case 1u:
            WheapPolicyMemPersistOffline = *v3 != 0;
            WheaRegistryKeysPresent |= 2u;
            break;
          case 2u:
            WheapPolicyMemPfaDisable = *v3 != 0;
            WheaRegistryKeysPresent |= 4u;
            break;
          case 3u:
            v6 = *v3;
            WheaRegistryKeysPresent |= 8u;
            WheapPolicyMemPfaPageCount = v6;
            break;
          case 4u:
            v5 = *v3;
            WheaRegistryKeysPresent |= 0x10u;
            WheapPolicyMemPfaThreshold = v5;
            break;
          default:
            v4 = (unsigned int)*v3;
            WheaRegistryKeysPresent |= 0x20u;
            WheapPolicyMemPfaTimeout = 10000000 * v4;
            break;
        }
      }
      else
      {
        WheapPolicyDisableOffline = *v3 != 0;
        WheaRegistryKeysPresent |= 1u;
      }
    }
    ++v0;
    ++v1;
    v2 += 3LL;
  }
  while ( v0 < 0xD );
}
