/*
 * XREFs of ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1C000C19C
 * Callers:
 *     NtUserDestroyActivationObject @ 0x1C000D0F0 (NtUserDestroyActivationObject.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C005BD48 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00839F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C00C2770 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C015646C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::DestroyActivationObject(
        CActivationObjectManager *this,
        const struct _LUID *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  CPushLock *v5; // rbx
  struct CActivationObject *ActivationObjectFromLuid; // rax
  struct CActivationObject *v7; // rdi
  _QWORD *v8; // r10
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rcx
  __int128 v12; // [rsp+28h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-19h]
  int v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp+7h]
  _QWORD v16[6]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+67h]

  v2 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v3 = 0;
  memset(v16, 0, sizeof(v16));
  v5 = (CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL);
  CPushLock::AcquireLockExclusive((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid((CActivationObjectManager *)v2, a2);
  v7 = ActivationObjectFromLuid;
  if ( ActivationObjectFromLuid )
  {
    if ( *((struct _KTHREAD **)ActivationObjectFromLuid + 4) != KeGetCurrentThread() )
    {
      CPushLock::ReleaseLock(v5);
      v3 = -1073741790;
      goto LABEL_13;
    }
    v8 = (_QWORD *)((char *)ActivationObjectFromLuid + 8);
    v17 = *((_QWORD *)ActivationObjectFromLuid + 2) & (-1LL << (*(_DWORD *)(v2 + 4) & 0x1F));
    v9 = (_QWORD *)(*(_QWORD *)(v2 + 8)
                  + 8LL
                  * ((37
                    * (BYTE6(v17)
                     + 37
                     * (BYTE5(v17)
                      + 37
                      * (BYTE4(v17)
                       + 37
                       * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                    + HIBYTE(v17)) & (unsigned int)((*(_DWORD *)(v2 + 4) >> 5) - 1)));
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
      CActivationObjectManager::ZapForeground(
        (CActivationObjectManager *)v2,
        (struct CActivationObjectManager::ForegroundChangeTracker *)v16);
    v15 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    ((void (__fastcall *)(unsigned __int64, struct CActivationObject *, __int64, __int128 *))CActivationObjectManager::NotifySystemSateChanged)(
      v10,
      v7,
      1LL,
      &v12);
  }
  CPushLock::ReleaseLock(v5);
  if ( v7 )
    ObfDereferenceObject(v7);
LABEL_13:
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v16);
  return v3;
}
