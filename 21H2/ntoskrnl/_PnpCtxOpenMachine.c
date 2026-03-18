/*
 * XREFs of _PnpCtxOpenMachine @ 0x140827888
 * Callers:
 *     PiPnpRtlInit @ 0x140825E70 (PiPnpRtlInit.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14094C428 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     _PnpCtxCreateNode @ 0x140827AA8 (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x140A22A30 (_PnpCtxDestroyNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax
  NTSTATUS Node; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  struct _ERESOURCE *v15; // rax
  struct _ERESOURCE *v16; // r14

  *a7 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 528LL, 1380994640LL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v9 = (_QWORD *)(Pool2 + 8);
    *(_DWORD *)Pool2 = 167772160;
    *(_BYTE *)(Pool2 + 4) = 0;
    v10 = 4LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    v11 = (_QWORD *)(Pool2 + 24);
    *v9 = v9;
    do
    {
      v11[1] = v11;
      *v11 = v11;
      v11 += 2;
      --v10;
    }
    while ( v10 );
    Node = PnpCtxCreateNode(v8, L"SYSTEM", 1LL);
    if ( Node >= 0 )
    {
      v13 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v13 != v9
        || (MEMORY[8] = v9[1], MEMORY[0] = v9, *v13 = 0LL, v9[1] = 0LL, v14 = (_QWORD *)v8[6], (_QWORD *)*v14 != v8 + 5) )
      {
        __fastfail(3u);
      }
      MEMORY[0x18] = v8[6];
      MEMORY[0x10] = v8 + 5;
      *v14 = 16LL;
      v8[6] = 16LL;
      v8[11] = 0LL;
      v8[28] = MEMORY[0x38];
      v15 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1380994640LL);
      v16 = v15;
      if ( v15 )
      {
        Node = ExInitializeResourceLite(v15);
        if ( Node < 0 )
        {
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          v8[30] = v16;
          v8[29] = 0LL;
          v8[61] = 0LL;
          v8[62] = 0LL;
          v8[63] = 0LL;
          v8[64] = 0LL;
          v8[65] = 0LL;
          v8[38] = PnpDispatchDevice;
          v8[39] = PnpDispatchInstallerClass;
          v8[40] = PnpDispatchDeviceInterface;
          v8[41] = PnpDispatchInterfaceClass;
          v8[42] = PnpDispatchDeviceContainer;
          v8[43] = PnpDispatchDevicePanel;
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
