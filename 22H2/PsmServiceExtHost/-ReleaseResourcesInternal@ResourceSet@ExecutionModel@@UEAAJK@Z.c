/*
 * XREFs of ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800108A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007920 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180010130 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180010270 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180010470 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x180011428 (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180012970 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012C50 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CC4 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016750 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018970 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002228C (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180033C88 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003BFEC (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseResourcesInternal(ExecutionModel::ResourceSet *this, char a2)
{
  __int64 v2; // rsi
  int v4; // r11d
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  ExecutionModel::ResourceManager *v10; // rdi
  __int64 v11; // r13
  WCHAR *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // r10
  unsigned __int64 v19; // r9
  struct _RM_ACTIVITY_HOST *v20; // rbx
  DWORD v21; // r14d
  _QWORD *Value; // rdi
  _QWORD *v23; // rax
  unsigned int ResourceSetCount; // eax
  unsigned int v27; // edx
  unsigned __int8 v28[4]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-DCh]
  ExecutionModel::ResourceManager *v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h]
  _BYTE v33[464]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v34[80]; // [rsp+210h] [rbp+110h] BYREF
  char v35[464]; // [rsp+260h] [rbp+160h] BYREF

  v2 = *((_QWORD *)this + 165);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( *((_DWORD *)this + 320) )
  {
    v4 = 2;
    if ( (a2 & 2) != 0
      && *((_BYTE *)this + 12)
      && (ResourceSetCount = RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)v2, 2u),
          ResourceSetCount < v27) )
    {
      v6 = -2147220221;
    }
    else
    {
      v5 = 1;
      if ( *((_BYTE *)this + 12) )
        v5 = v4;
      ExecutionModel::ResourceSet::PerformReleaseResources(this);
      RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v2, v5);
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v2, v5);
      QueryUnbiasedInterruptTime((PULONGLONG)(v2 + 1456));
      if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v2) )
        SetEvent(*(HANDLE *)(*(_QWORD *)(v2 + 56) + 88LL));
      v6 = 0;
      if ( (v5 & 2) != 0 )
      {
        v7 = *(_QWORD *)(v2 + 48);
        *(_QWORD *)(v2 + 1208) = 0LL;
        v8 = *(_QWORD *)(v7 + 2720);
        v9 = *(_DWORD *)(v8 + 160);
        if ( (v9 & 3) == 0 )
        {
          *(_DWORD *)(v8 + 160) = v9 | 1;
          TpPostWork(*(_QWORD *)(v8 + 144));
        }
      }
      if ( v5 == 2 )
      {
        if ( (*(_BYTE *)(v2 + 836) & 1) == 0 )
          RmpActivityHostComputeAndApplyEnforcementSettings((char *)v2);
        v10 = (ExecutionModel::ResourceManager *)*((_QWORD *)this + 3);
        v30 = v10;
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, (struct _RM_ACTIVITY_HOST *)v2);
        if ( *(_DWORD *)(v2 + 624) == 2 )
        {
          v28[0] = 0;
          RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(v2 + 88), v28);
          if ( !v28[0] )
          {
            v11 = *(_QWORD *)(v2 + 48);
            v31 = v11;
            if ( CempPackageFamilyNameFromPsmKey(v2 + 88, (__int64)v35) >= 0 )
            {
              RmpPsmAppFamilyIdInitialize(
                v35,
                (union _RM_SID *)(v2 + 552),
                *(_DWORD *)(v2 + 620),
                (struct _RM_PSM_APP_FAMILY_ID *)v33);
              v12 = (WCHAR *)v33;
              v13 = 314159LL;
              do
              {
                LOWORD(v29) = RtlUpcaseUnicodeChar(*v12++);
                v13 = BYTE1(v29) + 37 * ((unsigned __int8)v29 + 37 * v13);
              }
              while ( v12 < (WCHAR *)v34 );
              v14 = v34[69]
                  + 37
                  * (v34[68]
                   + 37
                   * (v34[67]
                    + 37
                    * (v34[66]
                     + 37
                     * (v34[65]
                      + 37
                      * (v34[64] + 37 * (v34[63] + 37 * (v34[62] + 37 * (v34[61] + 37 * (v34[60] + 37LL * v34[59])))))))));
              v15 = 0x78803D01F0C17231LL * v34[19]
                  + 0x407AFAF12AFB592DLL * v34[40]
                  + 0x4128EAEEFF459821LL * v34[15]
                  + 0xBD90C36322378919uLL * v34[53]
                  + 0x2B26220C747DAB5DLL * v34[36]
                  + 0xECFE0C79B5739BCDuLL * v34[48]
                  + 0xAA604B65C241EDD5uLL * v34[2]
                  + 0xBD1CBAC2ED25B97DuLL * v34[12]
                  + 0x84417E6FF051D6ADuLL * v34[8]
                  + 0x92D64A9170D97459uLL * v34[5]
                  + 0x288D4C21D6A4D26DLL * v34[56]
                  + 0x38F8C7054F6DD0DDLL * v34[4]
                  + 0x2ECBEADD94E1B3F5LL * v34[42]
                  + 0xDB9C20F4D76948E5uLL * v34[54]
                  + 0x1D77462DBBD40701LL * v34[7]
                  + 0xB5A728F1B3DF494DuLL * v34[16]
                  + 0x8443F2CCD7EFCA65uLL * v34[22]
                  + 0x8B7970C2A4EFB2A9uLL * v34[57]
                  + 0x1CF3332BD290D80DLL * v34[0]
                  + 0x4D463845869B9CD9LL * v34[37]
                  + 0x6A88D147CBF58115LL * v34[18]
                  + 0x4FE1DAF580C363FDLL * v34[44]
                  + 0x5D853AC4C14E51E9LL * v34[9]
                  + 0x65EC3D53F206D09DLL * v34[52]
                  + 0x1DD2179B35A84099LL * v34[21]
                  + 0xC8228AB72E6AE889uLL * v34[49]
                  + 0x7C5AC014A0AC9951LL * v34[27]
                  + 0x6AE9F48AE50EFCC5LL * v34[14]
                  + 0x65C63F607A7BA809LL * v34[17]
                  + 0x3433B6F080FF8F35LL * v34[58]
                  + 0x5A90B6DB573C2B45LL * v34[46]
                  + 0xD1A7F3AEDA1FE1A5uLL * v34[38]
                  + 0x7DA9078FE6510661LL * v34[31]
                  + 0x296E17CC49B5EC05LL * v34[30]
                  + 0x16EA6DB39BB240F9LL * v34[45]
                  + 0x5526FE2C4673CF11LL * v34[11]
                  + 0x981EFA65455B8049uLL * v34[33]
                  + 0xC53F5E946719795LL * v34[50]
                  + 0xF91DC2FB38F228B5uLL * v34[26]
                  + 0x14D2E4F3AFFE229LL * (v34[25] + 37LL * v34[24])
                  + 37 * (v34[70] + 37 * v14);
              v16 = 0LL;
              v17 = v34[71]
                  + 0x2F2665556EEF39E1LL * v13
                  + 0x3BF4C3C47ADF2FF1LL * v34[3]
                  + 0x73D058131B2A8879LL * v34[13]
                  + 0x40B7CD9739B584A1LL * v34[47]
                  + 0xDC6C00E405D269C1uLL * v34[55]
                  + 0x4EA2BC662EBCED75LL * v34[10]
                  + 0x4F5D696EC151561DLL * v34[20]
                  + 0xBB24DD21FAFC26B1uLL * v34[51]
                  + 0xBEEC149AF4096455uLL * v34[34]
                  + 0x9FEAE5B513875FC9uLL * v34[1]
                  + 0xF5BCA5B282606D41uLL * v34[23]
                  + 0x423D249C25A50325LL * v34[6]
                  + 0xFCE97086A74B1CB9uLL * v34[29]
                  + 0xC378F206849F0269uLL * v34[41]
                  + 0xFC7A30A306398A8DuLL * v34[32]
                  + 0x51C644DB3653E381LL * v34[39]
                  + 0x8BA4A57B9C3D7391uLL * v34[43]
                  + 0x3C82EBCCD629C471LL * v34[35]
                  + 0x8DBD43762DDB26BDuLL * v34[28]
                  + v15;
LABEL_20:
              v29 = *(_DWORD *)(v11 + 2548);
              v18 = -1LL << (v29 & 0x1F);
              v19 = v17 & v18;
              v32 = (v17 & v18) >> 16;
              if ( v16 )
              {
                v11 = v31;
                goto LABEL_22;
              }
              if ( v29 >> 5 )
              {
                v11 = v31;
                v16 = *(_QWORD *)(v31 + 2552)
                    + 8
                    * ((((v17 & v18) >> 56)
                      + 37
                      * ((unsigned __int8)((v17 & v18) >> 48)
                       + 37
                       * ((unsigned __int8)((unsigned __int16)((v17 & v18) >> 32) >> 8)
                        + 37
                        * ((unsigned __int8)((v17 & v18) >> 32)
                         + 37
                         * ((((unsigned int)v17 & (unsigned int)v18) >> 24)
                          + 37
                          * ((unsigned __int8)v32
                           + 37
                           * ((unsigned __int8)((unsigned __int16)(v17 & v18) >> 8)
                            + 37 * ((unsigned __int8)v19 + 11623883)))))))) & ((v29 >> 5) - 1));
LABEL_22:
                while ( 1 )
                {
                  v16 = *(_QWORD *)v16;
                  if ( (v16 & 1) != 0 )
                    break;
                  if ( v19 == (v18 & *(_QWORD *)(v16 + 8)) )
                  {
                    if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v16, v33) )
                      goto LABEL_20;
                    v10 = v30;
                    if ( !v16 )
                      goto LABEL_43;
                    goto LABEL_26;
                  }
                }
              }
              v10 = v30;
            }
LABEL_43:
            v16 = 0LL;
LABEL_26:
            v20 = *(struct _RM_ACTIVITY_HOST **)(v16 + 568);
            if ( v20 && RmpActivityHostHasPpleResourceSet(v20) )
              ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, v20);
          }
        }
      }
      v21 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockExclusive(v2 + 64);
      *(_DWORD *)(v2 + 72) = GetCurrentThreadId();
      if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v2) )
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v2 + 64), 1u);
      if ( HampLockTrackerId != -1 )
      {
        v23 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v23 & 2) == 0 )
          __int2c();
        if ( v23[2]-- == 1LL )
          *v23 &= ~2uLL;
      }
      *(_DWORD *)(v2 + 72) = 0;
      RtlReleaseSRWLockExclusive(v2 + 64);
    }
  }
  else
  {
    v6 = 0;
  }
  RmpObjectRelease((PVOID)v2);
  return v6;
}
