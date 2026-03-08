/*
 * XREFs of ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B0CF0
 * Callers:
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C02BD908 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkGetIndirectDisplayRenderAdapterByHandle @ 0x1C02CC9C0 (DxgkGetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C02D1354 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C02EFAEC (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXGADAPTER_REFERENCE::AssignByHandle(struct DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rsi
  DXGADAPTER *v4; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char v11; // di
  DXGADAPTER *v12; // [rsp+50h] [rbp-18h] BYREF

  v3 = a2;
  v4 = *this;
  if ( v4 )
  {
    DXGADAPTER::ReleaseReference(v4);
    *this = 0LL;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4);
  if ( Current )
  {
    v11 = 1;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v12, v3, Current, this, 1);
    if ( *this )
    {
      _InterlockedAdd64((volatile signed __int64 *)*this + 3, 1uLL);
      this[1] = (struct DXGADAPTER *)-1LL;
    }
    else
    {
      WdLogSingleEntry1(3LL, v3);
      v11 = 0;
    }
    if ( v12 )
      DXGADAPTER::ReleaseReference(v12);
    return v11;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry1(2LL, CurrentProcess);
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current process 0x%I64x does not have DXGPROCESS.",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
