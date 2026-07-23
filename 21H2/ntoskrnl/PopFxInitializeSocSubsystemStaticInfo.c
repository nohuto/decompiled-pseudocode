/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x1408E4880
 * Callers:
 *     PopFxEnablePlatformStates @ 0x14056AC60 (PopFxEnablePlatformStates.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     RtlHashUnicodeString @ 0x14062BAB0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408E521C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1408E5D6C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemCount @ 0x1408E5F78 (PopPluginQuerySocSubsystemCount.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(unsigned int a1)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  unsigned int *v5; // rsi
  __int64 v6; // rdi
  unsigned int *PoolWithTag; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int128 v11; // xmm1
  char v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  __int64 v15; // rdi
  unsigned int v16; // eax
  const wchar_t *v17; // r13
  __int64 v18; // r12
  int v19; // ecx
  GUID *v20; // rax
  unsigned __int16 v21; // r8
  unsigned int **v22; // rax
  char v24; // [rsp+28h] [rbp-A9h]
  __int128 v25; // [rsp+30h] [rbp-A1h] BYREF
  __int128 v26; // [rsp+40h] [rbp-91h]
  __int128 v27; // [rsp+50h] [rbp-81h]
  __int64 v28; // [rsp+60h] [rbp-71h]
  unsigned int v29; // [rsp+68h] [rbp-69h] BYREF
  __int64 v30; // [rsp+6Ch] [rbp-65h]
  wchar_t pszDest[64]; // [rsp+78h] [rbp-59h] BYREF

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin && (v29 = a1, v30 = 0LL, (unsigned __int8)PopPluginQuerySocSubsystemCount(v2, &v29)) )
  {
    v4 = v30;
    v5 = (unsigned int *)PopFxLookupSocSubsystemsByPlatformIdleState(a1);
    if ( v5 )
    {
      v3 = -1073741585;
LABEL_29:
      ExFreePoolWithTag(v5, 0x4D584650u);
      return (unsigned int)v3;
    }
    v6 = (int)(344 * v4);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6 + 24, 0x4D584650u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6 + 24);
      v5[4] = a1;
      v9 = 0;
      v5[5] = v4;
      if ( v4 )
      {
        while ( 1 )
        {
          v10 = 86LL * v9;
          *(_QWORD *)&v5[v10 + 8] = &v5[v10 + 27];
          v5[v10 + 6] = 0x800000;
          LOWORD(v5[v10 + 10]) = 0;
          *(_QWORD *)&v5[v10 + 12] = &v5[v10 + 59];
          HIWORD(v5[v10 + 10]) = 128;
          v5[v10 + 14] = v9;
          LODWORD(v25) = a1;
          *((_QWORD *)&v25 + 1) = 0LL;
          DWORD1(v25) = v5[v10 + 14];
          v26 = *(_OWORD *)&v5[v10 + 6];
          v11 = *(_OWORD *)&v5[v10 + 10];
          v28 = 0LL;
          v27 = v11;
          PopPluginInitializeSocSubsystemStaticInfo(v8, &v25);
          LOWORD(v5[v10 + 10]) = v27;
          LOWORD(v5[v10 + 6]) = v26;
          *(_QWORD *)&v5[v10 + 16] = *((_QWORD *)&v25 + 1);
          v5[v10 + 26] = v28;
          v3 = RtlHashUnicodeString((PCUNICODE_STRING)&v5[v10 + 10], 0, 0, &v5[v10 + 15]);
          if ( v3 < 0 )
            break;
          v4 = v5[5];
          if ( ++v9 >= v4 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v24 = 0;
        v12 = 0;
        v13 = 0;
        if ( v4 )
        {
          while ( 1 )
          {
            v14 = 0;
            v15 = 86LL * v13;
            v16 = v5[v15 + 14];
            *(GUID *)&v5[v15 + 18] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
            LOWORD(v5[v15 + 19]) = a1;
            HIWORD(v5[v15 + 19]) = v16 + 1;
            v17 = *(const wchar_t **)&v5[v15 + 8];
            if ( v5[5] )
            {
              while ( 1 )
              {
                v18 = 86LL * v14;
                if ( v14 != v13 && !wcsncmp(*(const wchar_t **)&v5[v15 + 12], *(const wchar_t **)&v5[v18 + 12], 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v14);
                if ( !wcsncmp(v17, *(const wchar_t **)&v5[v18 + 12], 0x40uLL) )
                  break;
                if ( ++v14 >= v5[5] )
                {
                  v12 = v24;
                  goto LABEL_18;
                }
              }
              v19 = v5[v18 + 14] + 1;
              v20 = (GUID *)&v5[v15 + 22];
              v21 = a1;
            }
            else
            {
LABEL_18:
              if ( v12 )
              {
                if ( wcsncmp(v17, pszDest, 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v13);
              }
              else
              {
                RtlStringCchCopyW(pszDest, 0x40uLL, v17);
                v24 = 1;
              }
              LOWORD(v19) = 0;
              v20 = (GUID *)&v5[v15 + 22];
              v21 = 0;
            }
            ++v13;
            *v20 = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
            v20->Data2 = v21;
            v20->Data3 = v19;
            if ( v13 >= v5[5] )
              break;
            v12 = v24;
          }
        }
        v3 = 0;
      }
      if ( v3 )
        goto LABEL_29;
      v22 = (unsigned int **)qword_140C24A68;
      if ( *(__int64 **)qword_140C24A68 != &SocSubsystemsList )
        __fastfail(3u);
      *(_QWORD *)v5 = &SocSubsystemsList;
      *((_QWORD *)v5 + 1) = v22;
      *v22 = v5;
      qword_140C24A68 = (__int64)v5;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
