/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C033CAF0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01BF8F0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000501C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0005070 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00082D8 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C01E17B4 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01EA554 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C022EA0C (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02BE17C (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C033B2DC (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C033D920 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C033E014 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  unsigned int v12; // edi
  __int64 v13; // r14
  __int64 v14; // r15
  int v16; // eax
  int v17; // r12d
  _DWORD *v18; // r12
  unsigned __int8 HasAnyVidPnSourceOwner; // al
  int v20; // r8d
  LONG v21; // edx
  int v22; // r8d
  ADAPTER_DISPLAY *v23; // r11
  int IsWindowVisible; // eax
  __int64 Value; // rdx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // r12
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v30; // r8d
  HDC v31; // rdi
  HDEV v32; // r14
  const wchar_t *v33; // r9
  __int64 v34; // rax
  int v35; // edx
  unsigned int v36; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v37; // eax
  unsigned int v38; // eax
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  __int16 v41; // ax
  int v42; // [rsp+50h] [rbp-20h] BYREF
  int v43; // [rsp+54h] [rbp-1Ch] BYREF
  int v44; // [rsp+58h] [rbp-18h]
  struct tagRECT v45; // [rsp+60h] [rbp-10h] BYREF
  int v48; // [rsp+D0h] [rbp+60h]
  unsigned __int8 v49; // [rsp+D0h] [rbp+60h]
  unsigned int v50; // [rsp+D0h] [rbp+60h]

  v12 = 0;
  v13 = *((_QWORD *)a5 + 235);
  v14 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 88LL);
  if ( !(*(unsigned int (**)(void))(v14 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    WdLogSingleEntry1(4LL, -1071775737LL);
    return 3223191559LL;
  }
  v42 = 0;
  v16 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v14 + 224))(&v42, 0LL, 0LL);
  v43 = 0;
  v17 = v16;
  v44 = v16;
  v48 = (*(__int64 (__fastcall **)(int *))(v14 + 304))(&v43);
  if ( !v17 || (v13 = 0LL, v42) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v13 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      WdLogSingleEntry1(4LL, -1071775737LL);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      v18 = (_DWORD *)((char *)this + 24);
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v14 + 72))(a3, (char *)this + 24) )
      {
        WdLogSingleEntry2(3LL, this, a2->hWindow);
        return 3221225485LL;
      }
      if ( (*(unsigned int (__fastcall **)(HDC, char *))(v14 + 312))(a3, (char *)this + 40) )
        goto LABEL_20;
    }
    else
    {
      if ( !v13 || v13 != *((_QWORD *)a5 + 235) )
      {
        WdLogSingleEntry1(1LL, 10671LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter == pDevice->GetDisplayAdapter(pPresent->VidPnSourceId))",
          10671LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v18 = (_DWORD *)((char *)this + 24);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)(4000LL * a2->VidPnSourceId
                                                 + *(_QWORD *)(*(_QWORD *)(v13 + 2920) + 128LL)
                                                 + 628);
    }
    *((_QWORD *)this + 5) = 0LL;
