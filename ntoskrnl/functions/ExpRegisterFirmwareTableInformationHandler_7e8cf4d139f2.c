__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rax
  __int64 Pool2; // rax
  void *v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // rdx
  __int64 **v14; // rcx

  v3 = 0;
  if ( a3 )
    return (unsigned int)-1073741727;
  if ( !a1 || a2 < 0x18 )
    return (unsigned int)-1073741820;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&ExpFirmwareTableResource, 1u);
  v6 = (__int64 *)(ExpFirmwareTableProviderListHead - 24);
  if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
  {
    while ( *(_DWORD *)v6 != *(_DWORD *)a1 )
    {
      v7 = (__int64 *)v6[3];
      v6 = v7 - 3;
      if ( &ExpFirmwareTableProviderListHead == v7 )
        goto LABEL_7;
    }
    if ( *(_BYTE *)(a1 + 4) )
    {
      v3 = 0x40000000;
      goto LABEL_11;
    }
    if ( v6[2] == *(_QWORD *)(a1 + 16) )
    {
      v13 = v6[3];
      if ( *(__int64 **)(v13 + 8) == v6 + 3 )
      {
        v14 = (__int64 **)v6[4];
        if ( *v14 == v6 + 3 )
        {
          *v14 = (__int64 *)v13;
          *(_QWORD *)(v13 + 8) = v14;
          ObfDereferenceObject((PVOID)v6[2]);
          ExFreePoolWithTag(v6, 0x54465241u);
          goto LABEL_11;
        }
      }
LABEL_21:
      __fastfail(3u);
    }
LABEL_22:
    v3 = -1073741811;
    goto LABEL_11;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 4) )
    goto LABEL_22;
  Pool2 = ExAllocatePool2(256LL, 40LL, 1413894721LL);
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = *(_DWORD *)a1;
    *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 8);
    v9 = *(void **)(a1 + 16);
    v10 = (_QWORD *)(Pool2 + 24);
    *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 16) = v9;
    ObfReferenceObject(v9);
    v11 = (_QWORD *)qword_140C31798;
    if ( *(__int64 **)qword_140C31798 != &ExpFirmwareTableProviderListHead )
      goto LABEL_21;
    *v10 = &ExpFirmwareTableProviderListHead;
    v10[1] = v11;
    *v11 = v10;
    qword_140C31798 = (__int64)v10;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_11:
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
