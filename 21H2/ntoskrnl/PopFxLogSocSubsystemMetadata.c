/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x1408E4E20
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E521C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1408E5FEC (PopPluginQuerySocSubsystemMetadata.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  size_t v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // rdi
  unsigned int v12; // eax
  unsigned int i; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  SIZE_T v16; // rbx
  unsigned int *v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int j; // edx
  char *v23; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v24; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v26; // r9d
  unsigned int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // r8
  __int64 v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rdx
  ULONG v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // ecx
  __int64 v38; // rax
  bool v39; // zf
  REGHANDLE v40; // r12
  __int64 v42; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+90h] [rbp+48h] BYREF
  int v44; // [rsp+94h] [rbp+4Ch]
  unsigned int v45; // [rsp+98h] [rbp+50h]
  int v46; // [rsp+A0h] [rbp+58h] BYREF
  ULONG UserDataCount; // [rsp+A8h] [rbp+60h]

  v46 = a3;
  v45 = a2;
  v44 = HIDWORD(a1);
  v43 = 0;
  v3 = 0;
  v42 = PopWnfCsEnterScenarioId;
  LOBYTE(v46) = 0;
  v4 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  v5 = v4;
  if ( v4 )
  {
    v6 = 0;
    if ( !*(_DWORD *)(v4 + 20) )
      return v3;
    while ( 1 )
    {
      v7 = 344LL * v6;
      v8 = *(unsigned int *)(v7 + v5 + 104);
      v43 = v8;
      if ( !(_DWORD)v8 )
        goto LABEL_28;
      v9 = 296 * v8;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 296 * v8, 0x4D584650u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, v9);
      v12 = v43;
      for ( i = 0; i < v43; v12 = v43 )
      {
        v14 = i++;
        v15 = 296 * v14;
        *(_QWORD *)&v11[v15 + 8] = &v11[296 * v14 + 32];
        *(_WORD *)&v11[v15 + 2] = 128;
        *(_QWORD *)&v11[v15 + 24] = &v11[296 * v14 + 164];
        *(_WORD *)&v11[v15 + 18] = 128;
        *(_DWORD *)&v11[v15 + 160] = -1430541637;
        *(_DWORD *)&v11[v15 + 292] = -1430541637;
      }
      v16 = (int)(8 * v12 + 32);
      v17 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v16, 0x4D584650u);
      v18 = v17;
      if ( !v17 )
        break;
      memset(v17, 0, v16);
      v20 = 0LL;
      *v18 = v45;
      v21 = *(_QWORD *)(v7 + v5 + 64);
      v18[6] = 0;
      *((_QWORD *)v18 + 1) = v21;
      *((_QWORD *)v18 + 2) = v7 + v5 + 40;
      for ( v18[7] = v43; (unsigned int)v20 < v43; v20 = (unsigned int)(v20 + 1) )
      {
        v19 = (unsigned int)v20;
        *(_QWORD *)&v18[2 * v20 + 8] = &v11[296 * (unsigned int)v20];
      }
      if ( (unsigned __int8)PopPluginQuerySocSubsystemMetadata(v19, *(unsigned int *)(v7 + v5 + 60), v18) )
      {
        for ( j = 0; j < v43; ++j )
        {
          v23 = &v11[296 * j];
          if ( *((_DWORD *)v23 + 40) != -1430541637 )
            PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *((unsigned __int16 *)v23 + 1));
          if ( *((_DWORD *)v23 + 73) != -1430541637 )
            PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *((unsigned __int16 *)v23 + 9));
        }
        UserDataCount = v43 + 4 * v43 + 3;
        v24 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, 16LL * UserDataCount, 0x4D584650u);
        UserData = v24;
        if ( !v24 )
          break;
        v26 = 2;
        LOBYTE(v46) = v42;
        v27 = 0;
        *(_QWORD *)&v24->Size = 1LL;
        v24->Ptr = (ULONGLONG)&v46;
        v24[1].Ptr = (ULONGLONG)&v43;
        for ( *(_QWORD *)&v24[1].Size = 4LL; v27 < v43; *(_QWORD *)&UserData[v36].Size = v37 )
        {
          v28 = v26;
          UserData[v28].Ptr = v7 + v5 + 72;
          *(_QWORD *)&UserData[v28].Size = 16LL;
          v29 = v27++;
          v30 = &v11[296 * v29];
          *((_DWORD *)v30 + 40) = *(unsigned __int16 *)v30 >> 1;
          v31 = v26 + 1;
          v32 = v26 + 2;
          v31 *= 2LL;
          v33 = v32;
          *(&UserData->Ptr + v31) = (ULONGLONG)(v30 + 160);
          *((_QWORD *)&UserData->Size + v31) = 4LL;
          v34 = *(unsigned __int16 *)v30;
          UserData[v33].Ptr = *((_QWORD *)v30 + 1);
          UserData[v33].Size = v34;
          UserData[v33].Reserved = 0;
          *((_DWORD *)v30 + 73) = *((unsigned __int16 *)v30 + 8) >> 1;
          v35 = v32 + 1;
          v32 += 2;
          v35 *= 2LL;
          v36 = v32;
          v26 = v32 + 1;
          *(&UserData->Ptr + v35) = (ULONGLONG)(v30 + 292);
          *((_QWORD *)&UserData->Size + v35) = 4LL;
          v37 = *((unsigned __int16 *)v30 + 8);
          UserData[v36].Ptr = *((_QWORD *)v30 + 3);
        }
        v38 = v26;
        v39 = PopDiagSleepStudyHandleRegistered == 0;
        UserData[v38].Ptr = (ULONGLONG)&v42;
        *(_QWORD *)&UserData[v38].Size = 8LL;
        if ( !v39 )
        {
          v40 = PopDiagSleepStudyHandle;
          if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
            EtwWrite(v40, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
        }
        ExFreePoolWithTag(UserData, 0x4D584650u);
      }
      else
      {
        v3 = -1073741595;
      }
LABEL_25:
      ExFreePoolWithTag(v11, 0x4D584650u);
      if ( v18 )
        ExFreePoolWithTag(v18, 0x4D584650u);
      if ( (v3 & 0x80000000) != 0 )
        return v3;
LABEL_28:
      if ( ++v6 >= *(_DWORD *)(v5 + 20) )
        return v3;
    }
    v3 = -1073741670;
    goto LABEL_25;
  }
  return (unsigned int)-1073741584;
}
