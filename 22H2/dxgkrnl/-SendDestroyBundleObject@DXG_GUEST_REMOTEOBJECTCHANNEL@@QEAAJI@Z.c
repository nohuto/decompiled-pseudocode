/*
 * XREFs of ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1C028C67C
 * Callers:
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C02B7E70 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+38h] [rbp-28h] BYREF
  int v22; // [rsp+3Ch] [rbp-24h]
  int v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+44h] [rbp-1Ch]
  _DWORD v25[4]; // [rsp+48h] [rbp-18h] BYREF

  v4 = a2;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4) )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return (unsigned int)v10;
  }
  if ( !v4 )
  {
    v11 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdWarning(v11);
    return (unsigned int)v10;
  }
  v12 = *((_QWORD *)this + 1);
  v24 = 0;
  v25[2] = 3;
  v25[0] = 1869901170;
  v21 = 1869901170;
  v25[1] = -1073741823;
  v22 = -1073741823;
  v23 = 4;
  v20 = 16;
  v25[3] = v4;
  v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v12 + 32LL))(
          v12,
          v25,
          16LL,
          &v21,
          &v20);
  v10 = v13;
  if ( v13 < 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v11 + 24) = v10;
    goto LABEL_7;
  }
  if ( v20 == 16 )
  {
    if ( v23 == 4 )
    {
      LODWORD(v10) = v22;
      return (unsigned int)v10;
    }
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    v18 = v23;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    v18 = v20;
  }
  *(_QWORD *)(v17 + 24) = v18;
  *(_QWORD *)(v17 + 32) = -1073741823LL;
  WdLogEvent5_WdWarning(v17);
  LODWORD(v10) = -1073741823;
  return (unsigned int)v10;
}
