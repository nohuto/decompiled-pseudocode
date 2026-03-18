/*
 * XREFs of ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x1C009149C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1C00918F8 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C0142F28 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

void __fastcall CActivationObjectManager::OnThreadTermination(CActivationObjectManager *this)
{
  CActivationObjectManager *v1; // r14
  _QWORD **v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 *v4; // rcx
  _DWORD *v5; // r15
  _QWORD *i; // rcx
  __int128 v7; // [rsp+28h] [rbp-39h] BYREF
  __int64 v8; // [rsp+38h] [rbp-29h]
  int v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+58h] [rbp-9h]
  _QWORD v11[6]; // [rsp+68h] [rbp+7h] BYREF

  v1 = qword_1C0296548;
  memset(v11, 0, sizeof(v11));
  CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)qword_1C0296548 + 16));
  v2 = (_QWORD **)*((_QWORD *)v1 + 1);
  v3 = (unsigned __int64)v2;
  while ( 1 )
  {
    v4 = (unsigned __int64 *)v3;
    if ( !v3 )
      break;
    v3 = *(_QWORD *)v3;
    if ( (v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v3 = *v4;
    if ( (v3 & 1) != 0 )
      break;
LABEL_7:
    if ( !v3 )
      goto LABEL_13;
    v5 = (_DWORD *)(v3 - 8);
    if ( *(struct _KTHREAD **)(v3 - 8 + 32) == KeGetCurrentThread() )
    {
      for ( i = v2; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == v3 )
        {
          *i = *(_QWORD *)v3;
          --*(_DWORD *)v1;
          *(_QWORD *)v3 |= 0x8000000000000002uLL;
          v3 = (unsigned __int64)i;
          break;
        }
      }
      if ( (v5[14] & 4) != 0 )
        CActivationObjectManager::ZapForeground(v1, (struct CActivationObjectManager::ForegroundChangeTracker *)v11);
      v10 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0;
      ((void (__fastcall *)(_QWORD *, _DWORD *, __int64, __int128 *))CActivationObjectManager::NotifySystemSateChanged)(
        i,
        v5,
        1LL,
        &v7);
      ObfDereferenceObject(v5);
    }
  }
  for ( ++v2; (unsigned __int64)v2 < *((_QWORD *)v1 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v1 + 1) >> 5); ++v2 )
  {
    v3 = (unsigned __int64)*v2;
    if ( ((unsigned __int8)*v2 & 1) == 0 )
      goto LABEL_7;
  }
LABEL_13:
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)v1 + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v11);
}
