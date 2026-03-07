__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  void *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  v2 = a1;
  v18 = 1LL;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  v19 = v2;
  v4 = PipQueryBindingResolution(&v18);
  v6 = (void *)v4;
  if ( !v4 )
    goto LABEL_2;
  v15 = *(_QWORD *)(v4 + 48);
  if ( v15 )
  {
    if ( v15 == a2 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    PipDeleteBindingId(v6, v2);
LABEL_2:
    if ( a2 && (v7 = *(_QWORD *)(a2 + 312), *(_QWORD *)(v7 + 80)) )
    {
      v11 = PipAddBindingId(*(_QWORD *)(v7 + 80), v2, v6);
      if ( v11 >= 0 )
        goto LABEL_8;
    }
    else
    {
      LODWORD(v18) = 0;
      v19 = a2;
      v8 = PipCreateDependencyNode(&v18, v5, v6);
      v10 = v8;
      if ( v8 )
      {
        v11 = PipAddBindingId(v8, v2, v9);
        if ( v11 >= 0 )
        {
          PipDereferenceDependencyNode(v10);
          goto LABEL_7;
        }
        PipUnlinkDeviceObjectAndDependencyNode(a2, v10);
        PipDereferenceDependencyNode(v10);
      }
      else
      {
        v11 = -1073741670;
      }
    }
LABEL_12:
    PnpReleaseDependencyRelationsLock();
    return (unsigned int)v11;
  }
  v11 = 0;
  if ( a2 )
  {
    v16 = *(_QWORD *)(a2 + 312);
    if ( *(_QWORD *)(v16 + 80) )
    {
      PipMergeDependencyNodes(*(PVOID *)(v16 + 80), v6);
      goto LABEL_8;
    }
  }
  PipLinkDeviceObjectAndDependencyNode(a2, v6);
LABEL_7:
  if ( a2 )
  {
LABEL_8:
    v12 = *(_QWORD *)(a2 + 312);
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 && (*(_DWORD *)(v13 + 396) & 0x20000) == 0 && (unsigned __int8)PipIsProviderStarted(*(_QWORD *)(v12 + 40)) )
      PipAttemptDependentsStart(v17);
  }
  PipAddtoRebuildPowerRelationsQueue(a2);
  PipAddDependentsToRebuildPowerRelationsQueue(a2);
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  return (unsigned int)v11;
}
