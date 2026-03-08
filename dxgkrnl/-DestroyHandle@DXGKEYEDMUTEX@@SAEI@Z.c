/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C034ADBC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C0323F00 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C03261D4 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C034AFB8 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C034DA20 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C034DDA0 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C034E340 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C034E670 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C018C3C0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1C034B258 (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C034B480 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0383844 (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1)
{
  unsigned int v1; // esi
  struct DXGPROCESS *Current; // rbx
  _QWORD *v3; // r8
  unsigned int v4; // eax
  DXGKEYEDMUTEX *v5; // rdi
  unsigned int HostHandle; // ebp
  unsigned int v7; // ebx
  struct DXGGLOBAL *Global; // rax
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 3923LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3923LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
  v3 = (_QWORD *)((char *)Current + 280);
  v4 = (v1 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)Current + 74)
    && ((v1 >> 25) & 0x60) == (*(_BYTE *)(*v3 + 16LL * v4 + 8) & 0x60)
    && (*(_DWORD *)(*v3 + 16LL * v4 + 8) & 0x1F) == 9
    && (v5 = *(DXGKEYEDMUTEX **)(*v3 + 16LL * v4)) != 0LL )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), v1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    if ( *((_BYTE *)v5 + 176) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v5, v1);
      if ( HostHandle )
      {
        v7 = *((_DWORD *)Current + 126);
        Global = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 214), v7, HostHandle);
        DXGKEYEDMUTEX::FreeHostHandle(v5, v1);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v5);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
