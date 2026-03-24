/*
 * XREFs of CmpTransMgrPrepare @ 0x140768324
 * Callers:
 *     CmKtmNotification @ 0x14066E410 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x140875A44 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmListGetNextElement @ 0x14066EA14 (CmListGetNextElement.c)
 *     CmpGetNextActiveHive @ 0x1406EB310 (CmpGetNextActiveHive.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14071CCC4 (UNLOCK_TRANSACTION_LIST.c)
 *     LOCK_TRANSACTION_LIST @ 0x14071CCF0 (LOCK_TRANSACTION_LIST.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071D558 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071D590 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveWriter @ 0x14071FE3C (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14071FE6C (HvLockHiveWriter.c)
 *     CmpQuitNextActiveHive @ 0x14072B22C (CmpQuitNextActiveHive.c)
 *     CmpTransMgrSyncHive @ 0x14076863C (CmpTransMgrSyncHive.c)
 *     HvMarkDirty @ 0x14087BD50 (HvMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v13; // rbx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdi
  int v22; // eax
  struct _EX_RUNDOWN_REF *v23; // rcx
  char v24; // bl
  _QWORD *v25; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v26[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v26, 0, sizeof(v26));
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  UNLOCK_TRANSACTION_LIST();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v26, v9, v10, v11);
  CmpLockRegistry();
  v25 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v25, 0);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 32LL) + 4192LL) == a1 )
      ++*a3;
  }
  v13 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v13 )
  {
    if ( ExAcquireRundownProtection(v13 + 204) )
    {
      CmpUnlockRegistry();
      v22 = CmpTransMgrSyncHive(v13);
      v23 = v13 + 204;
      v19 = v22;
      ExReleaseRundownProtection(v23);
      goto LABEL_22;
    }
    v19 = 0;
  }
  else
  {
    for ( i = 0LL; ; i = v16 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v16 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( NextActiveHive[524] == a1 && (NextActiveHive[20] & 2) == 0 )
      {
        v17 = *(_DWORD *)(a2 + 112);
        if ( v17 )
        {
          v18 = 0LL;
          while ( NextActiveHive != *(__int64 **)(a2 + 8 * v18 + 120) )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v17 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry();
        v19 = CmpTransMgrSyncHive(v16);
        if ( v19 < 0 )
        {
          CmpQuitNextActiveHive(v16);
          goto LABEL_22;
        }
        CmpLockRegistry();
      }
LABEL_10:
      ;
    }
    v20 = qword_140C01170;
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C01170 + 64) + 144LL) & 1) != 0 )
    {
LABEL_20:
      v19 = 0;
      if ( !v8 )
        goto LABEL_22;
      goto LABEL_21;
    }
    HvLockHiveFlusherExclusive(qword_140C01170);
    HvLockHiveWriter(v20);
    v24 = HvMarkDirty(v20, 0LL, 32LL);
    HvUnlockHiveWriter(v20);
    if ( v24 )
    {
      *(_DWORD *)(*(_QWORD *)(v20 + 64) + 144LL) |= 1u;
      HvUnlockHiveFlusherExclusive(v20);
      CmpUnlockRegistry();
      v8 = 0;
      if ( (int)CmpFlushHive(v20, 0) < 0 )
      {
        v19 = -1073741670;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    HvUnlockHiveFlusherExclusive(v20);
    v19 = -1073741670;
  }
LABEL_21:
  CmpUnlockRegistry();
LABEL_22:
  CmpDetachFromRegistryProcess((__int64)v26);
  return (unsigned int)v19;
}
