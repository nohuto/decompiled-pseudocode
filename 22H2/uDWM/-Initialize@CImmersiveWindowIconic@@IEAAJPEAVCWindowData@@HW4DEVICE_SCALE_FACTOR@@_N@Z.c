/*
 * XREFs of ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008AB80
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18008AA78 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800141F0 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027EA0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EC04 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x18008A060 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x18008A1D0 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x18008A2C4 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18008ADD4 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x18008B00C (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008B07C (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x18008B138 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Initialize(
        CImmersiveWindowIconic *this,
        HWND *a2,
        int a3,
        __int32 a4,
        unsigned int a5)
{
  CDesktopManager *v7; // rax
  CImmersiveIconicBitmapRegistry *v10; // r12
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  int ImmersiveIconContainerSize; // eax
  int v16; // edx
  int v17; // eax
  bool v18; // zf
  struct CBitmapSource *BitmapSourceNoRef; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rbp
  int v21; // eax
  bool v22; // r8
  int v23; // eax
  int IconW; // eax
  int inserted; // eax
  int v26; // eax
  void *v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+74h] [rbp+Ch]
  int v31; // [rsp+88h] [rbp+20h] BYREF

  *((_BYTE *)this + 320) = a5;
  v7 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)this + 35) = a2;
  *((_DWORD *)this + 76) = 5;
  *((_DWORD *)this + 79) = a4;
  v10 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)v7 + 38);
  v11 = CVisual::Initialize(this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = CImage::Create((struct CImage **)this + 36);
    v12 = v13;
    if ( v13 >= 0 )
    {
      *(_BYTE *)(*((_QWORD *)this + 35) + 610LL) |= 4u;
      if ( a3 )
      {
        LOBYTE(v28) = *((_BYTE *)this + 320);
        v14 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
                v10,
                this,
                a3,
                (enum DEVICE_SCALE_FACTOR)a4,
                v28,
                (enum IconicRepresentationType *)&a5,
                (enum IconicRepresentationType *)&v31);
        v12 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x4Cu);
          return v12;
        }
        ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v31);
        v16 = v31;
        *((_DWORD *)this + 77) = ImmersiveIconContainerSize - 2;
        v17 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v16);
        v18 = a5 == 1;
        *((_DWORD *)this + 78) = v17;
        if ( v18 )
        {
          v29 = v17;
          v30 = v17;
          (*(void (__fastcall **)(CImmersiveWindowIconic *, int *))(*(_QWORD *)this + 96LL))(this, &v29);
          CImmersiveWindowIconic::_UpdateSolidFill(this);
        }
        else
        {
          BitmapSourceNoRef = 0LL;
          IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v10, a2[5]);
          if ( IconicResourceNoRef )
          {
            v21 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, a5);
            BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                  IconicResourceNoRef,
                                  v21);
          }
          *((_DWORD *)this + 78) = *((_DWORD *)BitmapSourceNoRef + 6);
          (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 96LL))(this);
          CImmersiveWindowIconic::SetBitmap(this, BitmapSourceNoRef, v22);
        }
        v23 = CImmersiveWindowIconic::SetRepresentationType(this, a5, 0LL);
        v12 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x60u);
          return v12;
        }
      }
      IconW = CImmersiveWindowIconic::LoadIconW(this);
      v12 = IconW;
      if ( IconW >= 0 )
      {
        inserted = VisualCollection::InsertRelative(
                     (CImmersiveWindowIconic *)((char *)this + 32),
                     *((struct CVisual **)this + 36),
                     0LL,
                     0,
                     1);
        v12 = inserted;
        if ( inserted >= 0 )
        {
          v26 = (*(__int64 (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 64LL))(this);
          v12 = v26;
          if ( v26 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x67u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x66u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0x65u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x44u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x42u);
  }
  return v12;
}
