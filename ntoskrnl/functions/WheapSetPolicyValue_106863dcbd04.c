__int64 __fastcall WheapSetPolicyValue(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r10
  int *v5; // r9
  int v6; // edx
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
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx

  if ( a1 < 0x14 )
  {
    v2 = *a2;
    v3 = 4LL * a1;
    v4 = a1;
    if ( *a2 >= LODWORD(qword_140A77420[v3]) && v2 <= HIDWORD(qword_140A77420[v3]) )
    {
      _mm_lfence();
      v5 = (&off_140A77418)[v3];
      if ( *v5 != -1 )
      {
        if ( *v5 == v2 )
          return 0LL;
        goto LABEL_49;
      }
      if ( a1 > 0xA )
      {
        v15 = a1 - 11;
        if ( !v15 )
        {
          v10 = v2 == WheapRegPolicyCmciThresholdTime;
          goto LABEL_48;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v10 = v2 == WheapRegPolicyCmciThresholdPollCount;
          goto LABEL_48;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v10 = v2 == WheapRegPolicyPendingPageListSz;
          goto LABEL_48;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v10 = v2 == WheaRegPolicyBadPageListMaxSize;
          goto LABEL_48;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          v10 = v2 == WheaRegPolicyBadPageListLocation;
          goto LABEL_48;
        }
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            v10 = v2 == WheapPolicyRowFailCheckExtent;
            goto LABEL_48;
          }
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
              goto LABEL_49;
            v10 = v2 == WheapPolicyRowFailCheckThreshold;
            goto LABEL_48;
          }
          v11 = (unsigned __int8)WheapPolicyRowFailCheckEnable;
        }
        else
        {
          v11 = (unsigned __int8)WheapPolicyNotifyAllOfflines;
        }
        v6 = 0;
      }
      else
      {
        if ( a1 == 10 )
        {
          v10 = v2 == WheapRegPolicyCmciThresholdCount;
          goto LABEL_48;
        }
        if ( a1 > 5 )
        {
          v12 = a1 - 6;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 != 1 )
                  goto LABEL_49;
                v10 = v2 == WheapRegPolicyRestoreCmciErrorLimit;
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
          }
          else
          {
            v10 = v2 == WheaRegPolicyIgnoreDummyWrite;
          }
          goto LABEL_48;
        }
        if ( a1 == 5 )
        {
          v10 = v2 == (unsigned int)(WheapPolicyMemPfaTimeout / 0x989680uLL);
          goto LABEL_48;
        }
        v6 = 0;
        if ( a1 )
        {
          v7 = a1 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 != 1 )
                  goto LABEL_49;
                v10 = v2 == WheapPolicyMemPfaThreshold;
              }
              else
              {
                v10 = v2 == WheapPolicyMemPfaPageCount;
              }
LABEL_48:
              if ( v10 )
                return 0LL;
LABEL_49:
              *v5 = v2;
              WheaRegPolicyTableChanged[v4] = 1;
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
      }
      LOBYTE(v6) = v2 != 0;
      v10 = v6 == v11;
      goto LABEL_48;
    }
  }
  return 3221225485LL;
}
