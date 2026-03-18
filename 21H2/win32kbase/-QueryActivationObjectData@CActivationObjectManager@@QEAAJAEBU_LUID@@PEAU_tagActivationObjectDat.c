/*
 * XREFs of ?QueryActivationObjectData@CActivationObjectManager@@QEAAJAEBU_LUID@@PEAU_tagActivationObjectData@@@Z @ 0x1C0142ABC
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C00BA470 (NtUserConfigureActivationObject.c)
 * Callees:
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C0091660 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0096270 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CActivationObjectManager::QueryActivationObjectData(
        CActivationObjectManager *this,
        const struct _LUID *a2,
        struct _tagActivationObjectData *a3)
{
  CActivationObjectManager *v3; // rdi
  CPushLock *v5; // rbx
  unsigned int v7; // r14d
  struct CActivationObject *ActivationObjectFromLuid; // rax
  struct CActivationObject *v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-38h]
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int64 ThreadId; // [rsp+40h] [rbp-18h]

  v3 = qword_1C0296548;
  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  v5 = (CActivationObjectManager *)((char *)v3 + 16);
  *((_QWORD *)a3 + 4) = 0LL;
  v7 = -1073741275;
  CPushLock::AcquireLockShared((CActivationObjectManager *)((char *)v3 + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v3, a2);
  v9 = ActivationObjectFromLuid;
  if ( ActivationObjectFromLuid )
  {
    v7 = 0;
    *(_QWORD *)&v11 = *((_QWORD *)ActivationObjectFromLuid + 5);
    *((_QWORD *)&v11 + 1) = *((_QWORD *)ActivationObjectFromLuid + 9);
    *(_QWORD *)&v12 = *((_QWORD *)ActivationObjectFromLuid + 6);
    DWORD2(v12) = *((_DWORD *)ActivationObjectFromLuid + 14);
    HIDWORD(v12) = (unsigned int)PsGetProcessId(*((PEPROCESS *)ActivationObjectFromLuid + 3)) & 0xFFFFFFFC;
    ThreadId = (unsigned int)PsGetThreadId(*((PETHREAD *)v9 + 4));
    *(_OWORD *)a3 = v11;
    *((_OWORD *)a3 + 1) = v12;
    *((_QWORD *)a3 + 4) = ThreadId;
  }
  CPushLock::ReleaseLock(v5);
  return v7;
}
