__int64 __fastcall CActivationObjectManager::ConfigureActivationObject(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 v8; // rsi
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
  v8 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v16 = 0LL;
  v10 = -1073741275;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  v20 = 0LL;
  CPushLock::AcquireLockExclusive((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid((CActivationObjectManager *)v8, a2);
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
        CActivationObjectManager::ZapForeground(
          (CActivationObjectManager *)v8,
          (struct CActivationObjectManager::ForegroundChangeTracker *)v15);
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(v8 + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v15);
  return v10;
}
