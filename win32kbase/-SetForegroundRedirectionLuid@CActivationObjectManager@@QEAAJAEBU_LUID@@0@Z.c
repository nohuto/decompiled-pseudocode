__int64 __fastcall CActivationObjectManager::SetForegroundRedirectionLuid(
        CActivationObjectManager *this,
        const struct _LUID *a2,
        const struct _LUID *a3)
{
  __int64 v3; // r13
  unsigned int v6; // esi
  __int64 v7; // rcx
  struct CActivationObject *ActivationObjectFromLuid; // r15
  __int64 v9; // rcx
  struct CActivationObject *v10; // rdi
  _BYTE v12[28]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v13; // [rsp+50h] [rbp-19h] BYREF
  __int64 v14; // [rsp+60h] [rbp-9h]
  int v15; // [rsp+68h] [rbp-1h]
  _DWORD v16[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int64 v21; // [rsp+90h] [rbp+27h]
  __int64 v22; // [rsp+98h] [rbp+2Fh]

  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v16[0] = 0;
  v16[1] = 0;
  v18 = 0LL;
  v6 = -1073741275;
  v19 = 0;
  v20 = 0;
  v22 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  CPushLock::AcquireLockExclusive((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid((CActivationObjectManager *)v3, a2);
  if ( ActivationObjectFromLuid )
  {
    v6 = 0;
    if ( *a3 )
    {
      v10 = CActivationObjectManager::GetActivationObjectFromLuid((CActivationObjectManager *)v3, a3);
      if ( v10 )
      {
        memset(v12, 0, 20);
        *(struct _LUID *)&v12[20] = *a3;
        *(struct _LUID *)((char *)ActivationObjectFromLuid + 60) = *a3;
        v13 = *(_OWORD *)v12;
        v14 = *(_QWORD *)&v12[16];
        v15 = *(_DWORD *)&v12[24];
        CActivationObjectManager::NotifySystemSateChanged(
          v9,
          (__int64)ActivationObjectFromLuid,
          4,
          (unsigned int *)&v13);
        if ( (*((_DWORD *)ActivationObjectFromLuid + 14) & 4) != 0 && (*((_BYTE *)v10 + 56) & 1) != 0 )
          CActivationObjectManager::SetForeground((CActivationObjectManager *)v3, (__int64)v10, 0, 0, (__int64)v16);
      }
      else
      {
        v6 = -1073741811;
      }
    }
    else
    {
      memset(v12, 0, 20);
      *(_QWORD *)((char *)ActivationObjectFromLuid + 60) = 0LL;
      v15 = 0;
      v13 = *(_OWORD *)v12;
      v14 = 0LL;
      CActivationObjectManager::NotifySystemSateChanged(v7, (__int64)ActivationObjectFromLuid, 4, (unsigned int *)&v13);
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(v3 + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v16);
  return v6;
}
