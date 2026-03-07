__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r13
  __int64 v9; // rax
  GUID **v10; // rsi
  unsigned int v11; // r8d
  GUID **v12; // r14
  unsigned int v13; // ebp
  unsigned int v14; // edx
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // r12d
  __int64 v19; // rax
  __int64 *v20; // r15
  bool v21; // zf
  char v22; // al
  _QWORD *v23; // rdx
  int v24; // r9d
  unsigned int v25; // ecx
  char v26; // al
  unsigned int i; // esi
  __int64 v29; // r15
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r15
  char v35; // al
  int v36; // ecx
  int v37; // r9d
  char v38; // [rsp+40h] [rbp-78h]
  bool v39; // [rsp+44h] [rbp-74h]
  unsigned int v40; // [rsp+48h] [rbp-70h] BYREF
  int v41; // [rsp+4Ch] [rbp-6Ch]
  int v42; // [rsp+50h] [rbp-68h]
  GUID **v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  __int64 *v45; // [rsp+68h] [rbp-50h]
  __int64 v46; // [rsp+70h] [rbp-48h]
  GUID v47; // [rsp+78h] [rbp-40h] BYREF

  v5 = 0;
  v6 = a3;
  v44 = a4;
  v38 = 0;
  v39 = 0;
  LOBYTE(v41) = 0;
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
    v10 = &off_140D1E028;
    v11 = 0;
    v43 = &off_140D1E028;
LABEL_8:
    v12 = v10 - 1;
    v13 = 0;
    v14 = ((*((_BYTE *)v10 + 29) & 4) != 0) + 1;
    v47 = **v10;
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
        v10 += 5;
        ++v11;
        v43 = v10;
        if ( v11 < 0x3E )
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
    v40 = dword_140C3D48C;
    v19 = *a1 - *(_QWORD *)&NullGuid.Data1;
    if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
      v19 = a1[1] - *(_QWORD *)NullGuid.Data4;
    if ( v19 )
    {
      v31 = 0LL;
      if ( !PpmProfileCount )
      {
LABEL_57:
        PpmInfoReleaseLocks(v12, v31);
        return (unsigned int)-1073741275;
      }
      while ( 1 )
      {
        v32 = PpmProfiles + 960LL * (unsigned int)v31;
        v33 = *(_QWORD *)(v32 + 12) - *a1;
        if ( !v33 )
          v33 = *(_QWORD *)(v32 + 20) - a1[1];
        if ( !v33 )
          break;
        v31 = (unsigned int)(v31 + 1);
        if ( (unsigned int)v31 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_57;
      }
      v42 = *((_DWORD *)v12 + 8);
      v34 = v32 + 440 * v6 + 40;
      v21 = (*((_BYTE *)v12 + 37) & 4) == 0;
      *(_QWORD *)&v47.Data1 = (char *)v12[3] + v13 * v42 + v34;
      if ( !v21 && !v13 && (v17 & *(_QWORD *)(v34 + 8)) == 0 )
        v18 = 1;
      v35 = PpmInfoAdjustSetting((_DWORD)v12, (int)v32 + 440 * (int)v6 + 40, v13, v18, v44, a5);
      *(_QWORD *)(v34 + 8LL * v13) |= v17;
      if ( v35 )
      {
        LOBYTE(v37) = v13;
        LOBYTE(v36) = *(_BYTE *)(v32 + 8);
        PpmEventTraceProfileSetting(
          v36,
          (unsigned int)*v12,
          (unsigned int)*v43,
          v37,
          *(__int64 *)&v47.Data1,
          v42,
          v6,
          0);
        v23 = (_QWORD *)v40;
        if ( v45 == (__int64 *)v32 )
          v39 = v40 == (_DWORD)v6;
        if ( PpmEntryLevelPerfProfile == v32
          || PpmBackgroundProfile == v32
          || PpmUtilityQosProfile == v32
          || PpmEcoQosProfile == v32
          || PpmMultimediaQosProfile == v32 )
        {
          v26 = v41;
          if ( v40 == (_DWORD)v6 )
            v26 = 1;
          goto LABEL_23;
        }
      }
    }
    else
    {
      *(_QWORD *)&v47.Data1 = v6;
      v46 = 440 * v6;
      v20 = &PpmDefaultProfile[55 * v6 + 5];
      v42 = *((_DWORD *)v12 + 8);
      v21 = (*((_BYTE *)v12 + 37) & 4) == 0;
      v43 = (GUID **)((char *)v12[3] + v13 * v42 + (_QWORD)v20);
      if ( !v21 && !v13 && (v17 & v20[1]) == 0 )
      {
        v38 = 1;
        v18 = 1;
      }
      v22 = PpmInfoAdjustSetting((int)v10 - 8, 440 * v6 + (unsigned int)&PpmDefaultProfile[5], v13, v18, v44, a5);
      v25 = v13;
      v20[v13] |= v17;
      if ( v22 )
      {
        LOBYTE(v24) = v13;
        LOBYTE(v25) = byte_140C390A8;
        PpmEventTraceProfileSetting(v25, (unsigned int)*v12, (unsigned int)*v10, v24, (__int64)v43, v42, v6, 0);
        v23 = (_QWORD *)v40;
        if ( v45 == PpmDefaultProfile )
          v39 = v40 == (_DWORD)v6;
        for ( i = 0; i < (unsigned __int8)PpmProfileCount; ++i )
        {
          v29 = PpmProfiles + 960LL * i;
          v23 = (_QWORD *)(v29 + v46 + 40);
          if ( (v17 & v23[v13]) == 0 && (!v13 || (v17 & *v23) == 0) )
          {
            if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
            {
              if ( v38 )
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
              v30 = v39;
              if ( v40 == *(_QWORD *)&v47.Data1 )
                v30 = 1;
              v39 = v30;
            }
          }
        }
      }
    }
    v26 = v41;
LABEL_23:
    v40 = 0;
    if ( v39 || PopHeteroSystem && PpmPerfSchedulerDirectedPerfStatesSupported && v26 )
    {
      *(_QWORD *)&v47.Data1 = 1LL << *((_BYTE *)v12 + 36);
      PpmGetPolicyAction(&v47, &v40);
      if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
      {
        PpmReapplyPerfPolicy(&v40);
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
