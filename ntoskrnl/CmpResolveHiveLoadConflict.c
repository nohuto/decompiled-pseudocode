/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x140A13D78
 * Callers:
 *     CmLoadKey @ 0x140732FF8 (CmLoadKey.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmpJoinClassOfTrust @ 0x1402B38BC (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x1402B3938 (CmpPerformTrustClassAccessCheck.c)
 *     CmpUnJoinClassOfTrust @ 0x1402BFCE8 (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406C00DC (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406C0154 (UNLOCK_HIVE_LOAD.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     CmpReferenceKeyControlBlock @ 0x14074BF00 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpRecordUnloadEventForHive @ 0x1408727D8 (CmpRecordUnloadEventForHive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A13C04 (CmpIsHiveAlreadyLoaded.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v12; // r15
  int v13; // eax
  __int64 *v14; // rsi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // edi
  int v22; // r12d
  int v23; // eax
  __int64 *v24; // rbx
  int v25; // edx
  int v27; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _QWORD *v32; // [rsp+60h] [rbp-A0h]
  _OWORD v33[19]; // [rsp+70h] [rbp-90h] BYREF

  v30 = a8;
  v31 = a2;
  v32 = a9;
  v29 = 0LL;
  v12 = 0LL;
  Object = 0LL;
  memset(v33, 0, 0x128uLL);
  LODWORD(v33[6]) = -1;
  *((_QWORD *)&v33[9] + 1) = &v33[9];
  *(_QWORD *)&v33[9] = &v33[9];
  memset((char *)&v33[13] + 8, 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(a1, 0LL, 131097, (__int64)CmKeyObjectType, 0, (__int64)v33, (__int64 *)&Object);
  v14 = (__int64 *)Object;
  if ( v13 < 0 )
  {
    v15 = -1073741275;
    goto LABEL_26;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_8;
  if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v20 = CmpPerformTrustClassAccessCheck(v12, a7);
    v21 = v20;
    if ( v20 < 0 )
    {
      v22 = v20;
      v23 = 32;
LABEL_17:
      SetFailureLocation(a6, 0, 33, v22, v23);
      if ( v21 == -1073741275 )
        v21 = -1073741823;
      v15 = v21;
      goto LABEL_25;
    }
LABEL_8:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, v31, a3, &v29, v30) )
    {
      v24 = v29;
      v25 = *((_DWORD *)v29 + 40);
      if ( ((v25 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v25 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive(v14[1]);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock(v14[1]);
          *v32 = v14[1];
        }
        if ( !a5 || (v21 = CmpRecordUnloadEventForHive((__int64)v24, a5), v22 = v21, v21 >= 0) )
        {
          CmpUnlockKcb(v14[1]);
          if ( v12 )
          {
            CmpUnJoinClassOfTrust((__int64)v24);
            *((_DWORD *)v24 + 1028) |= 1u;
            CmpJoinClassOfTrust((__int64)v24, v12, a7);
          }
          v15 = 0;
          goto LABEL_25;
        }
        CmpUnlockKcb(v14[1]);
        v23 = 80;
        goto LABEL_17;
      }
      v27 = 64;
    }
    else
    {
      v27 = 48;
    }
    v15 = -1073741757;
    SetFailureLocation(a6, 0, 33, -1073741757, v27);
    goto LABEL_25;
  }
  v15 = -1073741444;
  SetFailureLocation(a6, 0, 33, -1073741444, 16);
LABEL_25:
  CmpUnlockRegistry(v17, v16, v18, v19);
  UNLOCK_HIVE_LOAD();
LABEL_26:
  if ( v14 )
    ObfDereferenceObject(v14);
  CmpCleanupParseContext(v33, 0LL);
  return v15;
}
