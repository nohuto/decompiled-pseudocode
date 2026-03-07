void __fastcall DEVLOCKOBJ::vDestructor(struct _ERESOURCE *this)
{
  struct _ERESOURCE *v1; // rbx
  int v2; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v9; // rcx
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rax

  v1 = this;
  if ( qword_1C02D58A0 && (int)qword_1C02D58A0() >= 0 && qword_1C02D58A8 )
    qword_1C02D58A8(v1);
  v2 = *(_DWORD *)&v1->ActiveCount;
  if ( (v2 & 0x1000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v4 = *ThreadWin32Thread;
      if ( v4 )
        --*(_DWORD *)(v4 + 104);
    }
    *(_DWORD *)&v1->ActiveCount &= ~0x1000u;
    v5 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v5 )
    {
      v6 = *v5;
      if ( v6 )
      {
        *(_QWORD *)(v6 + 320) = 0LL;
        *(_QWORD *)(v6 + 312) = 0LL;
      }
    }
  }
  else if ( (v2 & 0x800000) != 0 )
  {
    v12 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( v12 )
      --*(_DWORD *)(v12 + 104);
    *(_DWORD *)&v1->ActiveCount &= ~0x800000u;
  }
  if ( v1->SystemResourcesList.Flink )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v1->SystemResourcesList.Flink);
    this = (struct _ERESOURCE *)v1->SystemResourcesList.Flink;
    if ( v1->SystemResourcesList.Flink )
    {
      ExReleaseResourceAndLeaveCriticalRegion(this);
      PsLeavePriorityRegion();
    }
  }
  v7 = *(_DWORD *)&v1->ActiveCount;
  if ( (v7 & 8) != 0 )
    *(_DWORD *)&v1->ActiveCount = v7 & 0xFFFFFFF7;
  Blink = v1->SystemResourcesList.Blink;
  if ( Blink )
  {
    v9 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    if ( *(_DWORD *)(v9 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v9, (unsigned int)&LockRelease, v10, (_DWORD)Blink, (__int64)L"hsemDMC");
    v11 = (struct _ERESOURCE *)v1->SystemResourcesList.Blink;
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion();
    }
  }
  if ( qword_1C02D58B0 && (int)qword_1C02D58B0() >= 0 )
  {
    if ( qword_1C02D58B8 )
      qword_1C02D58B8(&v1->NumberOfSharedWaiters, &v1->ActiveEntries, &v1->OwnerEntry.0, &v1->26 + 1);
  }
}
