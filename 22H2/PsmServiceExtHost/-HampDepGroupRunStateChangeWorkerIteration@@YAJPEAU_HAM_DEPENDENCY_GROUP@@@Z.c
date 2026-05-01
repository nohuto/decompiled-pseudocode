/*
 * XREFs of ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B1D0
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000B1C8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006B44 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800180F0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB70 (-HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001E1E0 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001E2D0 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001E750 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18001E890 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18002DF84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003345C (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800355D4 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035C9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800753EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007EE04 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007F228 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007F9F8 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupRunStateChangeWorkerIteration(struct _HAM_DEPENDENCY_GROUP *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // r13
  _QWORD *v4; // r15
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  void *v8; // rdi
  _QWORD *Value; // rax
  bool v10; // zf
  __int64 v11; // rax
  struct _HAM_DEPENDENCY_LINK *NextLink; // rcx
  struct _HAM_DEPENDENCY_LINK *v13; // rdx
  char *v14; // rbx
  struct _HAM_DEPENDENCY_LINK *v15; // rdx
  struct _HAM_DEPENDENCY_LINK *v16; // r8
  struct _HAM_DEPENDENCY_LINK *j; // rax
  struct _HAM_DEPENDENCY_LINK *v18; // rdx
  struct _HAM_DEPENDENCY_LINK *v19; // rdx
  __int64 *k; // rdi
  _QWORD *v21; // rax
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rbx
  struct _HAM_DEPENDENCY_LINK *v23; // rdx
  struct _HAM_HOST_DEPENDENCY *v24; // r9
  struct _HAM_DEPENDENCY_LINK *v25; // r8
  struct _HAM_DEPENDENCY_LINK *m; // rcx
  struct _HAM_DEPENDENCY_LINK *v27; // rdx
  struct _HAM_DEPENDENCY_LINK *v28; // rdx
  struct _HAM_HOST_DEPENDENCY *v29; // rbx
  struct _HAM_DEPENDENCY_LINK *v30; // rdx
  struct _HAM_HOST_DEPENDENCY *v31; // r9
  struct _HAM_DEPENDENCY_LINK *v32; // r8
  struct _HAM_DEPENDENCY_LINK *n; // rcx
  struct _HAM_HOST_DEPENDENCY *v34; // rbx
  int v35; // r9d
  struct _HAM_DEPENDENCY_LINK *v36; // rdx
  struct _HAM_HOST_DEPENDENCY *v37; // rdi
  struct _HAM_DEPENDENCY_LINK *v38; // r8
  struct _HAM_DEPENDENCY_LINK *ii; // rcx
  struct _HAM_DEPENDENCY_LINK *v40; // rdx
  struct _HAM_DEPENDENCY_LINK *v41; // rdx
  int started; // r14d
  DWORD v43; // edi
  _QWORD *v44; // rbx
  _QWORD *v45; // rax
  DWORD v46; // esi
  __int64 v47; // rbx
  _QWORD *v48; // rdi
  _QWORD *v49; // rax
  _OWORD *v50; // rax
  __int64 v51; // rdx
  __int64 *v52; // rcx
  int v53; // r14d
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // r9d
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rdi
  char v64[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v65[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v66; // [rsp+58h] [rbp-21h] BYREF
  __int64 v67; // [rsp+60h] [rbp-19h] BYREF
  struct _RTL_BALANCED_NODE *v68; // [rsp+68h] [rbp-11h] BYREF
  __int64 i; // [rsp+70h] [rbp-9h]
  __int64 v70; // [rsp+78h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+80h] [rbp+7h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A159F, 0, 0, 2u, &v71);
  if ( *((_DWORD *)a1 + 32) != GetCurrentThreadId() )
    __int2c();
  v65[1] = v65;
  v65[0] = v65;
  while ( !HampDepGroupTryLockAndReferenceMembers(a1, (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v65) )
  {
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v65);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v65);
  }
  v2 = (_QWORD *)v65[0];
  v3 = *((_QWORD *)a1 + 14);
  v68 = 0LL;
  for ( i = 0LL; v2 != v65; v2 = (_QWORD *)*v2 )
  {
    v4 = v2 - 91;
    v2[29] = 0LL;
    HampHostCheckSetStaticDonation((struct _RM_HAM_ACTIVITY_HOST *)(v2 - 91));
    v5 = *(v2 - 10);
    v6 = (4 * ((v5 & 0x300000000LL) != 0)) | (_DWORD)v2[5] & 0xFFFFFFF3;
    *((_DWORD *)v2 + 10) = v6;
    if ( (v5 & 0x1000000000LL) != 0 )
    {
      v7 = (unsigned __int64)v68;
      v8 = (void *)((v6 >> 2) & 3);
      if ( (i & 1) != 0 )
      {
        if ( v68 )
          v7 = (unsigned __int64)&v68 ^ (unsigned __int64)v68;
        else
          v7 = 0LL;
      }
      LOBYTE(v5) = 0;
      v53 = i & 1;
      if ( v7 )
      {
        while ( 1 )
        {
          if ( (int)HampDepHostStackCompareHosts(v8, (struct _RTL_BALANCED_NODE *)v7) < 0 )
          {
            v54 = *(_QWORD *)v7;
            if ( v53 )
            {
              if ( !v54 )
                goto LABEL_124;
              v54 ^= v7;
            }
            if ( !v54 )
            {
LABEL_124:
              LOBYTE(v5) = 0;
              break;
            }
          }
          else
          {
            v54 = *(_QWORD *)(v7 + 8);
            if ( v53 )
            {
              if ( !v54 )
                goto LABEL_12;
              v54 ^= v7;
            }
            if ( !v54 )
            {
LABEL_12:
              LOBYTE(v5) = 1;
              break;
            }
          }
          v7 = v54;
        }
      }
      RtlRbInsertNodeEx(&v68, v7, v5, v4 + 93);
      *((_DWORD *)v4 + 192) |= 2u;
    }
  }
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 8) == 0 )
      __int2c();
    v10 = Value[4]-- == 1LL;
    if ( v10 )
      *Value &= ~8uLL;
  }
  HampDepGroupEvaluateDependencies(a1, (struct _HAM_DEP_HOST_STACK *)&v68);
  v11 = *((_QWORD *)a1 + 10);
  if ( (v11 & 1) != 0 )
  {
    if ( v11 == 1 )
      NextLink = 0LL;
    else
      NextLink = (struct _HAM_DEPENDENCY_LINK *)(v11 ^ (((unsigned __int64)a1 + 72) | 1));
  }
  else
  {
    NextLink = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 10);
  }
  if ( NextLink )
  {
    while ( 1 )
    {
      v13 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 8);
      v14 = 0LL;
      if ( v13 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 64) )
        v14 = (char *)v13 - 16;
      if ( v14 )
        break;
      NextLink = HampDepGroupGetNextLink(NextLink);
      if ( !NextLink )
        goto LABEL_39;
    }
    while ( 1 )
    {
      do
      {
        if ( (v14[32] & 7) == 5 )
          HampHostQueueTerminateEx(
            *((struct _RM_HAM_ACTIVITY_HOST **)v14 + 7),
            *((_DWORD *)v14 + 21),
            *((_DWORD *)v14 + 20),
            0LL,
            2,
            0);
        v15 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v14 + 2);
        v16 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v14 + 1);
        v14 = 0LL;
        if ( v15 != (struct _HAM_DEPENDENCY_LINK *)((char *)v16 + 64) )
          v14 = (char *)v15 - 16;
      }
      while ( v14 );
      j = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v16 + 1);
      if ( j )
      {
        v18 = *(struct _HAM_DEPENDENCY_LINK **)j;
        if ( *(_QWORD *)j )
        {
          do
          {
            j = v18;
            v18 = *(struct _HAM_DEPENDENCY_LINK **)v18;
          }
          while ( v18 );
        }
      }
      else
      {
        for ( j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v16 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              j;
              j = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)j + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)j == v16 )
            break;
          v16 = j;
        }
      }
      if ( !j )
        break;
      while ( 1 )
      {
        v19 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)j + 8);
        v14 = 0LL;
        if ( v19 != (struct _HAM_DEPENDENCY_LINK *)((char *)j + 64) )
          v14 = (char *)v19 - 16;
        if ( v14 )
          break;
        j = HampDepGroupGetNextLink(j);
        if ( !j )
          goto LABEL_39;
      }
    }
  }
LABEL_39:
  HampDepGroupProcessDonations(a1);
  for ( k = (__int64 *)v65[0]; k != v65; k = (__int64 *)*k )
  {
    if ( (k[5] & 1) != 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v21 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v21 & 2) == 0 )
          __int2c();
        v10 = v21[2]-- == 1LL;
        if ( v10 )
          *v21 &= ~2uLL;
      }
      *((_DWORD *)k - 180) = 0;
      RtlReleaseSRWLockExclusive(k - 91);
      *((_DWORD *)k + 10) &= ~1u;
    }
  }
  FirstDependency = HampDepGroupGetFirstDependency(a1);
  while ( FirstDependency )
  {
    v23 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDependency + 2);
    v24 = FirstDependency;
    v25 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDependency + 1);
    LODWORD(m) = (_DWORD)v25 + 64;
    FirstDependency = 0LL;
    if ( v23 != (struct _HAM_DEPENDENCY_LINK *)((char *)v25 + 64) )
      FirstDependency = (struct _HAM_DEPENDENCY_LINK *)((char *)v23 - 16);
    if ( !FirstDependency )
    {
      m = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v25 + 1);
      if ( m )
      {
        v27 = *(struct _HAM_DEPENDENCY_LINK **)m;
        if ( *(_QWORD *)m )
        {
          do
          {
            m = v27;
            v27 = *(struct _HAM_DEPENDENCY_LINK **)v27;
          }
          while ( v27 );
        }
      }
      else
      {
        for ( m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v25 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              m;
              m = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)m + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)m == v25 )
            break;
          v25 = m;
        }
      }
      if ( m )
      {
        while ( 1 )
        {
          v28 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)m + 8);
          LODWORD(v25) = (_DWORD)m + 64;
          FirstDependency = 0LL;
          if ( v28 != (struct _HAM_DEPENDENCY_LINK *)((char *)m + 64) )
            FirstDependency = (struct _HAM_DEPENDENCY_LINK *)((char *)v28 - 16);
          if ( FirstDependency )
            break;
          m = HampDepGroupGetNextLink(m);
          if ( !m )
            goto LABEL_145;
        }
      }
      else
      {
LABEL_145:
        FirstDependency = 0LL;
      }
    }
    if ( (*((_BYTE *)v24 + 32) & 7) == 3 )
    {
      if ( *((_BYTE *)v24 + 40) == 3 )
      {
        HampHostDepDestroy(v24);
      }
      else
      {
        v62 = *(_QWORD *)v24;
        if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
        {
          v66 = *(_QWORD *)(v62 + 40);
          v64[0] = 3;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
            (_DWORD)m,
            (unsigned int)&unk_1800A1658,
            (_DWORD)v25,
            (_DWORD)v24,
            (__int64)&v66,
            (__int64)v64);
        }
        HampActClose((struct _HAM_ACTIVITY *)v62);
      }
    }
  }
  v29 = HampDepGroupGetFirstDependency(a1);
  while ( v29 )
  {
    v30 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v29 + 2);
    v31 = v29;
    v32 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v29 + 1);
    LODWORD(n) = (_DWORD)v32 + 64;
    v29 = 0LL;
    if ( v30 != (struct _HAM_DEPENDENCY_LINK *)((char *)v32 + 64) )
      v29 = (struct _HAM_DEPENDENCY_LINK *)((char *)v30 - 16);
    if ( !v29 )
    {
      n = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v32 + 1);
      if ( n )
      {
        v30 = *(struct _HAM_DEPENDENCY_LINK **)n;
        if ( *(_QWORD *)n )
        {
          do
          {
            n = v30;
            v30 = *(struct _HAM_DEPENDENCY_LINK **)v30;
          }
          while ( v30 );
        }
      }
      else
      {
        for ( n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v32 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              n;
              n = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)n + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)n == v32 )
            break;
          v32 = n;
        }
      }
      if ( n )
      {
        while ( 1 )
        {
          v30 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)n + 8);
          LODWORD(v32) = (_DWORD)n + 64;
          v29 = 0LL;
          if ( v30 != (struct _HAM_DEPENDENCY_LINK *)((char *)n + 64) )
            v29 = (struct _HAM_DEPENDENCY_LINK *)((char *)v30 - 16);
          if ( v29 )
            break;
          n = HampDepGroupGetNextLink(n);
          if ( !n )
            goto LABEL_167;
        }
      }
      else
      {
LABEL_167:
        v29 = 0LL;
      }
    }
    if ( (*((_DWORD *)v31 + 8) & 7) == 2 )
    {
      if ( *((_BYTE *)v31 + 40) == 3 )
      {
        HampHostDepDestroy(v31);
      }
      else
      {
        v63 = *(_QWORD *)v31;
        if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
        {
          v66 = *(_QWORD *)(v63 + 40);
          v64[0] = 2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
            (_DWORD)n,
            (unsigned int)&unk_1800A1658,
            (_DWORD)v32,
            (_DWORD)v31,
            (__int64)&v66,
            (__int64)v64);
        }
        HampActStop((struct _HAM_ACTIVITY *)v63, (__int64)v30);
      }
    }
  }
  v34 = HampDepGroupGetFirstDependency(a1);
  if ( !v34 )
  {
LABEL_87:
    started = 0;
    goto LABEL_88;
  }
  while ( 1 )
  {
    v36 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v34 + 2);
    v37 = v34;
    v38 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v34 + 1);
    LODWORD(ii) = (_DWORD)v38 + 64;
    v34 = 0LL;
    if ( v36 != (struct _HAM_DEPENDENCY_LINK *)((char *)v38 + 64) )
      v34 = (struct _HAM_DEPENDENCY_LINK *)((char *)v36 - 16);
    if ( !v34 )
    {
      ii = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)v38 + 1);
      if ( ii )
      {
        v40 = *(struct _HAM_DEPENDENCY_LINK **)ii;
        if ( *(_QWORD *)ii )
        {
          do
          {
            ii = v40;
            v40 = *(struct _HAM_DEPENDENCY_LINK **)v40;
          }
          while ( v40 );
        }
      }
      else
      {
        for ( ii = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)v38 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              ii;
              ii = (struct _HAM_DEPENDENCY_LINK *)(*((_QWORD *)ii + 2) & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( *(struct _HAM_DEPENDENCY_LINK **)ii == v38 )
            break;
          v38 = ii;
        }
      }
      if ( ii )
      {
        while ( 1 )
        {
          v41 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)ii + 8);
          LODWORD(v38) = (_DWORD)ii + 64;
          v34 = 0LL;
          if ( v41 != (struct _HAM_DEPENDENCY_LINK *)((char *)ii + 64) )
            v34 = (struct _HAM_DEPENDENCY_LINK *)((char *)v41 - 16);
          if ( v34 )
            break;
          ii = HampDepGroupGetNextLink(ii);
          if ( !ii )
            goto LABEL_169;
        }
      }
      else
      {
LABEL_169:
        v34 = 0LL;
      }
    }
    if ( (*((_DWORD *)v37 + 8) & 7) != 1 )
      goto LABEL_86;
    if ( *((_BYTE *)v37 + 40) == 3 )
    {
      HampHostDepDestroy(v37);
      goto LABEL_86;
    }
    v60 = *(_QWORD *)v37;
    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    {
      v67 = *(_QWORD *)(v60 + 40);
      v64[0] = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        (_DWORD)ii,
        (unsigned int)&unk_1800A1658,
        (_DWORD)v38,
        v35,
        (__int64)&v67,
        (__int64)v64);
    }
    started = HampActStartAsync(v60, 0, (DWORD *)&v66, 0LL);
    if ( started >= 0 )
      started = 0;
    if ( started < 0 )
      break;
    *((_DWORD *)v37 + 8) &= 0xFFFFFFFC;
    *((_DWORD *)v37 + 8) |= 4u;
LABEL_86:
    if ( !v34 )
      goto LABEL_87;
  }
  LOBYTE(v61) = 4;
  HampDepGroupProcessActivityActionForGroup(a1, v61);
LABEL_88:
  v43 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v44 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v43) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v44 |= 8uLL;
    ++v44[4];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  GetCurrentThreadId();
  *((_QWORD *)a1 + 13) = v3;
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v45 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v45 & 8) == 0 )
      __int2c();
    v10 = v45[4]-- == 1LL;
    if ( v10 )
      *v45 &= ~8uLL;
  }
  RmpAcquireGlobalLock();
  while ( (_QWORD *)v65[0] != v65 )
  {
    v46 = HampLockTrackerId;
    v47 = v65[0] - 728LL;
    if ( HampLockTrackerId != -1 )
    {
      v48 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v46) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v48 |= 2uLL;
      ++v48[2];
    }
    RtlAcquireSRWLockExclusive(v47);
    *(_DWORD *)(v47 + 8) = GetCurrentThreadId();
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v47, 0);
    if ( HampLockTrackerId != -1 )
    {
      v49 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v49 & 2) == 0 )
        __int2c();
      v10 = v49[2]-- == 1LL;
      if ( v10 )
        *v49 &= ~2uLL;
    }
    *(_DWORD *)(v47 + 8) = 0;
    RtlReleaseSRWLockExclusive(v47);
    v50 = (_OWORD *)(v47 + 728);
    v51 = *(_QWORD *)(v47 + 728);
    if ( *(_QWORD *)(v51 + 8) != v47 + 728 || (v52 = *(__int64 **)(v47 + 736), (_OWORD *)*v52 != v50) )
      __fastfail(3u);
    *v52 = v51;
    *(_QWORD *)(v51 + 8) = v52;
    *v50 = 0LL;
    v10 = (*(_QWORD *)(v47 + 592))-- == 1LL;
    *(_DWORD *)(v47 + 768) = 0;
    if ( v10 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v47 - 64), v51);
  }
  dword_1800B4118 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  CempLockTrackerMarkReleased(v56, v55, 0LL);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v70 = *(_QWORD *)a1;
    v67 = v3;
    LODWORD(v66) = started;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800B3218,
      (unsigned int)&unk_1800A155B,
      v57,
      v58,
      (__int64)&v66,
      (__int64)&v70,
      (__int64)&v67);
  }
  return (unsigned int)started;
}
