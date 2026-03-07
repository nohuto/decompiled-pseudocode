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
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // r12
  unsigned __int8 HasAnyVidPnSourceOwner; // al
  int v22; // r8d
  LONG v23; // edx
  int v24; // r8d
  ADAPTER_DISPLAY *v25; // r11
  int IsWindowVisible; // eax
  __int64 Value; // rdx
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r12
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v32; // r8d
  HDC v33; // rdi
  HDEV v34; // r14
  const wchar_t *v35; // r9
  __int64 v36; // rax
  int v37; // edx
  unsigned int v38; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v39; // eax
  unsigned int v40; // eax
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  __int16 v43; // ax
  int v44; // [rsp+50h] [rbp-20h] BYREF
  int v45; // [rsp+54h] [rbp-1Ch] BYREF
  int v46; // [rsp+58h] [rbp-18h]
  struct tagRECT v47; // [rsp+60h] [rbp-10h] BYREF
  int v50; // [rsp+D0h] [rbp+60h]
  unsigned __int8 v51; // [rsp+D0h] [rbp+60h]
  unsigned int v52; // [rsp+D0h] [rbp+60h]

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
  v44 = 0;
  v16 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v14 + 224))(&v44, 0LL, 0LL);
  v45 = 0;
  v17 = v16;
  v46 = v16;
  v50 = (*(__int64 (__fastcall **)(int *))(v14 + 304))(&v45);
  if ( !v17 || (v13 = 0LL, v44) )
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
      v20 = (_DWORD *)((char *)this + 24);
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
      v20 = (_DWORD *)((char *)this + 24);
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)(4000LL * a2->VidPnSourceId
                                                 + *(_QWORD *)(*(_QWORD *)(v13 + 2920) + 128LL)
                                                 + 628);
    }
    *((_QWORD *)this + 5) = 0LL;
LABEL_20:
    if ( *v20 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
    {
      *((_DWORD *)this + 1) |= 3u;
      WdLogSingleEntry3(4LL, -1071775738LL, this, a2->VidPnSourceId);
      return 3223191558LL;
    }
    if ( (*((_BYTE *)a5 + 1901) & 1) == 0 )
      *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 736LL)
                                                                             + 8LL)
                                                                 + 528LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 744LL));
    if ( v13
      && (v50 || !ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v13 + 2920), a2->VidPnSourceId, v18, v19)) )
    {
      goto LABEL_49;
    }
    if ( (a2->Flags.Value & 0x10000) == 0 )
    {
      if ( v46 && v50 && !v45 )
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
        v22 = *((_DWORD *)this + 10);
        v51 = HasAnyVidPnSourceOwner;
        v47.left = v22 + *v20;
        v23 = v22 + *((_DWORD *)this + 8);
        v24 = *((_DWORD *)this + 11);
        v47.right = v23;
        v47.top = v24 + *((_DWORD *)this + 7);
        v47.bottom = v24 + *((_DWORD *)this + 9);
        IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible(v25, &v47);
        if ( IsWindowVisible == -1073741823 )
        {
          if ( (*((_DWORD *)a5 + 116) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2920)))
            && !DXGDEVICE::AllowLegacyPresent(a5) )
          {
            *((_DWORD *)this + 1) |= 3u;
            *((_QWORD *)this + 6) = a2->hWindow;
            WdLogSingleEntry5(4LL, -1071775738LL, this, a2->hSource, a2->Flags.Value, a2->VidPnSourceId);
            if ( !*((_DWORD *)a5 + 116) && v51 )
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
        if ( v51 )
        {
          v28 = a2->Flags.Value;
          if ( (v28 & 0x10000) == 0 && !v46 )
          {
            WdLogSingleEntry5(4LL, -1071774910LL, this, a2->hSource, v28, a2->VidPnSourceId);
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
          v29 = 4000LL * a2->VidPnSourceId;
          v30 = *(_QWORD *)(*(_QWORD *)(v13 + 2920) + 128LL);
          v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(
                  *(unsigned int *)(v29 + v30 + 628),
                  *(unsigned int *)(v29 + v30 + 632),
                  *(unsigned int *)(v29 + v30 + 636),
                  *(unsigned int *)(v29 + v30 + 640));
          goto LABEL_60;
        }
LABEL_62:
        v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v14 + 80))(0LL, 0LL, 0LL, 0LL);
        v31 = v36;
        if ( v36
          && (*(unsigned int (__fastcall **)(HDC, __int64, _QWORD))(v14 + 88))(
               a3,
               v36,
               HIWORD(a2->Flags.Value) & 1 | 4u) == -1 )
        {
          (*(void (__fastcall **)(__int64))(v14 + 128))(v31);
          v33 = a3;
          v34 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v35 = L"0x%I64x unable to get VisRgn with hWindow=0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
          goto LABEL_65;
        }
