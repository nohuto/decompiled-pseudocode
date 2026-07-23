/*
 * XREFs of WheapGetPolicyValue @ 0x14095E074
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1405BE110 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapGetAllPolicyValues @ 0x14095E030 (WheapGetAllPolicyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetPolicyValue(unsigned int a1, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  bool v8; // zf
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx

  if ( a1 >= 0xD )
    return 3221225485LL;
  if ( a1 <= 6 )
  {
    if ( a1 == 6 )
    {
      v3 = 0;
      v8 = WheaRegPolicyIgnoreDummyWrite == 0;
    }
    else
    {
      v3 = 0;
      if ( a1 )
      {
        v4 = a1 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( v7 )
              {
                if ( v7 == 1 )
                  *a2 = WheapPolicyMemPfaTimeout / 0x989680uLL;
                return 0LL;
              }
              v3 = WheapPolicyMemPfaThreshold;
            }
            else
            {
              v3 = WheapPolicyMemPfaPageCount;
            }
            goto LABEL_31;
          }
          v8 = WheapPolicyMemPfaDisable == 0;
        }
        else
        {
          v8 = WheapPolicyMemPersistOffline == 0;
        }
      }
      else
      {
        v8 = WheapPolicyDisableOffline == 0;
      }
    }
    goto LABEL_30;
  }
  v9 = a1 - 7;
  if ( !v9 )
  {
    v3 = 0;
    v8 = WheapPolicyRestoreCmciEnabled == 0;
LABEL_30:
    LOBYTE(v3) = !v8;
    goto LABEL_31;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v3 = WheapPolicyRestoreCmciMaxAttempts;
    goto LABEL_31;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v3 = WheapPolicyRestoreCmciErrorLimit;
    goto LABEL_31;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v3 = WheapPolicyCmciThresholdCount;
    goto LABEL_31;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v3 = WheapPolicyCmciThresholdTime;
    goto LABEL_31;
  }
  if ( v13 == 1 )
  {
    v3 = WheapPolicyCmciThresholdPollCount;
LABEL_31:
    *a2 = v3;
  }
  return 0LL;
}
