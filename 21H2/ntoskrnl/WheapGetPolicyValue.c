/*
 * XREFs of WheapGetPolicyValue @ 0x140A09950
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140646AB8 (WheapWmiExecutePolicyManagementMethod.c)
 *     WheapGetAllPolicyValues @ 0x140A0990C (WheapGetAllPolicyValues.c)
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
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  bool v10; // zf
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx

  if ( a1 >= 0x11 )
    return 3221225485LL;
  if ( a1 > 8 )
  {
    v11 = a1 - 9;
    if ( !v11 )
    {
      v3 = WheapPolicyRestoreCmciErrorLimit;
      goto LABEL_39;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v3 = WheapPolicyCmciThresholdCount;
      goto LABEL_39;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v3 = WheapPolicyCmciThresholdTime;
      goto LABEL_39;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v3 = WheapPolicyCmciThresholdPollCount;
      goto LABEL_39;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v3 = WheapPolicyPendingPageListSz;
      goto LABEL_39;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v3 = WheapPolicyBadPageListMaxSize;
      goto LABEL_39;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      v3 = WheapPolicyBadPageListLocation;
      goto LABEL_39;
    }
    if ( v17 == 1 )
    {
      v3 = 0;
      v10 = WheapPolicyNotifyAllOfflines == 0;
      goto LABEL_14;
    }
  }
  else
  {
    if ( a1 == 8 )
    {
      v3 = WheapPolicyRestoreCmciMaxAttempts;
      goto LABEL_39;
    }
    v3 = 0;
    if ( !a1 )
    {
      v10 = WheapPolicyDisableOffline == 0;
      goto LABEL_14;
    }
    v4 = a1 - 1;
    if ( !v4 )
    {
      v10 = WheapPolicyMemPersistOffline == 0;
      goto LABEL_14;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v10 = WheapPolicyMemPfaDisable == 0;
      goto LABEL_14;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v3 = WheapPolicyMemPfaPageCount;
      goto LABEL_39;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v3 = WheapPolicyMemPfaThreshold;
      goto LABEL_39;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        v10 = WheaRegPolicyIgnoreDummyWrite == 0;
        goto LABEL_14;
      }
      if ( v9 == 1 )
      {
        v10 = WheapPolicyRestoreCmciEnabled == 0;
LABEL_14:
        LOBYTE(v3) = !v10;
LABEL_39:
        *a2 = v3;
      }
    }
    else
    {
      *a2 = WheapPolicyMemPfaTimeout / 0x989680uLL;
    }
  }
  return 0LL;
}