LABEL_60:
        v32 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
        if ( !v31 )
        {
          v33 = a3;
          v34 = a4;
          WdLogSingleEntry5(6LL, this, a2->hWindow, a3, a4, a2->Flags.Value);
          v35 = L"0x%I64x not able to create hVisRgn hWindow = 0x%I64x hdc = 0x%I64x hDev = 0x%I64x PresentFlags = 0x%I64x";
LABEL_65:
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)v35,
            (__int64)this,
            (__int64)a2->hWindow,
            (__int64)v33,
            (__int64)v34,
            a2->Flags.Value);
          return 3221225495LL;
        }
        v37 = *((_DWORD *)this + 1);
        if ( (*(_DWORD *)&v32 & 0x10000) != 0 )
        {
          v38 = v37 | 0x10;
          if ( a2->hDestination )
            v38 = *((_DWORD *)this + 1) & 0xFFFFFFEF;
        }
        else
        {
          if ( (v37 & 0x20) == 0
            && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 436LL) & 0x10) == 0 || (*(_BYTE *)&v32 & 3) == 0) )
          {
            *((_DWORD *)this + 1) ^= (*((_DWORD *)this + 1) ^ (16
                                                             * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v14 + 136))(
                                                                 v13,
                                                                 a4,
                                                                 a2->hWindow,
                                                                 v31))) & 0x10;
            v38 = *((_DWORD *)this + 1);
LABEL_77:
            if ( (v38 & 0x10) != 0
              && (a2->Flags.Value & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v13 + 2920), a5, a2->VidPnSourceId)
              && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v13 + 2920), a2->VidPnSourceId)
                 + 2) == 41 )
            {
              if ( (v39 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                    (*(_BYTE *)&v39 & 1) != 0)
                && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                || (*(_BYTE *)&v39 & 2) != 0 && !a2->hWindow )
              {
                *((_DWORD *)this + 1) &= ~0x10u;
              }
            }
            if ( (*((_DWORD *)this + 1) & 0x10) == 0 )
            {
              v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v14 + 112))(v31, 0LL, 0LL);
              v41 = v40;
              if ( !v40 )
              {
                WdLogSingleEntry2(2LL, this, v31);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"0x%I64x fails to get the size for VisRgnData from 0x%I64x",
                  (__int64)this,
                  v31,
                  0LL,
                  0LL,
                  0LL);
LABEL_90:
                (*(void (__fastcall **)(__int64))(v14 + 128))(v31);
                return 3221225495LL;
              }
              operator delete(*((void **)this + 2));
              v42 = operator new[](v41, 0x4B677844u, 256LL);
              *((_QWORD *)this + 2) = v42;
              if ( !v42 )
              {
                WdLogSingleEntry2(6LL, this, v41);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"0x%I64x fails to allocate memory of size 0x%I64x for VisRgnData",
                  (__int64)this,
                  v41,
                  0LL,
                  0LL,
                  0LL);
                goto LABEL_90;
              }
              v52 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v14 + 112))(v31, (unsigned int)v41, v42);
              if ( v52 > (unsigned int)v41 )
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
                v43 = (*(__int64 (__fastcall **)(HWND))(v14 + 376))(a2->hWindow);
              else
                v43 = 0;
              *((_WORD *)this + 214) = v43;
              if ( v52 <= 0x20 )
              {
                if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                  (*(void (__fastcall **)(HDC, char *))(v14 + 248))(a3, (char *)this + 128);
              }
              else
              {
                v12 = DXGPRESENT::CombineRectList(this, a2, a3, a5, a6, a7);
              }
            }
            (*(void (__fastcall **)(__int64))(v14 + 128))(v31);
            *((_QWORD *)this + 6) = a2->hWindow;
            return v12;
          }
          v38 = v37 | 0x10;
        }
        *((_DWORD *)this + 1) = v38;
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
