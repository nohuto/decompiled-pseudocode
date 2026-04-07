/*
 * XREFs of ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x180016848
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180019160 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180014BBC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180014F2C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180089F68 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009AD60 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  int v6; // eax
  CWindowIconic *v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax

  v2 = *((_BYTE *)a2 + 610);
  v3 = 0;
  if ( (v2 & 4) != 0 )
    goto LABEL_7;
  *((_BYTE *)a2 + 610) = v2 & 0xD7;
  CWindowData::SetIconicBitmap(a2, 0LL);
  v6 = CIconicBitmapRegistry::RequestBitmap(this, (HWND *)a2, 0);
  v3 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3AAu);
  CIconicBitmapRegistry::ClearBitmap(this, (CWindowIconic **)a2);
  v7 = (CWindowIconic *)*((_QWORD *)a2 + 53);
  if ( !v7 || (v8 = CWindowIconic::OnRepresentationTypeUpdated(v7), v3 = v8, v8 >= 0) )
  {
LABEL_7:
    v9 = *((_QWORD *)this + 12);
    if ( v9 && *(struct CWindowData **)(v9 + 72) == a2 )
    {
      *(_WORD *)((char *)this + 89) = 0;
      *((_BYTE *)this + 88) = 0;
      v10 = CIconicBitmapRegistry::RequestBitmap(this, (HWND *)0xFFFFFFFFFFFFFFFFLL, 0);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3B7u);
      CIconicBitmapRegistry::ClearBitmap(this, (CWindowIconic **)0xFFFFFFFFFFFFFFFFLL);
      v11 = CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)this + 12));
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3B9u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3AEu);
  }
  return v3;
}
