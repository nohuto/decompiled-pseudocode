/*
 * XREFs of ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027CB0
 * Callers:
 *     HamRpcSrvCreateExtendedExecution @ 0x1800281E0 (HamRpcSrvCreateExtendedExecution.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B6E8 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000ED7C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000F360 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F5F0 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x18000F8A0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800119D0 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180026AF0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180027FB4 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x180028074 (-HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall HamSrvCreateExtendedExecution(__int64 a1, int a2, const unsigned __int16 *a3, unsigned __int64 *a4)
{
  __int64 v5; // rsi
  struct _HAM_ACTIVITY *v7; // r14
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  int v9; // r13d
  char *v10; // r12
  int HostByProcessHandle; // eax
  __int64 v12; // r8
  int v13; // edi
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdx
  DWORD v18; // ebx
  int v20; // [rsp+60h] [rbp-A0h]
  struct _HAM_ACTIVITY *v21; // [rsp+68h] [rbp-98h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v22; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-88h]
  union _RM_SID *v24; // [rsp+80h] [rbp-80h]
  unsigned __int64 v25; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v26; // [rsp+90h] [rbp-70h]
  _OWORD v27[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+E0h] [rbp-20h]
  _BYTE v29[400]; // [rsp+F0h] [rbp-10h] BYREF
  char v30[144]; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int16 v31[232]; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int16 v32[64]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v26 = a4;
  v5 = a2;
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v25 = -1LL;
  v20 = 0;
  v24 = 0LL;
  v23 = -1LL;
  if ( dword_1800B3218 )
  {
    v9 = 1;
    memset_0(v31, 0, sizeof(v31));
  }
  else
  {
    v9 = 0;
  }
  v10 = (char *)L"BAD_INPUT";
  if ( !a3 || !*a3 )
  {
    if ( (unsigned int)v5 > 4 )
      a3 = L"BAD_INPUT";
    else
      a3 = (const unsigned __int16 *)(&EeDefaultDescription)[v5];
  }
  memset_0(v32, 0, sizeof(v32));
  StringCbPrintfW(v32, 0x80uLL, L"Ee%d_%s", (unsigned int)v5, a3);
  if ( (unsigned int)v5 <= 4 )
    v10 = (char *)(&EeResourcePolicyNames)[v5];
  HampActivityPropertiesInitialize((char *)v32, v10, (struct _HAM_ACTIVITY_PROPERTIES *)v29);
  if ( (unsigned int)v5 > 4 )
  {
    v13 = -1073741584;
  }
  else
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(
                            *(struct _HOST_ACTIVITY_MANAGER **)a1,
                            *(void **)(a1 + 168),
                            &v22);
    v8 = v22;
    v13 = HostByProcessHandle;
    if ( HostByProcessHandle < 0 )
      goto LABEL_20;
    if ( v9 )
    {
      StringCchCopyW((char *)v31, 232LL, (char *)v22 + 24);
      v14 = *(_OWORD *)((char *)v8 + 488);
      v23 = *((_QWORD *)v8 - 4);
      v27[0] = v14;
      v27[1] = *(_OWORD *)((char *)v8 + 504);
      v27[2] = *(_OWORD *)((char *)v8 + 520);
      v27[3] = *(_OWORD *)((char *)v8 + 536);
      v28 = *((_DWORD *)v8 + 138);
      v24 = (union _RM_SID *)v27;
    }
    LODWORD(v7) = *((_DWORD *)v8 + 140);
    v20 = (int)v7;
    if ( (_DWORD)v7 != 2 )
    {
      v13 = -1073741790;
      goto LABEL_20;
    }
    v13 = HampExtendedExecutionCheckPolicy(v29, *(_QWORD *)(a1 + 160), v12, (unsigned int)v5);
    if ( v13 < 0 )
      goto LABEL_20;
    v15 = HampActCreate(
            (struct _HAM_CLIENT_CONTEXT *)a1,
            *(struct _HOST_ACTIVITY_MANAGER **)a1,
            v8,
            (struct _HAM_ACTIVITY_PROPERTIES *)v29,
            0,
            &v21);
    v7 = v21;
    v13 = v15;
    if ( v15 >= 0 )
    {
      v13 = 0;
      v25 = *((_QWORD *)v21 + 5);
      *v26 = v25;
    }
  }
  if ( v7 )
    CemRcObjectDereference(v7);
  LODWORD(v7) = v20;
LABEL_20:
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v8 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v8 - 64), v16);
    RmpReleaseGlobalLock();
  }
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  if ( v9 )
    HampSrvTraceActivityCreateStop(
      (unsigned int)v13,
      v25,
      (struct _HAM_CLIENT_CONTEXT *)a1,
      v31,
      (unsigned int)v7,
      v24,
      v23,
      (struct _HAM_ACTIVITY_PROPERTIES *)v29);
  return (unsigned int)v13;
}
