__int64 __fastcall CActivationObjectManager::QueryActivationObjectData(
        CActivationObjectManager *this,
        const struct _LUID *a2,
        struct _tagActivationObjectData *a3)
{
  __int64 v3; // rdi
  CPushLock *v5; // rbx
  unsigned int v7; // r15d
  struct CActivationObject *ActivationObjectFromLuid; // rax
  struct CActivationObject *v9; // rdi
  unsigned int ThreadId; // eax
  __int128 v12; // [rsp+20h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-20h]

  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  *(_OWORD *)a3 = 0LL;
  *((_OWORD *)a3 + 1) = 0LL;
  v5 = (CPushLock *)(v3 + 16);
  *((_QWORD *)a3 + 4) = 0LL;
  v7 = -1073741275;
  CPushLock::AcquireLockShared((CPushLock *)(v3 + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid((CActivationObjectManager *)v3, a2);
  v9 = ActivationObjectFromLuid;
  if ( ActivationObjectFromLuid )
  {
    v7 = 0;
    *(_QWORD *)&v12 = *((_QWORD *)ActivationObjectFromLuid + 5);
    *((_QWORD *)&v12 + 1) = *((_QWORD *)ActivationObjectFromLuid + 9);
    *(_QWORD *)&v13 = *((_QWORD *)ActivationObjectFromLuid + 6);
    DWORD2(v13) = *((_DWORD *)ActivationObjectFromLuid + 14);
    HIDWORD(v13) = (unsigned int)PsGetProcessId(*((PEPROCESS *)ActivationObjectFromLuid + 3)) & 0xFFFFFFFC;
    ThreadId = (unsigned int)PsGetThreadId(*((PETHREAD *)v9 + 4));
    *(_OWORD *)a3 = v12;
    *((_OWORD *)a3 + 1) = v13;
    *((_QWORD *)a3 + 4) = ThreadId;
  }
  CPushLock::ReleaseLock(v5);
  return v7;
}
