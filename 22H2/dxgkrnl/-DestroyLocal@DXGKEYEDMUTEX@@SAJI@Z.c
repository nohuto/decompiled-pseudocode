/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0290DE0
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C012A160 (DxgkOpenResourceFromNtHandle.c)
 *     ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240AE0 (-VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyKeyedMutex @ 0x1C0293A30 (DxgkDestroyKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C02993CC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0290BEC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C02926D4 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct _KTHREAD *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  DXGKEYEDMUTEX *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v8 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current);
  v13 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *((_DWORD *)v8 + 64)
    || (v14 = v8[30],
        v12 = (unsigned int)v13,
        v11 = ((unsigned int)v4 >> 25) & 0x60,
        v10 = *((unsigned int *)v14 + 4 * v13 + 2),
        (((unsigned int)v4 >> 25) & 0x60) != (*((_BYTE *)v14 + 16 * v13 + 8) & 0x60))
    || (v11 = 0x2000LL, (v10 & 0x2000) != 0)
    || (v10 & 0x1F) == 0 )
  {
LABEL_9:
    v16 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
    return 3221225485LL;
  }
  v12 = 2LL * (unsigned int)v13;
  v10 &= 0x1Fu;
  if ( (_BYTE)v10 != 9 )
  {
    v15 = WdLogNewEntry5_WdError(0x2000LL, v10);
    *(_QWORD *)(v15 + 24) = 316LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_9;
  }
  v18 = (DXGKEYEDMUTEX *)*((_QWORD *)v14 + 2 * (unsigned int)v13);
  if ( !v18 )
    goto LABEL_9;
  *((_DWORD *)v14 + 4 * (((unsigned __int64)(unsigned int)v4 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v18, v4, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v4, v19, v20, v21) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v24 + 24) = 3748LL;
    WdLogEvent5_WdAssertion(v24);
  }
  return 0LL;
}
