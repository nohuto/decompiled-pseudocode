/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02A41B8
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A4B6C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003610 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00F93C0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C0214544 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 */

__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        unsigned int a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  bool v6; // zf
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int128 v14; // xmm0
  __int64 v15; // rax
  void *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r15
  _QWORD *v23; // rax
  D3DDDIFORMAT Format; // eax
  int v25; // r15d
  __int64 v26; // r10
  __int64 v27; // r8
  _QWORD *v28; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v29; // [rsp+40h] [rbp-79h] BYREF
  __int128 v30; // [rsp+70h] [rbp-49h]
  struct tagRECT v31; // [rsp+A8h] [rbp-11h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  v31 = 0LL;
  if ( v6 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v11);
      v12[3] = -1071775482LL;
      v12[4] = this;
      v12[5] = a3;
      WdLogEvent5_WdEvent(v12);
      return 3223191814LL;
    }
    v14 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                       ((unsigned int)v11 >> 6) & 0xF);
    v29.Rotation = -1;
    v15 = *((_QWORD *)a3 + 6);
    v29.Flags.Value = 1;
    v30 = v14;
    memset(&v29.Width, 0, 32);
    v16 = *(void **)(v15 + 16);
    v17 = *((_QWORD *)this + 2);
    v29.hAllocation = v16;
    v19 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 2704LL),
            &v29,
            v18);
    v22 = v19;
    if ( v19 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v23[3] = v22;
      v23[4] = this;
      v23[5] = *((unsigned int *)a3 + 4);
      v23[6] = a3;
      v23[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v23);
      return 3221225485LL;
    }
    if ( *(_QWORD *)&v29.Width != (_QWORD)v30 )
      goto LABEL_19;
    v21 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v29.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v29.Format;
    if ( DWORD2(v30) != 21 )
      v21 = DWORD2(v30);
    if ( Format != (_DWORD)v21 )
    {
LABEL_19:
      v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v29.Width);
      v28[3] = -1071775482LL;
      v28[4] = this;
      v28[5] = a3;
      WdLogEvent5_WdEvent(v28);
      return 3223191557LL;
    }
    v31.right = v29.Width;
    v31.bottom = v29.Height;
  }
  v25 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
          this,
          a4,
          a2,
          a5,
          a6,
          &v31);
  if ( v25 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v26 = *((_QWORD *)this + 2);
    v27 = *(_QWORD *)(v26 + 1848);
    if ( v27 == *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
    {
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v27 + 2696), a4);
      v26 = *((_QWORD *)this + 2);
    }
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v26, a4, a3, 0, 1u);
  }
  return (unsigned int)v25;
}
