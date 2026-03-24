/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1406CDD50
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpFindPathByNameEx @ 0x1405CC874 (CmpFindPathByNameEx.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x140655AB0 (HvpMarkCellDirty.c)
 *     CmpIsSystemEntity @ 0x1406CF8B0 (CmpIsSystemEntity.c)
 *     CmpUnblockHiveWrites @ 0x1406E8B98 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406E8C40 (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x1406E9D20 (CmpIsKeyDeleted.c)
 *     CmVirtualKCBToRealPath @ 0x14086FB28 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(ULONG_PTR a1, _DWORD *a2, char a3, __int64 a4, unsigned __int8 a5)
{
  int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  char PathByName; // bl
  void *v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned int v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0;
  v21 = 0LL;
  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v19 = 0xFFFFFFFFLL;
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v9 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v9 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5) )
        {
          v9 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        {
          v9 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            CmpAttachToRegistryProcess((__int64)(a2 + 42), v11, v12, v13);
            a2[40] |= 1u;
          }
          v9 = CmVirtualKCBToRealPath(a1, P);
          if ( v9 >= 0 )
          {
            v9 = CmpBlockHiveWrites(0LL, 16LL, &v20);
            if ( v9 < 0 )
            {
              if ( v20 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, (__m128i *)P, 0LL, 16, &v18, &v21);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v15 = *(void **)(a4 + 8);
                if ( v15 )
                  ExFreePoolWithTag(v15, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v9 = 260;
              }
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v16 = *(_QWORD *)(a1 + 32);
                v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v16 + 8))(
                        v16,
                        *(unsigned int *)(a1 + 40),
                        &v19);
                if ( v17 )
                {
                  if ( HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 1) )
                  {
                    *(_WORD *)(v17 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v9 = 260;
                  }
                  else
                  {
                    v9 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v19);
                }
                else
                {
                  v9 = -1073741670;
                }
                if ( v16 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
                  KeAbPostRelease(v16 + 72);
                }
              }
              else
              {
                v9 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v9 = -1073741199;
      }
    }
    else
    {
      v9 = -1073741199;
    }
  }
  else
  {
    v9 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v9;
}
