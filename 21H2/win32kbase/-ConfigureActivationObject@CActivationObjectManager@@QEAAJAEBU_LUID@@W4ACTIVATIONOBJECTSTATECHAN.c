/*
 * XREFs of ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1C00913AC
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C00BA470 (NtUserConfigureActivationObject.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C0091630 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C0091660 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1C0142BC0 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1C0142F28 (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::ConfigureActivationObject(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  CActivationObjectManager *v8; // rsi
  unsigned int v10; // ebp
  struct CActivationObject *ActivationObjectFromLuid; // rax
  int v12; // edx
  char v13; // r8
  _DWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]
  __int64 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]

  v15[0] = 0;
  v15[1] = 0;
  v17 = 0LL;
  v8 = qword_1C0296548;
  v16 = 0LL;
  v10 = -1073741275;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  v20 = 0LL;
  CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)qword_1C0296548 + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v8, a2);
  if ( ActivationObjectFromLuid )
  {
    v12 = *((_DWORD *)ActivationObjectFromLuid + 14);
    v10 = 0;
    v13 = v12 ^ (a6 & a5 | v12 & ~a5);
    if ( (v13 & 1) != 0 )
    {
      v12 ^= 1u;
      *((_DWORD *)ActivationObjectFromLuid + 14) = v12;
    }
    if ( (v13 & 2) != 0 )
    {
      v12 ^= 2u;
      *((_DWORD *)ActivationObjectFromLuid + 14) = v12;
    }
    if ( (v13 & 4) != 0 )
    {
      if ( (~(_BYTE)v12 & 4) != 0 )
        v10 = CActivationObjectManager::SetForeground(v8, ActivationObjectFromLuid, a3, a4, v15);
      else
        CActivationObjectManager::ZapForeground(v8, (struct CActivationObjectManager::ForegroundChangeTracker *)v15);
    }
  }
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)v8 + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v15);
  return v10;
}
