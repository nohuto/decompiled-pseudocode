/*
 * XREFs of WheapGetPolicyValue @ 0x140A06B4C
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140611EEC (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapGetAllPolicyValues @ 0x140A06B08 (WheapGetAllPolicyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetPolicyValue(unsigned int a1, int *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx

  if ( a1 >= 0x14 )
    return 3221225485LL;
  if ( a1 > 0xA )
  {
    v11 = a1 - 11;
    if ( !v11 )
    {
      v3 = WheapPolicyCmciThresholdTime;
      goto LABEL_46;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v3 = WheapPolicyCmciThresholdPollCount;
      goto LABEL_46;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v3 = WheapPolicyPendingPageListSz;
      goto LABEL_46;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v3 = WheapPolicyBadPageListMaxSize;
      goto LABEL_46;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v3 = WheapPolicyBadPageListLocation;
      goto LABEL_46;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        v3 = WheapPolicyRowFailCheckExtent;
        goto LABEL_46;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v3 = WheapPolicyRowFailCheckThreshold;
          goto LABEL_46;
        }
        return 0LL;
      }
      v3 = 0;
      v7 = WheapPolicyRowFailCheckEnable == 0;
    }
    else
    {
      v3 = 0;
      v7 = WheapPolicyNotifyAllOfflines == 0;
    }
    goto LABEL_15;
  }
  if ( a1 == 10 )
  {
    v3 = WheapPolicyCmciThresholdCount;
    goto LABEL_46;
  }
  if ( a1 > 5 )
  {
    v8 = a1 - 6;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          v3 = WheapPolicyRestoreCmciMaxAttempts;
          goto LABEL_46;
        }
        if ( v10 == 1 )
        {
          v3 = WheapPolicyRestoreCmciErrorLimit;
          goto LABEL_46;
        }
        return 0LL;
      }
      v3 = 0;
      v7 = WheapPolicyRestoreCmciEnabled == 0;
    }
    else
    {
      v3 = 0;
      v7 = WheaRegPolicyIgnoreDummyWrite == 0;
    }
LABEL_15:
    LOBYTE(v3) = !v7;
    goto LABEL_46;
  }
  if ( a1 == 5 )
  {
    *a2 = WheapPolicyMemPfaTimeout / 0x989680uLL;
    return 0LL;
  }
  v3 = 0;
  if ( !a1 )
  {
    v7 = WheapPolicyDisableOffline == 0;
    goto LABEL_15;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v7 = WheapPolicyMemPersistOffline == 0;
    goto LABEL_15;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = WheapPolicyMemPfaDisable == 0;
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v3 = WheapPolicyMemPfaPageCount;
    goto LABEL_46;
  }
  if ( v6 == 1 )
  {
    v3 = WheapPolicyMemPfaThreshold;
LABEL_46:
    *a2 = v3;
  }
  return 0LL;
}