LABEL_20:
    if ( *v18 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
    {
      *((_DWORD *)this + 1) |= 3u;
      WdLogSingleEntry3(4LL, -1071775738LL, this, a2->VidPnSourceId);
      return 3223191558LL;
    }
    if ( (*((_BYTE *)a5 + 1901) & 1) == 0 )
      *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 736LL)
                                                                             + 8LL)
                                                                 + 528LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 744LL));
    if ( v13 && (v48 || !ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v13 + 2920), a2->VidPnSourceId)) )
      goto LABEL_49;
    if ( (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( v44 && v48 && !v43 )
        return 3223192386LL;
      *((_DWORD *)this + 1) |= 0x10u;
      *((_QWORD *)this + 6) = a2->hWindow;
      WdLogSingleEntry1(4LL, a5);
      return 0LL;
    }
    if ( v13 )
    {
LABEL_49:
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 2920), a5) )
      {
        HasAnyVidPnSourceOwner = ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(
                                   *(ADAPTER_DISPLAY **)(v13 + 2920),
                                   D3DKMT_VIDPNSOURCEOWNER_SHARED);
        v20 = *((_DWORD *)this + 10);
        v49 = HasAnyVidPnSourceOwner;
        v45.left = v20 + *v18;
        v21 = v20 + *((_DWORD *)this + 8);
        v22 = *((_DWORD *)this + 11);
        v45.right = v21;
        v45.top = v22 + *((_DWORD *)this + 7);
        v45.bottom = v22 + *((_DWORD *)this + 9);
        IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible(v23, &v45);
        if ( IsWindowVisible == -1073741823 )
        {
          if ( (*((_DWORD *)a5 + 116) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2920)))
            && !DXGDEVICE::AllowLegacyPresent(a5) )
          {
            *((_DWORD *)this + 1) |= 3u;
            *((_QWORD *)this + 6) = a2->hWindow;
            WdLogSingleEntry5(4LL, -1071775738LL, this, a2->hSource, a2->Flags.Value, a2->VidPnSourceId);
            if ( !*((_DWORD *)a5 + 116) && v49 )
              *((_DWORD *)this + 1) |= 0x80u;
            return 3223191558LL;
          }
        }
        else if ( IsWindowVisible == 261 )
        {
          Value = a2->Flags.Value;
          if ( (Value & 0x100) == 0 )
          {
            if ( a9 )
            {
              WdLogSingleEntry5(4LL, 261LL, this, a2->hSource, Value, a2->VidPnSourceId);
              return 261LL;
            }
          }
        }
        if ( v49 )
        {
          v26 = a2->Flags.Value;
          if ( (v26 & 0x10000) == 0 && !v44 )
          {
            WdLogSingleEntry5(4LL, -1071774910LL, this, a2->hSource, v26, a2->VidPnSourceId);
            return 3223192386LL;
          }
        }
      }
    }
    if ( (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( !a2->hWindow )
      {
LABEL_58:
        if ( (a2->Flags.Value & 0x100) != 0 )
        {
          v27 = 4000LL * a2->VidPnSourceId;
          v28 = *(_QWORD *)(*(_QWORD *)(v13 + 2920) + 128LL);
          v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(
                  *(unsigned int *)(v27 + v28 + 628),
                  *(unsigned int *)(v27 + v28 + 632),
                  *(unsigned int *)(v27 + v28 + 636),
                  *(unsigned int *)(v27 + v28 + 640));
          goto LABEL_60;
        }
LABEL_62:
        v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(0LL, 0LL, 0LL, 0LL);
        v29 = v34;
        if ( v34
          && (*(unsigned int (__fastcall **)(HDC, __int64, _QWORD))(v14 + 88))(
               a3,
               v34,
               HIWORD(a2->Flags.Value) & 1 | 4u) == -1 )
        {
          (*(void (__fastcall **)(__int64))(v14 + 128))(v29);
          v31 = a3;
          v32 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v33 = L"0x%I64x unable to get VisRgn with hWindow=0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          goto LABEL_65;
        }
LABEL_60:
        v30 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
        if ( !v29 )
        {
          v31 = a3;
          v32 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v33 = L"0x%I64x not able to create hVisRgn hWindow = 0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
LABEL_65:
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)v33,
            (__int64)this,
            (__int64)a2->hWindow,
            (__int64)v31,
            (__int64)v32,
            a2->Flags.Value);
          return 3221225495LL;
        }
        v35 = *((_DWORD *)this + 1);
        if ( (*(_DWORD *)&v30 & 0x10000) != 0 )
        {
          v36 = v35 | 0x10;
          if ( a2->hDestination )
            v36 = *((_DWORD *)this + 1) & 0xFFFFFFEF;
        }
        else
        {
          if ( (v35 & 0x20) == 0
            && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 436LL) & 0x10) == 0 || (*(_BYTE *)&v30 & 3) == 0) )
          {
            *((_DWORD *)this + 1) ^= (*((_DWORD *)this + 1) ^ (16
                                                             * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v14 + 136))(
                                                                 v13,
                                                                 a4,
                                                                 a2->hWindow,
                                                                 v29))) & 0x10;
            v36 = *((_DWORD *)this + 1);
LABEL_77:
            if ( (v36 & 0x10) != 0
              && (a2->Flags.Value & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2920), a5, a2->VidPnSourceId)
              && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v13 + 2920), a2->VidPnSourceId)
                 + 2) == 41 )
            {
              if ( (v37 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                    (*(_BYTE *)&v37 & 1) != 0)
                && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                || (*(_BYTE *)&v37 & 2) != 0 && !a2->hWindow )
              {
                *((_DWORD *)this + 1) &= ~0x10u;
              }
            }
            if ( (*((_DWORD *)this + 1) & 0x10) == 0 )
            {
              v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 112))(v29, 0LL, 0LL);
              v39 = v38;
              if ( !v38 )
              {
                WdLogSingleEntry2(2LL, this, v29);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x fails to get the size for VisRgnData from 0x%I64x",
                  (__int64)this,
                  v29,
                  0LL,
                  0LL,
                  0LL);
LABEL_90:
                (*(void (__fastcall **)(__int64))(v14 + 128))(v29);
                return 3221225495LL;
              }
              operator delete(*((void **)this + 2));
              v40 = operator new[](v39, 0x4B677844u, 256LL);
              *((_QWORD *)this + 2) = v40;
              if ( !v40 )
              {
                WdLogSingleEntry2(6LL, this, v39);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"0x%I64x fails to allocate memory of size 0x%I64x for VisRgnData",
                  (__int64)this,
                  v39,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_90;
              }
              v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 112))(v29, (unsigned int)v39, v40);
              if ( v50 > (unsigned int)v39 )
              {
                WdLogSingleEntry1(1LL, 10999LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"RealSize <= RgnDataSize",
                  10999LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *((_DWORD *)this + 1) |= 2u;
              if ( (a2->Flags.Value & 0x10000) != 0 )
                v41 = (*(__int64 (__fastcall **)(HWND))(v14 + 376))(a2->hWindow);
              else
                v41 = 0;
              *((_WORD *)this + 214) = v41;
              if ( v50 <= 0x20 )
              {
                if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                  (*(void (__fastcall **)(HDC, char *))(v14 + 248))(a3, (char *)this + 128);
              }
              else
              {
                v12 = DXGPRESENT::CombineRectList(this, a2, a3, a5, a6, a7);
              }
            }
            (*(void (__fastcall **)(__int64))(v14 + 128))(v29);
            *((_QWORD *)this + 6) = a2->hWindow;
            return v12;
          }
          v36 = v35 | 0x10;
        }
        *((_DWORD *)this + 1) = v36;
        goto LABEL_77;
      }
      if ( (*(unsigned int (__fastcall **)(HDC))(v14 + 56))(a3)
        && (!v13 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 2920), a5)) )
      {
        *((_DWORD *)this + 1) |= 0x10u;
        *((_QWORD *)this + 6) = a2->hWindow;
        return 0LL;
      }
    }
    if ( a2->hWindow )
      goto LABEL_62;
    goto LABEL_58;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
