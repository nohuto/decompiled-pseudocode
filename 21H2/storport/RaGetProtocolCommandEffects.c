/*
 * XREFs of RaGetProtocolCommandEffects @ 0x1C002AFE8
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C002AD8C (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0047BB0 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0003014 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     memmove @ 0x1C0020280 (memmove.c)
 *     memset @ 0x1C0020540 (memset.c)
 */

__int64 __fastcall RaGetProtocolCommandEffects(__int64 a1, IRP *a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // r14
  _IRP *MasterIrp; // rdi
  int v9; // ebx
  char *v10; // rsi
  __int64 v11; // rbp
  bool v12; // zf
  int Information; // edx
  char *Pool; // rax
  int v15; // eax
  void *v16; // rcx
  char *v17; // r15
  PVOID PoolWithTag; // rax
  void *v19; // r14
  __int64 v20; // rdx
  int UserEvent; // eax
  __int64 v22; // rcx
  int v23; // ecx

  v4 = *(_QWORD *)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v9 = 0;
  v10 = 0LL;
  if ( *(_DWORD *)v4 == 1 )
    v11 = *(_QWORD *)(v4 + 24);
  else
    v11 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  *a3 = 0;
  v12 = LODWORD(MasterIrp->MdlAddress) == 3;
  *a4 = 0;
  if ( !v12 )
    return (unsigned int)-1056964602;
  Information = MasterIrp->IoStatus.Information;
  if ( (Information != 1 || (unsigned __int8)LODWORD(MasterIrp->UserEvent) >= 0xC0u)
    && (Information != 2 || (unsigned __int8)LODWORD(MasterIrp->UserEvent) >= 0x80u) )
  {
    if ( (*(_BYTE *)(v11 + 109) & 0x10) == 0 )
      goto LABEL_26;
    Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x1050uLL, 0x72536152u, a1);
    v10 = Pool;
    if ( !Pool )
    {
      MasterIrp->Flags = 7;
      return (unsigned int)-1073741670;
    }
    memset(Pool, 0, 0x1050uLL);
    *(_DWORD *)v10 = 28;
    *(_QWORD *)(v10 + 4) = 0x4C4F434F544F5250LL;
    *((_DWORD *)v10 + 4) = 2954240;
    if ( v4 )
      v15 = *(_DWORD *)(v4 + 1264);
    else
      v15 = *(_DWORD *)(v11 + 4268);
    *((_DWORD *)v10 + 3) = v15;
    *((_DWORD *)v10 + 6) = 4148;
    *((_DWORD *)v10 + 7) = 48;
    *((_DWORD *)v10 + 8) = 48;
    *((_DWORD *)v10 + 9) = 3;
    *((_DWORD *)v10 + 10) = 2;
    *(_QWORD *)(v10 + 44) = 5LL;
    *((_DWORD *)v10 + 13) = 44;
    *((_DWORD *)v10 + 14) = 4096;
    v9 = RaidAdapterSendSrbIoControlSynchronously(v11, a2, (__int64)v10, 0x1050u, 0LL, 0, 64);
    if ( v9 >= 0 )
    {
      v16 = *(void **)(v11 + 5512);
      v17 = &v10[*((unsigned int *)v10 + 13) + 36];
      if ( !v16 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x45436152u);
        v19 = PoolWithTag;
        if ( !PoolWithTag )
        {
          MasterIrp->Flags = 7;
          v9 = -1073741670;
          goto LABEL_39;
        }
        memmove(PoolWithTag, v17, 0x1000uLL);
        if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 5512), (signed __int64)v19, 0LL) )
          goto LABEL_25;
        ExFreePoolWithTag(v19, 0x45436152u);
        v16 = *(void **)(v11 + 5512);
      }
      memmove(v16, v17, 0x1000uLL);
    }
LABEL_25:
    *(_BYTE *)(v11 + 109) &= ~0x10u;
LABEL_26:
    v20 = *(_QWORD *)(v11 + 5512);
    if ( v20 )
    {
      UserEvent = (int)MasterIrp->UserEvent;
      v22 = (unsigned __int8)UserEvent;
      if ( LODWORD(MasterIrp->IoStatus.Information) != 1 )
        v22 = (unsigned __int8)UserEvent + 256LL;
      v23 = *(_DWORD *)(v20 + 4 * v22);
      if ( (v23 & 1) != 0 )
      {
        if ( (v23 & 0x18) != 0 || (v23 & 0x70000) == 0x20000 )
        {
          *a3 = 1;
        }
        else if ( (v23 & 4) != 0 || (v23 & 0x70000) == 0x10000 )
        {
          *a4 = 1;
        }
        goto LABEL_39;
      }
    }
    else if ( (unsigned __int8)LODWORD(MasterIrp->UserEvent) == 0x80 )
    {
      v9 = 0;
      goto LABEL_39;
    }
    MasterIrp->Flags = 3;
    v9 = -1073741808;
LABEL_39:
    if ( v10 )
      ExFreePoolWithTag(v10, 0x72536152u);
  }
  return (unsigned int)v9;
}
