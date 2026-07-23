/*
 * XREFs of PpmSetProfilePolicySetting @ 0x14066D740
 * Callers:
 *     PopSetNewPolicyValue @ 0x14066DDF0 (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1408F6038 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PpmInfoAdjustSetting @ 0x14066E6A4 (PpmInfoAdjustSetting.c)
 *     PpmInfoReleaseLocks @ 0x14066E858 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x1407BAE90 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x1407C53A0 (PpmGetPolicyAction.c)
 *     PpmEventTraceProfileSetting @ 0x1407C58B4 (PpmEventTraceProfileSetting.c)
 *     PpmReapplyIdlePolicy @ 0x1408E2A4C (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r12
  __int64 v9; // rax
  unsigned int v10; // r9d
  GUID **v11; // rdx
  GUID **v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // r8d
  unsigned __int8 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // r13d
  __int64 v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // r15
  char v22; // al
  __int64 v23; // rdx
  int v24; // r9d
  unsigned int v25; // ecx
  bool v26; // al
  bool v28; // r15
  __int64 v29; // r12
  _QWORD *v30; // rbp
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // r15
  bool v36; // zf
  char v37; // al
  int v38; // ecx
  int v39; // r9d
  char v40; // [rsp+40h] [rbp-78h]
  bool v41; // [rsp+44h] [rbp-74h]
  __int64 v42; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h] BYREF
  __int64 v45; // [rsp+68h] [rbp-50h]
  __int64 v46; // [rsp+70h] [rbp-48h]
  GUID v47; // [rsp+78h] [rbp-40h]

  v5 = 0;
  v6 = a3;
  v46 = a4;
  v40 = 0;
  v41 = 0;
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
    v11 = &off_140CFBB48;
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
        if ( v10 < 0x35 )
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
    *(_QWORD *)&v47.Data1 = PpmCurrentProfile;
    LODWORD(v42) = dword_140C2332C;
    v19 = *a1 - *(_QWORD *)&NullGuid.Data1;
    if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
      v19 = a1[1] - *(_QWORD *)NullGuid.Data4;
    if ( v19 )
    {
      v32 = 0LL;
      if ( !PpmProfileCount )
      {
LABEL_58:
        PpmInfoReleaseLocks(v12, v32);
        return (unsigned int)-1073741275;
      }
      while ( 1 )
      {
        v33 = PpmProfiles + 5552LL * (unsigned int)v32;
        v34 = *(_QWORD *)(v33 + 12) - *a1;
        if ( !v34 )
          v34 = *(_QWORD *)(v33 + 20) - a1[1];
        if ( !v34 )
          break;
        v32 = (unsigned int)(v32 + 1);
        if ( (unsigned int)v32 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_58;
      }
      LODWORD(v43) = *((_DWORD *)v12 + 8);
      v35 = v33 + 2736 * v6 + 40;
      v36 = (*((_BYTE *)v12 + 37) & 4) == 0;
      v44 = (__int64)v12[3] + v13 * (unsigned int)v43 + v35;
      if ( !v36 && !v13 && (v17 & *(_QWORD *)(v35 + 8)) == 0 )
        v18 = 1;
      v37 = PpmInfoAdjustSetting((_DWORD)v12, (int)v33 + 2736 * (int)v6 + 40, v13, v18, v46, a5);
      *(_QWORD *)(v35 + 8LL * v13) |= v17;
      if ( v37 )
      {
        LOBYTE(v39) = v13;
        LOBYTE(v38) = *(_BYTE *)(v33 + 8);
        PpmEventTraceProfileSetting(v38, (unsigned int)*v12, (unsigned int)v12[1], v39, v44, v43, v6, 0);
        if ( *(_QWORD *)&v47.Data1 == v33 )
        {
          v23 = 1LL;
          v41 = (_DWORD)v42 == (_DWORD)v6;
        }
        if ( PpmBackgroundProfile == v33 || PpmMultimediaQosProfile == v33 || PpmEntryLevelPerfProfile == v33 )
        {
          v26 = (_DWORD)v42 == (_DWORD)v6;
          goto LABEL_23;
        }
      }
    }
    else
    {
      v44 = v6;
      v45 = 2736 * v6;
      v20 = &PpmDefaultProfile[342 * v6 + 5];
      LODWORD(v43) = *((_DWORD *)v12 + 8);
      v21 = (__int64)v12[3] + v13 * (unsigned int)v43 + (_QWORD)v20;
      if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 && (v17 & v20[1]) == 0 )
      {
        v40 = 1;
        v18 = 1;
      }
      v22 = PpmInfoAdjustSetting((_DWORD)v12, 2736 * v6 + (unsigned int)&PpmDefaultProfile[5], v13, v18, v46, a5);
      v25 = v13;
      v20[v13] |= v17;
      if ( v22 )
      {
        LOBYTE(v24) = v13;
        LOBYTE(v25) = byte_140C1EE48;
        PpmEventTraceProfileSetting(v25, (unsigned int)*v12, (unsigned int)v12[1], v24, v21, v43, v6, 0);
        v28 = 0;
        if ( *(__int64 **)&v47.Data1 == PpmDefaultProfile )
        {
          v28 = (_DWORD)v42 == (_DWORD)v6;
          v41 = (_DWORD)v42 == (_DWORD)v6;
        }
        if ( PpmProfileCount )
        {
          v29 = (unsigned __int8)PpmProfileCount;
          v42 = (int)v42;
          v23 = v45 + 40;
          v30 = (_QWORD *)(v45 + 40 + PpmProfiles);
          v43 = v45 + 40;
          v31 = -40LL;
          v45 = -40LL;
          do
          {
            if ( (*(_QWORD *)((char *)&v30[v13 + 5] + v31) & v17) == 0 && (!v13 || (v17 & *v30) == 0) )
            {
              if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
              {
                if ( v40 )
                {
                  if ( (v17 & *(_QWORD *)((char *)v30 + v31 + 48)) == 0 )
                    v18 = 1;
                }
                else
                {
                  v18 = 0;
                }
              }
              PpmInfoAdjustSetting((_DWORD)v12, (_DWORD)v30, v13, v18, v46, a5);
              v31 = v45;
              if ( *(_QWORD **)&v47.Data1 == (_QWORD *)((char *)v30 - v43) )
              {
                v23 = 1LL;
                if ( v42 == v44 )
                  v28 = 1;
              }
            }
            v30 += 694;
            --v29;
          }
          while ( v29 );
          v41 = v28;
        }
      }
    }
    v26 = 0;
LABEL_23:
    LODWORD(v42) = 0;
    if ( v41 || PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported && v26 )
    {
      v44 = 1LL << *((_BYTE *)v12 + 36);
      PpmGetPolicyAction(&v44, &v42);
      if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      {
        PpmReapplyPerfPolicy(&v42);
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
