void __fastcall SepDeReferenceLogonSession(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rsi
  __int64 i; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  volatile signed __int64 *v11; // rsi
  void *v12; // rcx

  v4 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v5 = (__int64 *)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_QWORD *)(i + 160) == a2 && *a1 == *(_DWORD *)(i + 8) && a1[1] == *(_DWORD *)(i + 12) )
      break;
    v5 = (__int64 *)i;
  }
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(i + 24));
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = *(_QWORD *)i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (*(_DWORD *)(i + 32) & 4) != 0 && (*(_DWORD *)(i + 16) || *(_DWORD *)(i + 20)) )
      SepDeReferenceLogonSession(i + 16, *(_QWORD *)(i + 160));
    v10 = *(void **)(i + 48);
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      *(_QWORD *)(i + 48) = 0LL;
    }
    v11 = *(volatile signed __int64 **)(i + 40);
    if ( v11 )
    {
      *(_QWORD *)(i + 40) = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObDereferenceDeviceMap(v11, 1u);
    }
    if ( (*(_DWORD *)(i + 32) & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v12 = *(void **)(i + 64);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock((struct _EX_RUNDOWN_REF *)(i + 128));
    SepInformLsaOfDeletedLogon(a1, *(_QWORD *)(i + 160), i);
    SepDeleteSessionLowboxEntries();
  }
}
