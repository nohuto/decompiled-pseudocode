/*
 * XREFs of ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0177820 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01DD134 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE888 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0003074 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E594 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C001B4DC (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage @ 0x1C0026958 (Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetPowerState(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGADAPTER *a2,
        unsigned __int8 a3)
{
  DMMVIDEOPRESENTTARGET *v6; // rax
  unsigned int v7; // edx
  char v8; // al
  DMMVIDEOPRESENTTARGET *v9; // rcx
  char *v10; // rsi
  char *i; // rbx

  if ( !(unsigned int)Feature_Servicing_dGPUNotTurningOffAutomatically__private_IsEnabledDeviceUsage()
    || !*((_BYTE *)this + 420) )
  {
    v6 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 55);
    if ( !a3 )
    {
      while ( v6 != (DMMVIDEOPRESENTTARGET *)((char *)this + 440) )
      {
        if ( *((_BYTE *)v6 - 52) )
        {
          a3 = 1;
          break;
        }
        v6 = *(DMMVIDEOPRESENTTARGET **)v6;
      }
    }
    v7 = *((_DWORD *)this + 100);
    if ( v7 != -1 )
    {
      v8 = *((_BYTE *)this + 404);
      if ( a3 )
      {
        if ( !v8 )
          DXGADAPTER::SetPowerComponentActiveCBInternal(a2, v7, 1u, 0);
      }
      else if ( v8 )
      {
        DXGADAPTER::SetPowerComponentIdleCBInternal(a2, v7, 0);
      }
    }
    v9 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
    *((_BYTE *)this + 404) = a3;
    if ( v9 )
      DMMVIDEOPRESENTTARGET::SetPowerState(v9, a2, a3);
    v10 = (char *)this + 480;
    for ( i = (char *)*((_QWORD *)this + 60); i != v10; i = *(char **)i )
      DMMVIDEOPRESENTTARGET::SetPowerState((DMMVIDEOPRESENTTARGET *)(i - 496), a2, a3);
  }
}
