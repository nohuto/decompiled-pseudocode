/*
 * XREFs of WheapSetPolicyValue @ 0x14095E218
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1405BE110 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapSetPolicyValue(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  int *v4; // r9
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  if ( a1 < 0xD )
  {
    v2 = *a2;
    v3 = a1;
    if ( *a2 >= dword_140985210[6 * a1] && v2 <= dword_140985214[6 * a1] )
    {
      _mm_lfence();
      v4 = (&off_140985208)[3 * a1];
      if ( *v4 == -1 )
      {
        if ( a1 > 6 )
        {
          v12 = a1 - 7;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    if ( v16 != 1 )
                      goto LABEL_36;
                    v10 = v2 == WheapRegPolicyCmciThresholdPollCount;
                  }
                  else
                  {
                    v10 = v2 == WheapRegPolicyCmciThresholdTime;
                  }
                }
                else
                {
                  v10 = v2 == WheapRegPolicyCmciThresholdCount;
                }
              }
              else
              {
                v10 = v2 == WheapRegPolicyRestoreCmciErrorLimit;
              }
            }
            else
            {
              v10 = v2 == WheapRegPolicyRestoreCmciMaxAttempts;
            }
          }
          else
          {
            v10 = v2 == WheapRegPolicyRestoreCmciEnabled;
          }
          goto LABEL_34;
        }
        if ( a1 == 6 )
        {
          v10 = v2 == WheaRegPolicyIgnoreDummyWrite;
          goto LABEL_34;
        }
        v5 = 0;
        if ( a1 )
        {
          v6 = a1 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              v8 = v7 - 1;
              if ( v8 )
              {
                v9 = v8 - 1;
                if ( v9 )
                {
                  if ( v9 != 1 )
                    goto LABEL_36;
                  v10 = v2 == (unsigned int)(WheapPolicyMemPfaTimeout / 0x989680uLL);
                }
                else
                {
                  v10 = v2 == WheapPolicyMemPfaThreshold;
                }
              }
              else
              {
                v10 = v2 == WheapPolicyMemPfaPageCount;
              }
LABEL_34:
              if ( v10 )
                return 0LL;
LABEL_36:
              *v4 = v2;
              WheaRegPolicyTableChanged[v3] = 1;
              return 0LL;
            }
            v11 = (unsigned __int8)WheapPolicyMemPfaDisable;
          }
          else
          {
            v11 = (unsigned __int8)WheapPolicyMemPersistOffline;
          }
        }
        else
        {
          v11 = (unsigned __int8)WheapPolicyDisableOffline;
        }
        LOBYTE(v5) = v2 != 0;
        v10 = v5 == v11;
        goto LABEL_34;
      }
      v10 = *v4 == v2;
      goto LABEL_34;
    }
  }
  return 3221225485LL;
}
