/*
 * XREFs of EngQueryW32kCddInterface @ 0x1C00BCF70
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0022420 (UserIsWddmConnectedSession.c)
 *     ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C00BD170 (-GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00D3D44 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 */

__int64 __fastcall EngQueryW32kCddInterface(void *a1, _QWORD *a2, __int64 a3, _QWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v9; // ebx
  struct tagGRAPHICS_DEVICE *GraphicsDeviceFromDevObjHandle; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // r15

  if ( *(_DWORD *)(a3 + 4) != 4 )
    return 3221225485LL;
  if ( *(_DWORD *)a3 != 160 )
    return 3221225485LL;
  v9 = 0;
  GraphicsDeviceFromDevObjHandle = GetGraphicsDeviceFromDevObjHandle(a1);
  if ( !GraphicsDeviceFromDevObjHandle )
    return 3221225485LL;
  *(_QWORD *)(a3 + 8) = W32kCddGetWin32kCommand;
  *(_QWORD *)(a3 + 16) = W32kCddClipRegionApiExt;
  *(_QWORD *)(a3 + 24) = W32kCddIncPresentUniq;
  *(_QWORD *)(a3 + 32) = W32kCddInitPdev;
  *(_QWORD *)(a3 + 40) = W32kCddIsNullBrushApiExt;
  *(_QWORD *)(a3 + 48) = W32kCddDisableGdiHwAccelerationApiExt;
  *(_QWORD *)(a3 + 56) = W32kCddLineToApiExt;
  *(_QWORD *)(a3 + 64) = W32kCddStrokePathApiExt;
  *(_QWORD *)(a3 + 72) = W32kGenerateMoveDataApiExt;
  *(_QWORD *)(a3 + 80) = W32kAcquireDynamicModeChangeLockShared;
  *(_QWORD *)(a3 + 88) = W32kReleaseDynamicModeChangeLockShared;
  *(_QWORD *)(a3 + 96) = DxgkCddEngIsRemoteConnection;
  *(_QWORD *)(a3 + 104) = W32kCddSetDeviceBitmapAdapterLuid;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 29);
    goto LABEL_6;
  }
  v15 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  if ( !(unsigned int)IsCddCddRemoteSessionFilteringAllowed()
    || (*((_DWORD *)GraphicsDeviceFromDevObjHandle + 40) & 0x4000000) == 0 && !*(_DWORD *)(v15 + 1224) )
  {
    v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 34);
    goto LABEL_6;
  }
  v12 = *((_QWORD *)GraphicsDeviceFromDevObjHandle + 34);
  if ( !v12 )
    return 3221225485LL;
LABEL_6:
  *a4 = v12;
  *a5 = *((_DWORD *)GraphicsDeviceFromDevObjHandle + 62);
  *a6 = gpepCSRSS;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a3 + 112);
    if ( v13 )
    {
      a2[328] = v13;
      a2[329] = *(_QWORD *)(a3 + 128);
      a2[330] = *(_QWORD *)(a3 + 152);
      a2[331] = *(_QWORD *)(a3 + 136);
      a2[332] = *(_QWORD *)(a3 + 144);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v9;
}
