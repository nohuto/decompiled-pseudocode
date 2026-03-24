/*
 * XREFs of _GetPointerDeviceRects @ 0x1C0122BAC
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C0122A90 (NtUserGetPointerDeviceRects.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F9CA0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1C0207348 (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C0207878 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C020833C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     MiPGetPhysicalRect @ 0x1C0122C5C (MiPGetPhysicalRect.c)
 *     GetScreenRect @ 0x1C0122CA4 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E6264 (VirtualizeMultiMonDigitizerSize.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C01EE6B0 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0;
  v11 = 0LL;
  v6 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v11, &v14) )
  {
    if ( v14 )
    {
      if ( a3 )
        *a3 = *(_OWORD *)GetScreenRect(v13);
      if ( a2 )
        *a2 = *(_OWORD *)MiPGetPhysicalRect(v13);
    }
    else
    {
      EnsurePointerDeviceHasMonitor(v11);
      v9 = v11;
      if ( a2 )
      {
        *a2 = *(_OWORD *)(v11 + 176);
        v8 = gpDispInfo;
        if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(*(_QWORD *)(v9 + 16) + 1344LL) && *(_DWORD *)(v9 + 24) != 7 )
        {
          VirtualizeMultiMonDigitizerSize(a2);
          v9 = v11;
        }
      }
      if ( a3 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 1344LL) )
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  return v6;
}
