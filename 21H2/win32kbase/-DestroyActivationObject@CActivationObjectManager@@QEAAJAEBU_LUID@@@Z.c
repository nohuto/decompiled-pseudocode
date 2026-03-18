/*
 * XREFs of ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C01427AC
 * Callers:
 *     NtUserDestroyActivationObject @ 0x1C0157540 (NtUserDestroyActivationObject.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C0091660 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00918F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C0142F28 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::DestroyActivationObject(
        CActivationObjectManager *this,
        const struct _LUID *a2)
{
  CActivationObjectManager *v2; // r14
  unsigned int v3; // esi
  CPushLock *v5; // rbx
  struct CActivationObject *ActivationObjectFromLuid; // rax
  struct CActivationObject *v7; // rdi
  _QWORD *v8; // r10
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+28h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-19h]
  int v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  _QWORD v16[6]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+67h]

  v2 = qword_1C0296548;
  v3 = 0;
  memset(v16, 0, sizeof(v16));
  v5 = (CActivationObjectManager *)((char *)qword_1C0296548 + 16);
  CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)qword_1C0296548 + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v2, a2);
  v7 = ActivationObjectFromLuid;
  if ( ActivationObjectFromLuid )
  {
    if ( *((struct _KTHREAD **)ActivationObjectFromLuid + 4) != KeGetCurrentThread() )
    {
      CPushLock::ReleaseLock(v5);
      v3 = -1073741790;
      goto LABEL_14;
    }
    v8 = (_QWORD *)((char *)ActivationObjectFromLuid + 8);
    v17 = *((_QWORD *)ActivationObjectFromLuid + 2) & (-1LL << (*((_DWORD *)v2 + 1) & 0x1F));
    v9 = (_QWORD *)(*((_QWORD *)v2 + 1)
                  + 8LL
                  * ((37
                    * (BYTE6(v17)
                     + 37
                     * (BYTE5(v17)
                      + 37
                      * (BYTE4(v17)
                       + 37
                       * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                    + HIBYTE(v17)) & (unsigned int)((*((_DWORD *)v2 + 1) >> 5) - 1)));
    v10 = 0x8000000000000002uLL;
    while ( (*v9 & 1) == 0 )
    {
      if ( (_QWORD *)*v9 == v8 )
      {
        *v9 = *v8;
        --*(_DWORD *)v2;
        *v8 |= 0x8000000000000002uLL;
        break;
      }
      v9 = (_QWORD *)*v9;
    }
    if ( (*((_DWORD *)ActivationObjectFromLuid + 14) & 4) != 0 )
      CActivationObjectManager::ZapForeground(v2, (struct CActivationObjectManager::ForegroundChangeTracker *)v16);
    v15 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    CActivationObjectManager::NotifySystemSateChanged(v10, (__int64)v7, 1, (unsigned int *)&v12);
  }
  CPushLock::ReleaseLock(v5);
  if ( v7 )
    ObfDereferenceObject(v7);
LABEL_14:
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v16);
  return v3;
}
