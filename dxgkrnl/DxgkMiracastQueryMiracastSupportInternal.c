/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C02CEBE0 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C039A4FC (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C001D678 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiMiracastGetForcedMode @ 0x1C01F6C9C (DpiMiracastGetForcedMode.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01F7F00 (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C01F7F50 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C02196D4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // di
  int ForcedMode; // eax
  int v4; // ebp
  struct _COMMON_PNP_CONTEXT *RenderAdapterForSession; // rax
  struct _COMMON_PNP_CONTEXT *v6; // r13
  int MiracastSupportForFDO; // ebx
  __int64 v8; // rbx
  PVOID v10; // rbp
  PVOID Tag[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_16;
  if ( ForcedMode == 1 )
    goto LABEL_14;
  RenderAdapterForSession = (struct _COMMON_PNP_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
  v6 = RenderAdapterForSession;
  if ( !RenderAdapterForSession )
    goto LABEL_14;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_11;
  v8 = *((_QWORD *)v6 + 334);
  if ( v4 != 2 )
  {
LABEL_14:
    Tag[0] = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(Tag) >= 0 )
    {
      v10 = Tag[0];
      if ( Tag[0] )
      {
        DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag[0]);
        if ( *((_BYTE *)v10 + 484) )
          DpiEnableD3Requests(*((_QWORD *)v10 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v10 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v10 + 2, v10, 0x20u);
      }
    }
    xmmword_1C013B968 = 0LL;
    dword_1C013B978 = 0;
LABEL_16:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_11;
  }
  DWORD1(xmmword_1C013B968) = dword_1C013B8C4;
  LOBYTE(xmmword_1C013B968) = 0;
  BYTE8(xmmword_1C013B968) = 0;
  *(_QWORD *)((char *)&xmmword_1C013B968 + 12) = v8;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C013B968;
    *(_DWORD *)(a1 + 16) = dword_1C013B978;
  }
  MiracastSupportForFDO = 0;
LABEL_11:
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
