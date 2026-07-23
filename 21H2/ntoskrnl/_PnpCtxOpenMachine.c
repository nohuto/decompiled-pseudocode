/*
 * XREFs of _PnpCtxOpenMachine @ 0x1407A475C
 * Callers:
 *     PiPnpRtlInit @ 0x1407A3550 (PiPnpRtlInit.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A6BF8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpCtxCreateNode @ 0x1407A49A8 (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x1409747D8 (_PnpCtxDestroyNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpCtxOpenMachine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  NTSTATUS Node; // edi
  void **v12; // rax
  void **v13; // rdx
  struct _ERESOURCE *v14; // rax
  struct _ERESOURCE *v15; // rbp

  *a7 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x210uLL, 0x52504E50u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x210uLL);
    *(_DWORD *)v8 = 167772160;
    v8[2] = v8 + 1;
    v9 = v8 + 3;
    v8[1] = v8 + 1;
    v10 = 4LL;
    do
    {
      v9[1] = v9;
      *v9 = v9;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    Node = PnpCtxCreateNode(v8, L"SYSTEM", 1LL);
    if ( Node >= 0 )
    {
      v12 = (void **)v8[2];
      if ( *v12 != v8 + 1
        || (MEMORY[8] = v8[2], MEMORY[0] = v8 + 1, *v12 = 0LL, v8[2] = 0LL, v13 = (void **)v8[6], *v13 != v8 + 5) )
      {
        __fastfail(3u);
      }
      MEMORY[0x18] = v8[6];
      MEMORY[0x10] = v8 + 5;
      *v13 = (void *)16;
      v8[6] = 16LL;
      v8[11] = 0LL;
      v8[28] = MEMORY[0x38];
      v14 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x52504E50u);
      v15 = v14;
      if ( v14 )
      {
        Node = ExInitializeResourceLite(v14);
        if ( Node >= 0 )
        {
          v8[30] = v15;
          v15 = 0LL;
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        if ( Node >= 0 )
        {
          v8[29] = 0LL;
          memset(v8 + 31, 0, 0x90uLL);
          v8[38] = PnpDispatchDevice;
          v8[39] = PnpDispatchInstallerClass;
          v8[40] = PnpDispatchDeviceInterface;
          v8[41] = PnpDispatchInterfaceClass;
          v8[42] = PnpDispatchDeviceContainer;
          v8[43] = PnpDispatchDevicePanel;
          memset(v8 + 49, 0, 0x60uLL);
          v8[61] = 0LL;
          v8[62] = 0LL;
          v8[63] = 0LL;
          v8[64] = 0LL;
          v8[65] = 0LL;
          *a7 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        Node = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Node;
}
