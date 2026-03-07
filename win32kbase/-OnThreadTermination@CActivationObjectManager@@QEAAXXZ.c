void __fastcall CActivationObjectManager::OnThreadTermination(CActivationObjectManager *this)
{
  __int64 v1; // r14
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  _DWORD *v4; // r15
  _QWORD *i; // rcx
  __int128 v6; // [rsp+28h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-29h]
  int v8; // [rsp+40h] [rbp-21h]
  __int64 v9; // [rsp+58h] [rbp-9h]
  _QWORD v10[6]; // [rsp+68h] [rbp+7h] BYREF

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  memset(v10, 0, sizeof(v10));
  CPushLock::AcquireLockExclusive((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  v2 = *(_QWORD ***)(v1 + 8);
  v3 = v2;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_7:
    if ( !v3 )
      goto LABEL_13;
    v4 = v3 - 1;
    if ( (struct _KTHREAD *)v3[3] == KeGetCurrentThread() )
    {
      for ( i = v2; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v3 )
        {
          *i = *v3;
          --*(_DWORD *)v1;
          *v3 |= 0x8000000000000002uLL;
          v3 = i;
          break;
        }
      }
      if ( (v4[14] & 4) != 0 )
        CActivationObjectManager::ZapForeground(
          (CActivationObjectManager *)v1,
          (struct CActivationObjectManager::ForegroundChangeTracker *)v10);
      v9 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      ((void (__fastcall *)(_QWORD *, _DWORD *, __int64, __int128 *))CActivationObjectManager::NotifySystemSateChanged)(
        i,
        v4,
        1LL,
        &v6);
      ObfDereferenceObject(v4);
    }
  }
  for ( ++v2; (unsigned __int64)v2 < *(_QWORD *)(v1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v1 + 4) >> 5); ++v2 )
  {
    v3 = *v2;
    if ( ((unsigned __int8)*v2 & 1) == 0 )
      goto LABEL_7;
  }
LABEL_13:
  CPushLock::ReleaseLock((CPushLock *)(v1 + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v10);
}
