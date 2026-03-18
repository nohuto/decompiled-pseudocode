/*
 * XREFs of _GetPointerDeviceRects @ 0x1C00AC894
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C00AC770 (NtUserGetPointerDeviceRects.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D18B0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01E72D0 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E78EC (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E8368 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MiPGetPhysicalRect @ 0x1C00AC944 (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C00AC98C (GetScreenRect.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0151F42 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0152DC0 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v10; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v14[16]; // [rsp+30h] [rbp-10h] BYREF
  char v15; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0;
  v13 = 0LL;
  v6 = 1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v13, &v12) )
  {
    if ( v12 )
    {
      if ( a3 )
        *a3 = *(_OWORD *)GetScreenRect(v14);
      if ( a2 )
        *a2 = *(_OWORD *)MiPGetPhysicalRect(v14);
    }
    else
    {
      EnsurePointerDeviceHasMonitor(v13);
      v7 = v13;
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v13 + 176);
        v10 = gpDispInfo;
        if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v7 + 16) + 1336LL) && *(_DWORD *)(v7 + 24) != 7 )
        {
          VirtualizeMultiMonDigitizerSize(a2);
          v7 = v13;
        }
      }
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v7 + 16) + 1336LL) )
        {
          *a3 = *(_OWORD *)(v7 + 160);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10);
          PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
        }
        else
        {
          *a3 = *(_OWORD *)GetScreenRect(v14);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15, v7, v8);
  return v6;
}
