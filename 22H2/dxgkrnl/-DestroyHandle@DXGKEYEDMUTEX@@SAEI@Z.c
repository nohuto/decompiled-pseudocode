/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0290BEC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0123534 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C0279880 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0290DE0 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C0293340 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C0293680 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C0293B40 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C0293E20 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C02993CC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040F30 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0114D10 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024DA2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1C0290FDC (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C0291280 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rax
  DXGKEYEDMUTEX *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int HostHandle; // ebp
  int v15; // ebx
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD **v17; // rcx
  _BYTE v19[24]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  int v21; // [rsp+50h] [rbp-28h]
  int v22; // [rsp+54h] [rbp-24h]
  int v23; // [rsp+58h] [rbp-20h]
  unsigned int v24; // [rsp+60h] [rbp-18h]

  v4 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v8 + 24) = 3910LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v19,
    (struct _KTHREAD **)Current);
  v9 = (_QWORD *)((char *)Current + 240);
  v10 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)Current + 64)
    && ((v4 >> 25) & 0x60) == (*(_BYTE *)(*v9 + 16 * v10 + 8) & 0x60)
    && (*(_DWORD *)(*v9 + 16 * v10 + 8) & 0x1F) == 9
    && (v11 = *(DXGKEYEDMUTEX **)(*v9 + 16LL * (unsigned int)v10)) != 0LL )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 240), v4);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    if ( *((_BYTE *)v11 + 168) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v11, v4);
      if ( HostHandle )
      {
        v15 = *((_DWORD *)Current + 106);
        Global = DXGGLOBAL::GetGlobal(v13, v12);
        v20 = 0LL;
        v21 = v15;
        v17 = (struct _KTHREAD **)*((_QWORD *)Global + 197);
        v22 = 1;
        v23 = 1013;
        v24 = HostHandle;
        DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v17, (struct DXGKVMB_COMMAND_BASE *)&v20, 32LL, 0LL, 0LL);
        DXGKEYEDMUTEX::FreeHostHandle(v11, v4);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v11, v12);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
}
