/*
 * XREFs of ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180089EE4
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180014BBC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x180035368 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18009DBA8 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E98C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x1800A13C0 (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x1800B6E80 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CIconicBitmapPending,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = 2LL * v4;
        v8 = 2LL * ++v4;
        *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)(v6 + 8 * v8);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  return v3;
}
