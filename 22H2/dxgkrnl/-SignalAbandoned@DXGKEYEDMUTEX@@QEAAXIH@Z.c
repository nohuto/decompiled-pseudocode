/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0292650
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00490C0 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C02926D4 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  struct DXGKEYEDMUTEX *v10; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = this;
  v4 = (unsigned int)a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  v10 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v11, v4, Current, &v10);
  if ( v10 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v10, v4, 0);
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(0LL, v6, v7);
    *(_QWORD *)(v8 + 24) = v4;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v8);
  }
  if ( v11 )
    DXGKEYEDMUTEX::ReleaseReference(v11, v9);
}
