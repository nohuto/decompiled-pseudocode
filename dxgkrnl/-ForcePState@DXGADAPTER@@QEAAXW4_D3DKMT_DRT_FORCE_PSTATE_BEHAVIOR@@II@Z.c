/*
 * XREFs of ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C02B2954
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0054670 (-ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C00546F8 (-ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 *     ?ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0054788 (-ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::ForcePState(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // edx

  v4 = *(_QWORD *)(520LL * a3 + *(_QWORD *)(a1 + 3024) + 512);
  if ( v4 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateFloor((KSPIN_LOCK *)(v4 + 136), a4);
      }
      else
      {
        DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateCeiling((KSPIN_LOCK *)(v4 + 136), a4);
      }
    }
    else
    {
      DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePState((KSPIN_LOCK *)(v4 + 136), a4);
    }
  }
}
