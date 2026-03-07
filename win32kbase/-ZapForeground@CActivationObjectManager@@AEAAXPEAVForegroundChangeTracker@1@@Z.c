void __fastcall CActivationObjectManager::ZapForeground(
        CActivationObjectManager *this,
        struct CActivationObjectManager::ForegroundChangeTracker *a2)
{
  CActivationObjectManager::ActivationObjectDescriptor *v4; // rax
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  CActivationObjectManager::ActivationObjectDescriptor *v9; // rax
  _BYTE v10[20]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+44h] [rbp-2Ch]
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+68h] [rbp-8h]

  v4 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
         (CActivationObjectManager::ActivationObjectDescriptor *)v10,
         *(PEPROCESS **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 32LL));
  *(_OWORD *)((char *)a2 + 24) = *(_OWORD *)v4;
  *((_QWORD *)a2 + 5) = *((_QWORD *)v4 + 2);
  v5 = *((_QWORD *)this + 4);
  *(_DWORD *)(v5 + 56) &= ~4u;
  *((_QWORD *)this + 4) = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(*(_QWORD *)(v5 + 32));
  ForegroundBoost::SetForegroundPriority(ThreadWin32Thread, 0);
  PostEvent(*(_QWORD *)(v5 + 72), 0, 6, 0, 0LL);
  v7 = *(_QWORD *)(v5 + 40);
  v11 = 0LL;
  *(_DWORD *)v10 = 0;
  *(_OWORD *)&v10[4] = v7;
  v13 = 0LL;
  v12 = *(_OWORD *)v10;
  v14 = 0;
  CActivationObjectManager::NotifySystemSateChanged(v8, v5, 3, (unsigned int *)&v12);
  v9 = CActivationObjectManager::ActivationObjectDescriptor::ActivationObjectDescriptor(
         (CActivationObjectManager::ActivationObjectDescriptor *)v10,
         *(PEPROCESS **)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 32LL));
  *(_OWORD *)a2 = *(_OWORD *)v9;
  *((_QWORD *)a2 + 2) = *((_QWORD *)v9 + 2);
}
