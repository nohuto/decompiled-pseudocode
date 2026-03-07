__int64 __fastcall NtUserGetThreadState(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 *v14; // rax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  HANDLE CurrentProcessId; // rax
  __int64 v22; // rdx

  v3 = a1;
  if ( (_DWORD)a1 == 14 )
    return 1LL;
  v5 = EnterSharedCrit(a1, a2, a3);
  v7 = 0LL;
  v8 = v5;
  if ( v3 > 7 )
  {
    v15 = v3 - 8;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 == 2 )
                  v7 = (*(_DWORD *)(v5 + 1272) >> 29) & 1;
              }
              else
              {
                CurrentProcessId = PsGetCurrentProcessId();
                v6 = gpidLogon;
                if ( CurrentProcessId == (HANDLE)gpidLogon || *(PVOID *)(v8 + 456) == grpdeskLogon )
                  v7 = 1LL;
              }
            }
            else
            {
              v7 = *(_QWORD *)(v5 + 800);
            }
          }
          else
          {
            v7 = *(unsigned int *)(*(_QWORD *)(v5 + 424) + 768LL);
          }
        }
        else
        {
          v6 = gpqForeground;
          LOBYTE(v7) = *(_QWORD *)(v5 + 432) == gpqForeground;
        }
      }
      else
      {
        v7 = *(int *)(v5 + 568);
      }
    }
    else
    {
      v6 = *(_QWORD *)(v5 + 512);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 32) )
        {
          v22 = 1LL;
        }
        else
        {
          v22 = 4LL;
          if ( (*(_DWORD *)(v6 + 84) & 0x300) == 0 )
            v22 = 2LL;
        }
        v7 = v22 | 8;
        if ( (*(_DWORD *)(v6 + 84) & 1) == 0 )
          v7 = v22;
      }
    }
    goto LABEL_46;
  }
  if ( v3 != 7 )
  {
    if ( v3 )
    {
      v9 = v3 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 )
                {
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 8692LL);
                  v7 = *(int *)(*(_QWORD *)(v8 + 448) + 4LL);
                }
              }
              else
              {
                LOBYTE(v7) = (GetQueueStatus(7295LL) & 5) != 0;
              }
              goto LABEL_46;
            }
            v14 = *(__int64 **)(v5 + 792);
          }
          else
          {
            v14 = *(__int64 **)(v5 + 784);
          }
          if ( v14 )
            v7 = *v14;
          goto LABEL_46;
        }
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 112LL);
      }
      else
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 128LL);
      }
    }
    else
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 120LL);
    }
    if ( v6 )
      v7 = *(_QWORD *)v6;
    goto LABEL_46;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 432) + 408LL);
LABEL_46:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
