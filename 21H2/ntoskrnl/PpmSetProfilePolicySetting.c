/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1407FCE7C
 * Callers:
 *     PopSetNewPolicyValue @ 0x1407FD344 (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14099D934 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PpmInfoAdjustSetting @ 0x1407FD448 (PpmInfoAdjustSetting.c)
 *     PpmInfoReleaseLocks @ 0x1407FD604 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x140849940 (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceProfileSetting @ 0x14085490C (PpmEventTraceProfileSetting.c)
 *     PpmGetPolicyAction @ 0x140854A90 (PpmGetPolicyAction.c)
 *     PpmReapplyIdlePolicy @ 0x14098B1A8 (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v9; // rax
  unsigned int v10; // r9d
  GUID **v11; // rdx
  GUID **v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  unsigned __int8 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // r12d
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r15
  char v22; // al
  _QWORD *v23; // rdx
  int v24; // r9d
  unsigned int v25; // ecx
  char v26; // al
  unsigned int i; // ebp
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // r15
  bool v34; // zf
  char v35; // al
  int v36; // ecx
  int v37; // r9d
  char v38; // al
  char v39; // [rsp+40h] [rbp-78h]
  bool v40; // [rsp+44h] [rbp-74h]
  unsigned int v41; // [rsp+48h] [rbp-70h] BYREF
  int v42; // [rsp+4Ch] [rbp-6Ch]
  int v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 *v45; // [rsp+60h] [rbp-58h]
  __int64 v46; // [rsp+68h] [rbp-50h]
  GUID v47; // [rsp+70h] [rbp-48h] BYREF

  v5 = 0;
  v6 = a3;
  v44 = a4;
  v39 = 0;
  v40 = 0;
  LOBYTE(v42) = 0;
  if ( !a5 || !a4 )
    return (unsigned int)-1073741811;
  if ( a3 )
    goto LABEL_7;
  v9 = *a1 - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( *a1 == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1 )
    v9 = a1[1] - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( v9 )
  {
LABEL_7:
    v10 = 0;
    v11 = &off_140D05FC8;
LABEL_8:
    v12 = v11 - 1;
    v13 = 0;
    v14 = ((*((_BYTE *)v11 + 29) & 4) != 0) + 1;
    v47 = **v11;
    v15 = v47.Data4[7];
    while ( 1 )
    {
      v16 = *(_QWORD *)&v47.Data1 - *a2;
      if ( *(_QWORD *)&v47.Data1 == *a2 )
        v16 = *(_QWORD *)v47.Data4 - a2[1];
      if ( !v16 )
        break;
      ++v15;
      ++v13;
      v47.Data4[7] = v15;
      if ( v13 >= v14 )
      {
        ++v10;
        v11 += 5;
        if ( v10 < 0x36 )
          goto LABEL_8;
        return (unsigned int)-1073741275;
      }
    }
    v17 = 1LL << *((_BYTE *)v12 + 36);
    v18 = v13;
    if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    else
      PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    v45 = PpmCurrentProfile;
    v41 = dword_140C232CC;
    v19 = *a1 - *(_QWORD *)&NullGuid.Data1;
    if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
      v19 = a1[1] - *(_QWORD *)NullGuid.Data4;
    if ( v19 )
    {
      v30 = 0LL;
      if ( !PpmProfileCount )
      {
LABEL_76:
        PpmInfoReleaseLocks(v12, v30);
        return (unsigned int)-1073741275;
      }
      while ( 1 )
      {
        v31 = PpmProfiles + 8624LL * (unsigned int)v30;
        v32 = *(_QWORD *)(v31 + 12) - *a1;
        if ( !v32 )
          v32 = *(_QWORD *)(v31 + 20) - a1[1];
        if ( !v32 )
          break;
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_76;
      }
      v43 = *((_DWORD *)v12 + 8);
      v33 = v31 + 4272 * v6 + 40;
      v34 = (*((_BYTE *)v12 + 37) & 4) == 0;
      *(_QWORD *)&v47.Data1 = (char *)v12[3] + v13 * v43 + v33;
      if ( !v34 && !v13 && (v17 & *(_QWORD *)(v33 + 8)) == 0 )
        v18 = 1;
      v35 = PpmInfoAdjustSetting((_DWORD)v12, (int)v31 + 4272 * (int)v6 + 40, v13, v18, v44, a5);
      *(_QWORD *)(v33 + 8LL * v13) |= v17;
      if ( v35 )
      {
        LOBYTE(v37) = v13;
        LOBYTE(v36) = *(_BYTE *)(v31 + 8);
        PpmEventTraceProfileSetting(
          v36,
          (unsigned int)*v12,
          (unsigned int)v12[1],
          v37,
          *(__int64 *)&v47.Data1,
          v43,
          v6,
          0);
        v23 = (_QWORD *)v41;
        if ( v45 == (__int64 *)v31 )
          v40 = v41 == (_DWORD)v6;
        if ( PpmBackgroundProfile == v31 || PpmMultimediaQosProfile == v31 || PpmEntryLevelPerfProfile == v31 )
        {
          v26 = v42;
          if ( v41 == (_DWORD)v6 )
            v26 = 1;
          goto LABEL_23;
        }
      }
    }
    else
    {
      *(_QWORD *)&v47.Data1 = v6;
      v46 = 4272 * v6;
      v20 = &PpmDefaultProfile[534 * v6 + 5];
      v43 = *((_DWORD *)v12 + 8);
      v21 = (__int64)v12[3] + v13 * v43 + (_QWORD)v20;
      if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 && (v17 & v20[1]) == 0 )
      {
        v39 = 1;
        v18 = 1;
      }
      v22 = PpmInfoAdjustSetting((_DWORD)v12, 4272 * v6 + (unsigned int)&PpmDefaultProfile[5], v13, v18, v44, a5);
      v25 = v13;
      v20[v13] |= v17;
      if ( v22 )
      {
        LOBYTE(v24) = v13;
        LOBYTE(v25) = byte_140C1D068;
        PpmEventTraceProfileSetting(v25, (unsigned int)*v12, (unsigned int)v12[1], v24, v21, v43, v6, 0);
        v23 = (_QWORD *)v41;
        if ( v45 == PpmDefaultProfile )
          v40 = v41 == (_DWORD)v6;
        for ( i = 0; i < (unsigned __int8)PpmProfileCount; ++i )
        {
          v29 = PpmProfiles + 8624LL * i;
          v23 = (_QWORD *)(v29 + v46 + 40);
          if ( (v23[v13] & v17) == 0 && (!v13 || (v17 & *v23) == 0) )
          {
            if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
            {
              if ( v39 )
              {
                if ( (v17 & v23[1]) == 0 )
                  v18 = 1;
              }
              else
              {
                v18 = 0;
              }
            }
            PpmInfoAdjustSetting((_DWORD)v12, (_DWORD)v23, v13, v18, v44, a5);
            if ( v45 == (__int64 *)v29 )
            {
              v38 = v40;
              if ( v41 == *(_QWORD *)&v47.Data1 )
                v38 = 1;
              v40 = v38;
            }
          }
        }
      }
    }
    v26 = v42;
LABEL_23:
    v41 = 0;
    if ( v40 || PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported && v26 )
    {
      *(_QWORD *)&v47.Data1 = 1LL << *((_BYTE *)v12 + 36);
      PpmGetPolicyAction(&v47, &v41);
      if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      {
        PpmReapplyPerfPolicy(&v41);
      }
      else
      {
        PpmReapplyIdlePolicy();
        PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
      }
    }
    else
    {
      PpmInfoReleaseLocks(v12, v23);
    }
  }
  return v5;
}
