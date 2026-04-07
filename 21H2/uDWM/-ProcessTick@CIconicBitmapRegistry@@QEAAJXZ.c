/*
 * XREFs of ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180089D5C
 * Callers:
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x18003B878 (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180014F2C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180045B9C (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsLivePreview@@YA_NPEAVCWindowData@@@Z @ 0x180057070 (-IsLivePreview@@YA_NPEAVCWindowData@@@Z.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180089FAC (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009AD60 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::ProcessTick(CIconicBitmapRegistry *this)
{
  unsigned int v1; // edi
  double i; // xmm6_8
  __int64 v4; // rax
  __int64 v5; // rsi
  CWindowIconic *v6; // rbp
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi

  v1 = 0;
  for ( i = *((double *)CDesktopManager::s_pDesktopManagerInstance + 40); v1 < *((_DWORD *)this + 18); ++v1 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( *(double *)(v4 + 16LL * v1) > i )
      break;
    v5 = *(_QWORD *)(v4 + 16LL * v1 + 8);
    if ( IsLivePreview((struct CWindowData *)v5) )
    {
      v6 = (CWindowIconic *)*((_QWORD *)this + 12);
      *(_WORD *)((char *)this + 89) = 256;
    }
    else
    {
      CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)v5, 0);
      *(_BYTE *)(v5 + 610) |= 0x20u;
      v6 = *(CWindowIconic **)(v5 + 424);
    }
    CIconicBitmapRegistry::ClearBitmap(this, (CWindowIconic **)v5);
    if ( v6 )
    {
      v7 = CWindowIconic::OnRepresentationTypeUpdated(v6);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3E8u);
    }
  }
  v8 = DynArray<CIconicBitmapPending,0>::ShiftLeft((char *)this + 48, v1);
  v9 = v8;
  if ( v8 >= 0 )
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = *((_DWORD *)this + 18) != 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3EEu);
  return v9;
}
