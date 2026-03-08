/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x140981C30
 * Callers:
 *     PopFxEnablePlatformStates @ 0x140587D90 (PopFxEnablePlatformStates.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D5ED0 (wcsncmp.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     RtlHashUnicodeString @ 0x140680AE0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140879AD8 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x140983348 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemCount @ 0x140983554 (PopPluginQuerySocSubsystemCount.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(int a1)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  unsigned int *v5; // rsi
  __int64 Pool2; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int128 v9; // xmm1
  char v10; // r13
  unsigned int v11; // r14d
  ULONG_PTR v12; // r12
  unsigned int v13; // edi
  __int64 v14; // rbx
  unsigned int v15; // eax
  const wchar_t *v16; // rax
  unsigned int *v17; // r12
  unsigned __int16 v18; // r10
  int v19; // ecx
  GUID *v20; // rax
  unsigned int **v21; // rax
  char v23; // [rsp+28h] [rbp-E0h]
  const wchar_t *v24; // [rsp+30h] [rbp-D8h]
  __int128 v25; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  int v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+7Ch] [rbp-8Ch]
  wchar_t pszDest[64]; // [rsp+88h] [rbp-80h] BYREF

  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin && (v30 = a1, v31 = 0LL, (unsigned __int8)PopPluginQuerySocSubsystemCount(v2, &v30)) )
  {
    v4 = v31;
    v5 = (unsigned int *)PopFxLookupSocSubsystemsByPlatformIdleState(a1);
    if ( v5 )
    {
      v3 = -1073741585;
LABEL_6:
      ExFreePoolWithTag(v5, 0x4D584650u);
      return (unsigned int)v3;
    }
    Pool2 = ExAllocatePool2(256LL, (int)(344 * v4 + 24), 1297630800LL);
    v5 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 16) = a1;
    v7 = 0;
    *(_DWORD *)(Pool2 + 20) = v4;
    if ( v4 )
    {
      do
      {
        v8 = 86LL * v7;
        *(_QWORD *)&v5[v8 + 8] = &v5[v8 + 27];
        v5[v8 + 6] = 0x800000;
        LOWORD(v5[v8 + 10]) = 0;
        *(_QWORD *)&v5[v8 + 12] = &v5[v8 + 59];
        HIWORD(v5[v8 + 10]) = 128;
        v5[v8 + 14] = v7;
        LODWORD(v25) = a1;
        *((_QWORD *)&v25 + 1) = 0LL;
        DWORD1(v25) = v5[v8 + 14];
        v26 = *(_OWORD *)&v5[v8 + 6];
        v9 = *(_OWORD *)&v5[v8 + 10];
        v28 = 0LL;
        v27 = v9;
        PopPluginInitializeSocSubsystemStaticInfo(128LL, &v25);
        LOWORD(v5[v8 + 10]) = v27;
        LOWORD(v5[v8 + 6]) = v26;
        *(_QWORD *)&v5[v8 + 16] = *((_QWORD *)&v25 + 1);
        v5[v8 + 26] = v28;
        v3 = RtlHashUnicodeString((PCUNICODE_STRING)&v5[v8 + 10], 0, 0, &v5[v8 + 15]);
        if ( v3 < 0 )
          goto LABEL_6;
        v4 = v5[5];
      }
      while ( ++v7 < v4 );
    }
    v23 = 0;
    v10 = 0;
    v11 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        v12 = v11;
        v13 = 0;
        v14 = 86LL * v11;
        v15 = v5[v14 + 14];
        *(GUID *)&v5[v14 + 18] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
        LOWORD(v5[v14 + 19]) = a1;
        HIWORD(v5[v14 + 19]) = v15 + 1;
        v16 = *(const wchar_t **)&v5[v14 + 8];
        v24 = v16;
        if ( v5[5] )
        {
          while ( 1 )
          {
            v29 = 344LL * v13;
            v17 = &v5[(unsigned __int64)v29 / 4];
            if ( v13 != v11 )
            {
              if ( !wcsncmp(*(const wchar_t **)&v5[v14 + 12], *((const wchar_t **)v17 + 6), 0x40uLL) )
                PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v13);
              v16 = v24;
            }
            if ( !wcsncmp(v16, *((const wchar_t **)v17 + 6), 0x40uLL) )
              break;
            v16 = v24;
            if ( ++v13 >= v5[5] )
            {
              v10 = v23;
              v12 = v11;
              goto LABEL_20;
            }
          }
          v18 = a1;
          v19 = v5[(unsigned __int64)v29 / 4 + 14] + 1;
          v20 = (GUID *)&v5[v14 + 22];
        }
        else
        {
LABEL_20:
          if ( v10 )
          {
            if ( wcsncmp(v16, pszDest, 0x40uLL) )
              PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v12);
          }
          else
          {
            RtlStringCchCopyW(pszDest, 0x40uLL, v16);
            v23 = 1;
          }
          v20 = (GUID *)&v5[v14 + 22];
          LOWORD(v19) = 0;
          v18 = 0;
        }
        ++v11;
        *v20 = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
        v20->Data2 = v18;
        v20->Data3 = v19;
        if ( v11 >= v5[5] )
          break;
        v10 = v23;
      }
    }
    v21 = (unsigned int **)qword_140C3E8B8;
    v3 = 0;
    if ( *(__int64 **)qword_140C3E8B8 != &SocSubsystemsList )
      __fastfail(3u);
    *(_QWORD *)v5 = &SocSubsystemsList;
    *((_QWORD *)v5 + 1) = v21;
    *v21 = v5;
    qword_140C3E8B8 = (__int64)v5;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
