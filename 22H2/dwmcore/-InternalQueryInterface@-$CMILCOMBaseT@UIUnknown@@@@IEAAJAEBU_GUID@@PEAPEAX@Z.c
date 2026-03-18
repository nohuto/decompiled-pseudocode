/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051778
 * Callers:
 *     ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F600 (-QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x1800500C0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180051800 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x180053600 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6CB4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6D74 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F9398 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x18010AC54 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180133C10 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x1801BD8D4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AF440 (-QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseT<IUnknown>::InternalQueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rax

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = a1;
      v5 = 0;
    }
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 8));
  }
  return (unsigned int)v5;
}
