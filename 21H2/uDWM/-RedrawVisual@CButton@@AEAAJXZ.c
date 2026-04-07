/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x180022648
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x18003B110 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x1800077B4 (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180007B10 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013BA0 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x1800225C8 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180027498 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180028A7C (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180028BB4 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18003BDDC (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18003BF08 (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x18003BF90 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18003D3C0 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  int *v2; // rsi
  int v3; // r14d
  int v5; // eax
  float v6; // xmm1_4
  float v7; // xmm0_4
  int v8; // eax
  unsigned int v9; // edi
  unsigned int *v10; // rdi
  char v11; // bp
  struct CAtlasedImage *v12; // rdx
  CAtlasedRectsVisual *v13; // rcx
  char *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r8
  CBaseObject *v17; // rcx
  char v18; // al
  int inserted; // eax
  float v21; // xmm5_4
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  float v25; // [rsp+50h] [rbp+8h] BYREF
  float v26; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 280);
  v2 = (int *)((char *)this + 376);
  v3 = *((_DWORD *)this + 94);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v5 = ((v1 & 4) != 0) + 1;
    else
      v5 = 0;
  }
  else
  {
    v5 = 3;
  }
  *v2 = v5;
  v6 = *((float *)this + 100);
  if ( *v2 == 1 )
    v7 = FLOAT_1_0;
  else
    v7 = *((float *)this + 101);
  *((float *)this + 100) = v7;
  if ( v6 != v7 )
    CVisual::SetDirtyFlags(this, 0x8000);
  v8 = CButton::DrawStateW(this, *((_QWORD *)this + 36));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x122u);
  }
  else
  {
    if ( (v3 != 1 || *v2) && (*v2 != 1 || v3) )
    {
      v10 = (unsigned int *)*((_QWORD *)this + 3);
      v11 = 0;
    }
    else
    {
      v11 = 1;
      v10 = (unsigned int *)this;
    }
    v12 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
    v13 = (CAtlasedRectsVisual *)*((_QWORD *)v12 + 10);
    if ( v10 != (unsigned int *)v13 )
    {
      if ( v13 )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(v13, v12);
        v12 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
      }
      inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex((CAtlasedRectsVisual *)v10, v12, v10[66]);
      v9 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x139u);
        return v9;
      }
      CButton::UpdateAtlasPositionAndSize(this);
    }
    v14 = (char *)this + 392;
    if ( v11 )
    {
      if ( !*(_QWORD *)v14 || *(_BYTE *)(*(_QWORD *)v14 + 72LL) )
      {
        *((_DWORD *)this + 96) = *((_DWORD *)this + 100);
      }
      else
      {
        CButton::ComputeFadeValues(this, &v25, &v26);
        v21 = v25;
        *((float *)this + 95) = v26;
        *((float *)this + 96) = v21;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 95));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 96));
      v22 = CButton::DrawStateW(this, *((_QWORD *)this + 37));
      v9 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x14Fu);
      }
      else
      {
        v23 = CButton::ActivateTimeline(this, (__int64 *)this + 49, 0.1599999964237213);
        v9 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x151u);
      }
    }
    else
    {
      CButton::DeactivateTimeline(this);
      v15 = *((_QWORD *)this + 37);
      CAtlasedImage::SetBitmapSource((CAtlasedImage *)v15, 0LL);
      CAtlasButton::SetGlyphImage(
        v15,
        0LL,
        v16,
        (unsigned int)(int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)));
      v17 = *(CBaseObject **)(v15 + 128);
      if ( v17 )
      {
        CBaseObject::Release(v17);
        *(_QWORD *)(v15 + 128) = 0LL;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v15, 1, 0x2000u);
      }
      v18 = (*((_BYTE *)this + 280) & 0x20) != 0;
      if ( *(_BYTE *)(v15 + 152) != v18 )
      {
        v24 = *(_QWORD *)(v15 + 80);
        *(_BYTE *)(v15 + 152) = v18;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0x2000LL);
      }
      v9 = 0;
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 100));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), 0.0);
    }
  }
  return v9;
}
