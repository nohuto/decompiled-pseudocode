/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x1409821EC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140879AD8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1409835B4 (PopPluginQuerySocSubsystemMetadata.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rax
  char *Pool2; // rdi
  unsigned int v11; // eax
  unsigned int i; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  int *v15; // rax
  __int64 v16; // rcx
  int *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int j; // edx
  char *v21; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v22; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // r8
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rdx
  ULONG v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rax
  bool v37; // zf
  REGHANDLE v38; // r12
  __int64 v40; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v41; // [rsp+90h] [rbp+48h] BYREF
  int v42; // [rsp+94h] [rbp+4Ch]
  int v43; // [rsp+98h] [rbp+50h]
  int v44; // [rsp+A0h] [rbp+58h] BYREF
  ULONG UserDataCount; // [rsp+A8h] [rbp+60h]

  v44 = a3;
  v43 = a2;
  v42 = HIDWORD(a1);
  v41 = 0;
  v3 = a2;
  v40 = PopWnfCsEnterScenarioId;
  v4 = 0;
  LOBYTE(v44) = 0;
  v5 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    if ( *(_DWORD *)(v5 + 20) )
    {
      do
      {
        v8 = 344LL * v7;
        v9 = *(unsigned int *)(v8 + v6 + 104);
        v41 = v9;
        if ( (_DWORD)v9 )
        {
          Pool2 = (char *)ExAllocatePool2(256LL, 296 * v9, 1297630800LL);
          if ( !Pool2 )
            return (unsigned int)-1073741670;
          v11 = v41;
          for ( i = 0; i < v41; v11 = v41 )
          {
            v13 = i++;
            v14 = 296 * v13;
            *(_QWORD *)&Pool2[v14 + 8] = &Pool2[296 * v13 + 32];
            *(_WORD *)&Pool2[v14 + 2] = 128;
            *(_QWORD *)&Pool2[v14 + 24] = &Pool2[296 * v13 + 164];
            *(_WORD *)&Pool2[v14 + 18] = 128;
            *(_DWORD *)&Pool2[v14 + 160] = -1430541637;
            *(_DWORD *)&Pool2[v14 + 292] = -1430541637;
          }
          v15 = (int *)ExAllocatePool2(256LL, (int)(8 * v11 + 32), 1297630800LL);
          v17 = v15;
          if ( v15 )
          {
            *v15 = v3;
            v18 = 0LL;
            v19 = *(_QWORD *)(v8 + v6 + 64);
            v17[6] = 0;
            *((_QWORD *)v17 + 1) = v19;
            *((_QWORD *)v17 + 2) = v8 + v6 + 40;
            for ( v17[7] = v41; (unsigned int)v18 < v41; v18 = (unsigned int)(v18 + 1) )
            {
              v16 = (unsigned int)v18;
              *(_QWORD *)&v17[2 * v18 + 8] = &Pool2[296 * (unsigned int)v18];
            }
            if ( (unsigned __int8)PopPluginQuerySocSubsystemMetadata(v16, *(unsigned int *)(v8 + v6 + 60), v17) )
            {
              for ( j = 0; j < v41; ++j )
              {
                v21 = &Pool2[296 * j];
                if ( *((_DWORD *)v21 + 40) != -1430541637 )
                  PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *((unsigned __int16 *)v21 + 1));
                if ( *((_DWORD *)v21 + 73) != -1430541637 )
                  PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *((unsigned __int16 *)v21 + 9));
              }
              UserDataCount = v41 + 4 * v41 + 3;
              v22 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePool2(256LL, 16LL * UserDataCount, 1297630800LL);
              UserData = v22;
              if ( v22 )
              {
                v24 = 2;
                LOBYTE(v44) = v40;
                v25 = 0;
                *(_QWORD *)&v22->Size = 1LL;
                v22->Ptr = (ULONGLONG)&v44;
                v22[1].Ptr = (ULONGLONG)&v41;
                for ( *(_QWORD *)&v22[1].Size = 4LL; v25 < v41; *(_QWORD *)&UserData[v34].Size = v35 )
                {
                  v26 = v24;
                  UserData[v26].Ptr = v8 + v6 + 72;
                  *(_QWORD *)&UserData[v26].Size = 16LL;
                  v27 = v25++;
                  v28 = &Pool2[296 * v27];
                  *((_DWORD *)v28 + 40) = *(unsigned __int16 *)v28 >> 1;
                  v29 = v24 + 1;
                  v30 = v24 + 2;
                  v29 *= 2LL;
                  v31 = v30;
                  *(&UserData->Ptr + v29) = (ULONGLONG)(v28 + 160);
                  *((_QWORD *)&UserData->Size + v29) = 4LL;
                  v32 = *(unsigned __int16 *)v28;
                  UserData[v31].Ptr = *((_QWORD *)v28 + 1);
                  UserData[v31].Size = v32;
                  UserData[v31].Reserved = 0;
                  *((_DWORD *)v28 + 73) = *((unsigned __int16 *)v28 + 8) >> 1;
                  v33 = v30 + 1;
                  v30 += 2;
                  v33 *= 2LL;
                  v34 = v30;
                  v24 = v30 + 1;
                  *(&UserData->Ptr + v33) = (ULONGLONG)(v28 + 292);
                  *((_QWORD *)&UserData->Size + v33) = 4LL;
                  v35 = *((unsigned __int16 *)v28 + 8);
                  UserData[v34].Ptr = *((_QWORD *)v28 + 3);
                }
                v36 = v24;
                v37 = PopDiagSleepStudyHandleRegistered == 0;
                UserData[v36].Ptr = (ULONGLONG)&v40;
                *(_QWORD *)&UserData[v36].Size = 8LL;
                if ( !v37 )
                {
                  v38 = PopDiagSleepStudyHandle;
                  if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
                    EtwWrite(v38, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
                }
                ExFreePoolWithTag(UserData, 0x4D584650u);
              }
              else
              {
                v4 = -1073741670;
              }
              v3 = v43;
            }
            else
            {
              v4 = -1073741595;
            }
          }
          else
          {
            v4 = -1073741670;
          }
          ExFreePoolWithTag(Pool2, 0x4D584650u);
          if ( v17 )
            ExFreePoolWithTag(v17, 0x4D584650u);
          if ( v4 < 0 )
            return (unsigned int)v4;
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v6 + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v4;
}
