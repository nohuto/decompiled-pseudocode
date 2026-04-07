/*
 * XREFs of ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18008AA5C
 * Callers:
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x18008A534 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 * Callees:
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085700 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x18008A2D0 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18008A384 (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x18008A440 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *a2,
        HWND a3,
        int a4,
        int nDenominator,
        bool a6,
        enum IconicRepresentationType *a7,
        enum IconicRepresentationType *a8)
{
  int v11; // ebx
  int v13; // eax
  int ImmersiveIconContainerSize; // eax
  int IconicRepresentationTypeClosestToSize; // eax
  int v16; // eax
  unsigned __int16 v17; // ax
  HWND v18; // rcx
  __int64 v19; // r8

  v11 = 2;
  v13 = MulDiv(a4, 100, nDenominator);
  if ( v13 >= 320 )
    v11 = (v13 >= 800) + 3;
  if ( a6 )
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11);
    if ( !CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, ImmersiveIconContainerSize) )
    {
      IconicRepresentationTypeClosestToSize = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetIconicRepresentationTypeClosestToSize(
                                                a2,
                                                a4,
                                                nDenominator);
      if ( IconicRepresentationTypeClosestToSize != 5 )
        v11 = IconicRepresentationTypeClosestToSize;
    }
  }
  if ( a8 )
    *(_DWORD *)a8 = v11;
  if ( *((_BYTE *)a2 + 40)
    || (v16 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11),
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(a2, v16)) )
  {
    if ( *((_BYTE *)a2 + 40) )
      v11 = 1;
  }
  else
  {
    *((_BYTE *)a2 + 40) = 1;
    v17 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(nDenominator, v11);
    v18 = (HWND)*((_QWORD *)this + 10);
    if ( v18 )
      PostMessageW(v18, 0x323u, *(_QWORD *)a2, v17 | (unsigned __int64)(v17 << 16));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer((__int64)v18, (__int64)&UdwmManageIconicThumbnail_Info, 3LL, *(_QWORD *)a2);
    v11 = 1;
  }
  *(_DWORD *)a7 = v11;
  ++*((_DWORD *)a2 + 11);
  switch ( *(_DWORD *)a7 )
  {
    case 2:
      v19 = 6LL;
      break;
    case 3:
      v19 = 7LL;
      break;
    case 4:
      v19 = 8LL;
      break;
    default:
      v19 = 9LL;
      break;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer((__int64)a7, (__int64)&UdwmSelectIconicRepresentation_Info, v19, a3);
  return 0LL;
}
