/*
 * XREFs of ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x1800827EC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003FA3C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014F08 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18008358C (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18008375C (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectWindows(CLivePreview *this)
{
  int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CLivePreview *v4; // rcx
  unsigned int v5; // r15d
  struct _LIST_ENTRY *v6; // r13
  __int64 Blink; // rbx
  bool IsTrulyMaximized; // r12
  HMONITOR v9; // rax
  bool v10; // cf
  __int64 v11; // rdi
  CLivePreview *v12; // rcx
  char v13; // al
  unsigned int v14; // edi
  const wchar_t **v15; // rsi
  bool v16; // di
  bool v17; // zf
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  _QWORD v31[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v32; // [rsp+50h] [rbp-B8h]
  unsigned int v33; // [rsp+54h] [rbp-B4h]
  unsigned int v34; // [rsp+58h] [rbp-B0h]
  __m256i v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h]
  struct tagRECT rcDst; // [rsp+88h] [rbp-80h] BYREF
  WCHAR ClassName[264]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 36));
  *((_DWORD *)this + 138) = 0;
  v5 = 0;
  *((_DWORD *)this + 139) = 0;
  v32 = 0;
  v6 = WindowListForDesktop;
  Blink = (__int64)WindowListForDesktop->Blink;
  v33 = 0;
  v34 = 0;
  *(_OWORD *)&v31[1] = 0LL;
  if ( (struct _LIST_ENTRY *)Blink == WindowListForDesktop )
    goto LABEL_67;
  while ( 1 )
  {
    if ( !Blink || !CLivePreview::_IsEligibleForLivePreview(v4, (const struct CWindowData *)Blink) )
      goto LABEL_63;
    *(_BYTE *)(Blink + 611) &= 0xFCu;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v4, (const struct CWindowData *)Blink);
    v9 = MonitorFromWindow(*(HWND *)(Blink + 40), 0);
    v10 = *((_DWORD *)this + 138) < 0x1Eu;
    v31[0] = v9;
    if ( !v10 )
    {
      *(_BYTE *)(Blink + 611) |= 3u;
      goto LABEL_57;
    }
    if ( IsTrulyMaximized )
    {
      if ( v9 )
      {
        v11 = 0LL;
        if ( !*((_DWORD *)this + 82) )
        {
LABEL_13:
          v13 = *(_BYTE *)(Blink + 611);
          goto LABEL_29;
        }
        while ( 1 )
        {
          v12 = (CLivePreview *)*((_QWORD *)this + 38);
          if ( *((_QWORD *)v12 + 5 * v11 + 4) == v31[0]
            && CLivePreview::_IsTrulyMaximized(v12, *((const struct CWindowData **)v12 + 5 * v11)) )
          {
            break;
          }
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *((_DWORD *)this + 82) )
            goto LABEL_13;
        }
      }
      *(_BYTE *)(Blink + 611) |= 3u;
      goto LABEL_13;
    }
    if ( GetClassNameW(*(HWND *)(Blink + 40), ClassName, 260) )
    {
      v14 = 0;
      v15 = (const wchar_t **)off_1800C8668;
      while ( _wcsicmp(*v15, ClassName) )
      {
        ++v14;
        ++v15;
        if ( v14 >= 3 )
          goto LABEL_20;
      }
      *(_BYTE *)(Blink + 611) |= 3u;
    }
LABEL_20:
    v13 = *(_BYTE *)(Blink + 611);
    if ( (v13 & 1) != 0 )
      goto LABEL_29;
    v16 = (*(_DWORD *)(Blink + 104) & 0x80) != 0;
    if ( CWindowData::IsImmersiveWindow((CWindowData *)Blink) )
    {
      if ( *(_QWORD *)(Blink + 536) )
        goto LABEL_27;
      v17 = (*(_DWORD *)(Blink + 100) & 0x40000000) == 0;
    }
    else
    {
      if ( *(_QWORD *)(Blink + 368) )
        goto LABEL_27;
      v17 = (*(_DWORD *)(Blink + 100) & 0xC00000) == 12582912;
    }
    if ( !v17 )
LABEL_27:
      v16 = 1;
    v13 = v16 | *(_BYTE *)(Blink + 611) & 0xFE;
    *(_BYTE *)(Blink + 611) = v13;
LABEL_29:
    if ( (v13 & 3) != 3 )
    {
      ++*((_DWORD *)this + 138);
      v18 = *(_BYTE *)(Blink + 611);
      if ( (v18 & 2) == 0 )
      {
        v19 = *((_DWORD *)this + 139);
        if ( v19 >= 0xA )
        {
          v18 |= 2u;
          *(_BYTE *)(Blink + 611) = v18;
        }
        else
        {
          v20 = 0LL;
          *((_DWORD *)this + 139) = v19 + 1;
          if ( *((_DWORD *)this + 82) )
          {
            while ( 1 )
            {
              v21 = *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v20);
              if ( (*(_BYTE *)(v21 + 611) & 2) == 0
                && *(_DWORD *)(v21 + 112) == 1
                && IntersectRect(&rcDst, (const RECT *)(Blink + 48), (const RECT *)(v21 + 48))
                && EqualRect(&rcDst, (const RECT *)(Blink + 48)) )
              {
                break;
              }
              v20 = (unsigned int)(v20 + 1);
              if ( (unsigned int)v20 >= *((_DWORD *)this + 82) )
                goto LABEL_40;
            }
            --*((_DWORD *)this + 139);
            *(_BYTE *)(Blink + 611) |= 2u;
          }
LABEL_40:
          v18 = *(_BYTE *)(Blink + 611);
        }
      }
      if ( (v18 & 1) == 0 && ((*(_DWORD *)(Blink + 112) - 8) & 0xFFFFFFFD) == 0 )
      {
        v22 = 0LL;
        if ( !v5 )
          goto LABEL_49;
        do
        {
          if ( v31[0] == *(_QWORD *)(v31[1] + 8 * v22) )
            break;
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < v5 );
        if ( (unsigned int)v22 < v5 )
        {
          *(_BYTE *)(Blink + 611) |= 1u;
        }
        else
        {
LABEL_49:
          v23 = v5 + 1;
          if ( v5 + 1 >= v5 )
          {
            if ( v23 > v33 )
            {
              v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v31[1], 8u, 1, v31);
              if ( v25 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xC0u);
              v5 = v34;
            }
            else
            {
              v24 = v5++;
              v34 = v23;
              *(_QWORD *)(v31[1] + 8 * v24) = v31[0];
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
      }
    }
LABEL_57:
    v36 = v31[0];
    v26 = *((unsigned int *)this + 82);
    v35.m256i_i64[0] = Blink;
    *(_OWORD *)&v35.m256i_u64[1] = 0LL;
    v35.m256i_i8[24] = IsTrulyMaximized;
    v27 = v26 + 1;
    if ( (int)v26 + 1 < (unsigned int)v26 )
      break;
    if ( v27 > *((_DWORD *)this + 81) )
    {
      v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 304, 0x28u, 1, &v35);
      v2 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xC0u);
      if ( v2 < 0 )
        goto LABEL_66;
    }
    else
    {
      v4 = (CLivePreview *)(5 * v26);
      v2 = 0;
      v28 = *((_QWORD *)this + 38);
      *(__m256i *)(v28 + 8LL * (_QWORD)v4) = v35;
      *(_QWORD *)(v28 + 8LL * (_QWORD)v4 + 32) = v36;
      *((_DWORD *)this + 82) = v27;
    }
LABEL_63:
    Blink = *(_QWORD *)(Blink + 8);
    if ( (struct _LIST_ENTRY *)Blink == v6 )
      goto LABEL_67;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  v2 = -2147024362;
LABEL_66:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x14Fu);
LABEL_67:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v31[1]);
  return (unsigned int)v2;
}
