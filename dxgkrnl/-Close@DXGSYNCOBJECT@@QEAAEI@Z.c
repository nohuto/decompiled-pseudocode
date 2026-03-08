/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C01A6AC4
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000A070 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C034B2D8 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0383B88 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, unsigned int a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbp
  unsigned __int8 v8; // r8
  struct DXGPROCESS *v9; // rax
  unsigned int HostHandle; // r14d
  unsigned int v12; // ebx
  struct DXGGLOBAL *v13; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 75)) )
  {
    WdLogSingleEntry1(1LL, 2482LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsSyncObjectLockExclusiveOwner()",
      2482LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( (_DWORD)v2 )
  {
    if ( (*((_DWORD *)this + 71) & 2) != 0 )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v8);
      if ( HostHandle )
      {
        v12 = *((_DWORD *)Current + 126);
        v13 = DXGGLOBAL::GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v13 + 214), v12, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPROCESS::FreeHandleSafe(Current, v2);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 2508LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 2508LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = DXGPROCESS::GetCurrent(v6);
  WdLogSingleEntry3(4LL, this, v2, v9);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
