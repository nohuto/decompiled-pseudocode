/*
 * XREFs of ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009B08
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000F434 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18000FB10 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019810 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180022900 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025CCC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartDelayHideAnimation(CTopLevelWindow3D *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int started; // eax

  v2 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 384LL), 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x179u);
  }
  else if ( *((_DWORD *)this + 92) != 8 )
  {
    v4 = CTopLevelWindow3D::StopAnimation(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x17Du);
    }
    else
    {
      started = CTopLevelWindow3D::StartAnimation(this, 8LL);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x17Eu);
    }
  }
  return v3;
}
