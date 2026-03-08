/*
 * XREFs of _PnpCtxOpenMachine @ 0x140851D74
 * Callers:
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14095B6D8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     _PnpCtxCreateNode @ 0x140851F88 (_PnpCtxCreateNode.c)
 *     _PnpCtxDestroyNode @ 0x140A5DBA8 (_PnpCtxDestroyNode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  _QWORD *v7; // r15
  __int64 Pool2; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  _QWORD *v14; // rax
  NTSTATUS v15; // edi
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  struct _ERESOURCE *v20; // rax
  struct _ERESOURCE *v21; // rbp
  _QWORD *v23; // [rsp+80h] [rbp+18h] BYREF

  v7 = a7;
  v23 = 0LL;
  *a7 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 528LL, 1380994640LL);
  v11 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v12 = (_QWORD *)(Pool2 + 8);
    *(_DWORD *)Pool2 = 167772160;
    *(_BYTE *)(Pool2 + 4) = 0;
    v13 = 4LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    v14 = (_QWORD *)(Pool2 + 24);
    *v12 = v12;
    do
    {
      v14[1] = v14;
      *v14 = v14;
      v14 += 2;
      --v13;
    }
    while ( v13 );
    v15 = PnpCtxCreateNode(v11, L"SYSTEM", 1LL, 0LL, a2, -1LL, a4, 0LL, &v23);
    if ( v15 < 0 )
    {
      v17 = v23;
    }
    else
    {
      v16 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v16 != v12
        || (v17 = v23,
            v23[1] = v16,
            v18 = v17 + 2,
            *v17 = v12,
            *v16 = v17,
            v12[1] = v17,
            v19 = (_QWORD *)v11[6],
            (_QWORD *)*v19 != v11 + 5) )
      {
        __fastfail(3u);
      }
      v17[3] = v19;
      *v18 = v11 + 5;
      *v19 = v18;
      v11[6] = v18;
      v11[11] = v17;
      v11[28] = v17[7];
      v20 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1380994640LL);
      v21 = v20;
      if ( v20 )
      {
        v15 = ExInitializeResourceLite(v20);
        if ( v15 < 0 )
        {
          ExFreePoolWithTag(v21, 0);
        }
        else
        {
          v11[29] = 0LL;
          v11[61] = 0LL;
          v11[62] = 0LL;
          v11[63] = 0LL;
          v11[64] = 0LL;
          v11[65] = 0LL;
          v11[30] = v21;
          v11[38] = PnpDispatchDevice;
          v11[39] = PnpDispatchInstallerClass;
          v11[40] = PnpDispatchDeviceInterface;
          v11[41] = PnpDispatchInterfaceClass;
          v11[42] = PnpDispatchDeviceContainer;
          v11[43] = PnpDispatchDevicePanel;
          *v7 = v11;
          v11 = 0LL;
          v17 = 0LL;
        }
      }
      else
      {
        v15 = -1073741801;
      }
    }
    if ( v17 )
      PnpCtxDestroyNode(v17);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
