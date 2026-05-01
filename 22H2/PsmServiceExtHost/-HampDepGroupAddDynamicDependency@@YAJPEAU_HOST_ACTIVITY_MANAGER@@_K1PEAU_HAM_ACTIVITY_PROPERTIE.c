/*
 * XREFs of ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180026158
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180028920 (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000B1C8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDynamicDependency(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  struct _HAM_ACTIVITY_PROPERTIES *v4; // rbx
  struct _HAM_DEPENDENCY_GROUP *v8; // r14
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  __int64 v18; // rax
  char *v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v28; // rsi
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  bool v33; // zf
  __int64 v34; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v36; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v37; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v38; // [rsp+40h] [rbp-C0h] BYREF
  char v39[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v40; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v41[3]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v42[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v43[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v44; // [rsp+30Ch] [rbp+20Ch]
  int v45; // [rsp+314h] [rbp+214h]
  _BYTE v46[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v47; // [rsp+340h] [rbp+240h]
  __int64 v48; // [rsp+348h] [rbp+248h]
  __int64 v49; // [rsp+350h] [rbp+250h]
  __int64 v50; // [rsp+358h] [rbp+258h]
  __int64 v51; // [rsp+360h] [rbp+260h]
  int v52; // [rsp+370h] [rbp+270h]

  v4 = a4;
  v38 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !a4 )
  {
    memset_0(v41, 0, 0x188uLL);
    v10 = 64LL;
    v41[0] = 8397888;
    v11 = 64LL;
    v12 = v42;
    do
    {
      if ( v11 == -2147483582 )
        break;
      v13 = *(_WORD *)((char *)v12 + (char *)L"DynamicHostDependency" - v42);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v11;
    }
    while ( v11 );
    v14 = v12 - 1;
    if ( v11 )
      v14 = v12;
    v15 = v43;
    *v14 = 0;
    do
    {
      if ( v10 == -2147483582 )
        break;
      v16 = *(_WORD *)((char *)v15 + &unk_180095550 - (_UNKNOWN *)v43);
      if ( !v16 )
        break;
      *v15++ = v16;
      --v10;
    }
    while ( v10 );
    v17 = v15 - 1;
    if ( v10 )
      v17 = v15;
    *v17 = 0;
    v45 = -1;
    v44 = 5;
    memset_0(v46, 0, 0x68uLL);
    v52 = 33;
    v47 |= 0x80uLL;
    v4 = (struct _HAM_ACTIVITY_PROPERTIES *)v41;
    v51 = -1LL;
    v50 = -1LL;
    v49 = -1LL;
    v48 = -1LL;
  }
  *(_DWORD *)v4 |= 0x400u;
  memset_0(v39, 0, 0x1B0uLL);
  v18 = 3LL;
  v39[0] = 1;
  v19 = &v40;
  do
  {
    v20 = *((_OWORD *)v4 + 1);
    *(_OWORD *)v19 = *(_OWORD *)v4;
    v21 = *((_OWORD *)v4 + 2);
    *((_OWORD *)v19 + 1) = v20;
    v22 = *((_OWORD *)v4 + 3);
    *((_OWORD *)v19 + 2) = v21;
    v23 = *((_OWORD *)v4 + 4);
    *((_OWORD *)v19 + 3) = v22;
    v24 = *((_OWORD *)v4 + 5);
    *((_OWORD *)v19 + 4) = v23;
    v25 = *((_OWORD *)v4 + 6);
    *((_OWORD *)v19 + 5) = v24;
    v26 = *((_OWORD *)v4 + 7);
    v4 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v4 + 128);
    *((_OWORD *)v19 + 6) = v25;
    v19 += 128;
    *((_OWORD *)v19 - 1) = v26;
    --v18;
  }
  while ( v18 );
  *(_QWORD *)v19 = *(_QWORD *)v4;
  Host = RmHamFindHost(a1, a2, &v37);
  v28 = v37;
  v29 = Host;
  if ( Host >= 0 )
  {
    v30 = RmHamFindHost(a1, a3, &v36);
    v9 = v36;
    v29 = v30;
    if ( v30 >= 0 )
    {
      v31 = HampDepGroupAddDependency(v28, v36, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v39, 0LL, &v38);
      v8 = v38;
      v29 = v31;
      if ( v31 >= 0 )
        v29 = 0;
    }
  }
  if ( v28 )
  {
    RmpAcquireGlobalLock();
    v33 = (*((_QWORD *)v28 + 74))-- == 1LL;
    if ( v33 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v28 - 64), v32);
    RmpReleaseGlobalLock();
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    v33 = (*((_QWORD *)v9 + 74))-- == 1LL;
    if ( v33 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64), v34);
    RmpReleaseGlobalLock();
  }
  if ( v8 )
  {
    HampDepGroupRunStateChangeWorker(v8);
    HampDepGroupDereference(v8);
  }
  return v29;
}
