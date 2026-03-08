/*
 * XREFs of _GetPointerDeviceRects @ 0x1C00E4B94
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C00E4A70 (NtUserGetPointerDeviceRects.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D2900 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C01E8380 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01E89DC (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E9458 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     MiPGetPhysicalRect @ 0x1C00E4C44 (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C00E4C8C (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0145242 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0146090 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0;
  v12 = 0LL;
  v6 = 1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v12, &v11) )
  {
    if ( v11 )
    {
      if ( a3 )
        *a3 = *(_OWORD *)GetScreenRect(v13);
      if ( a2 )
        *a2 = *(_OWORD *)MiPGetPhysicalRect(v13);
    }
    else
    {
      EnsurePointerDeviceHasMonitor(v12);
      v9 = v12;
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v12 + 176);
        v8 = gpDispInfo;
        if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v9 + 16) + 1336LL) && *(_DWORD *)(v9 + 24) != 7 )
        {
          VirtualizeMultiMonDigitizerSize(a2);
          v9 = v12;
        }
      }
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 1336LL) )
        {
          *a3 = *(_OWORD *)(v9 + 160);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8);
          PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
        }
        else
        {
          *a3 = *(_OWORD *)GetScreenRect(v13);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14);
  return v6;
}
