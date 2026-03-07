__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // r14d
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  char v9; // al
  bool v10; // zf
  char *v11; // r13
  __int64 v12; // r15
  struct CDrawListCache *v13; // rbx
  struct _LIST_ENTRY *v14; // r14
  int v15; // esi
  const struct IDeviceTarget *v16; // r12
  struct _LIST_ENTRY **p_Blink; // rcx
  int Cache; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ecx
  float v23; // xmm1_4
  float v24; // xmm0_4
  int v25; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct CDrawListCache *v28; // rcx
  CVisual *WindowBackgroundTreatmentVisual; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  const char *v31; // rbx
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  const char *v35; // rsi
  const char *v36; // rbx
  char v37; // r15
  __int64 v38; // rcx
  int v39; // edx
  int v40; // ecx
  int v41; // r9d
  int v42; // [rsp+20h] [rbp-A8h]
  char v43[4]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+54h] [rbp-74h]
  struct CDrawListCache *v45; // [rsp+58h] [rbp-70h] BYREF
  void *lpMem; // [rsp+60h] [rbp-68h] BYREF
  char v47[8]; // [rsp+68h] [rbp-60h] BYREF
  char v48[8]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v49; // [rsp+78h] [rbp-50h] BYREF
  float v50; // [rsp+80h] [rbp-48h]
  float v51; // [rsp+84h] [rbp-44h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v3 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  v44 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( CVisual::HasProtectedContent(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      *a3 = 1;
      goto LABEL_19;
    }
    *((_BYTE *)a2 + 8092) = 1;
  }
  if ( *((_QWORD *)this + 32) )
  {
    v9 = 0;
    v10 = (*((_BYTE *)this + 272) & 1) == 0;
    v43[0] = 0;
    if ( v10 )
    {
      v11 = (char *)this + 140;
    }
    else
    {
      if ( dword_1803E0760 )
      {
        v31 = *(const char **)CVisualTreePath::GetDebugString(*((_QWORD *)a2 + 1010), &lpMem);
        BackdropVisualImage = CVisual::GetBackdropVisualImage(this, *((const struct CVisualTreePath **)a2 + 1010));
        v33 = DwmDbg::DbgString::DbgString(
                (DwmDbg::DbgString *)v47,
                "pBVI=0x%p, bviPath=[%s]",
                BackdropVisualImage,
                v31);
        v34 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v48, "Visual-HasBackdropInput-ValidateBVI");
        DwmDbg::Backdrops::LogBrushEtwEvent(v34, this, v33);
        if ( lpMem )
          operator delete(lpMem);
      }
      v23 = *((float *)this + 36);
      v11 = (char *)this + 140;
      v24 = *((float *)this + 35);
      v43[0] = 1;
      v49 = 0LL;
      v50 = v24 + 0.0;
      v51 = v23 + 0.0;
      v25 = CDrawingContext::ValidateBVIEffectInputForRender(a2, &v49, v43);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x656,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          (const char *)(unsigned int)v25,
          v42);
LABEL_7:
        v12 = *((_QWORD *)this + 32);
        v13 = 0LL;
        v45 = 0LL;
        if ( !*((_BYTE *)a2 + 8171) )
          goto LABEL_15;
        v14 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 1007);
        v15 = -2003292412;
        v16 = (const struct IDeviceTarget *)*((_QWORD *)a2 + 4);
        if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v14->Flink[11].Blink)(v14) )
        {
          p_Blink = (struct _LIST_ENTRY **)((char *)this + 336);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(this);
          if ( !TreeDataListHead )
            goto LABEL_13;
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink == TreeDataListHead )
            goto LABEL_13;
          while ( 1 )
          {
            p_Blink = &Flink[-23].Blink;
            if ( Flink[2].Flink == v14 )
              break;
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_13;
          }
        }
        if ( p_Blink )
        {
          Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)(p_Blink + 2), 0, 0, v16, &v45);
          v15 = Cache;
          if ( Cache < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)p_Blink, 0LL, 0, Cache, 0x71Du, 0LL);
            v13 = v45;
            goto LABEL_42;
          }
          v13 = v45;
        }
LABEL_13:
        if ( v15 >= 0 )
        {
          v3 = v44;
LABEL_15:
          v19 = v12 + *(int *)(*(_QWORD *)(v12 + 64) + 8LL) + 64LL;
          v20 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, struct CDrawListCache *))(*(_QWORD *)v19 + 16LL))(
                  v19,
                  a2,
                  v11,
                  v13);
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v21, &dword_180338CB8, 3u, v20, 0x1034u, 0LL);
          goto LABEL_17;
        }
LABEL_42:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)p_Blink, &dword_180338CB8, 3u, v15, 0x102Fu, 0LL);
        v3 = v44;
LABEL_17:
        if ( v13 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
          {
            CMILRefCountImpl::AddReference((struct CDrawListCache *)((char *)v13 + 8));
            (*(void (__fastcall **)(struct CDrawListCache *))(*(_QWORD *)v45 + 24LL))(v45);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 + 2, 0xFFFFFFFF) == 1 )
            {
              v28 = v45;
              --*((_DWORD *)v13 + 2);
              (*(void (__fastcall **)(struct CDrawListCache *, __int64))(*(_QWORD *)v28 + 16LL))(v28, 1LL);
            }
          }
        }
        goto LABEL_19;
      }
      v9 = v43[0];
    }
    if ( (*((_BYTE *)this + 272) & 4) != 0 )
    {
      WindowBackgroundTreatmentVisual = CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(this);
      if ( !WindowBackgroundTreatmentVisual
        || (WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(WindowBackgroundTreatmentVisual)) == 0LL )
      {
LABEL_34:
        CVisual::InvalidateDrawListCaches(this, *((const struct CVisualTree **)a2 + 1007), v7, v8);
        goto LABEL_7;
      }
      v9 = *((_BYTE *)WindowBackgroundTreatmentInternal + 302);
      v43[0] = v9;
    }
    if ( !v9 )
      goto LABEL_7;
    goto LABEL_34;
  }
LABEL_19:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 256LL))(this) )
  {
    return 0LL;
  }
  v35 = word_180338FC0;
  v36 = word_180338FC0;
  v37 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 204LL) )
  {
    v35 = "Window";
    goto LABEL_70;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 178LL) )
    v35 = "Sprite";
  else
    v37 = 0;
  v38 = *((_QWORD *)this + 32);
  if ( !v38 )
    goto LABEL_70;
  if ( v3 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v36 = "CVI";
    goto LABEL_70;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 56LL))(v38, 129LL) )
  {
    v36 = "PG";
    goto LABEL_69;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
         *((_QWORD *)this + 32),
         145LL) )
  {
    v36 = "RD";
    goto LABEL_69;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
         *((_QWORD *)this + 32),
         42LL) )
  {
    v36 = "CS";
    goto LABEL_69;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
         *((_QWORD *)this + 32),
         197LL) )
  {
    v36 = "VisBmp";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              205LL) )
  {
    v36 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              174LL) )
  {
    v36 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              88LL) )
  {
    v36 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              66LL) )
  {
    v36 = "GenInk";
  }
  else if ( !v37 )
  {
LABEL_69:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) == 0 )
      return 0LL;
  }
LABEL_70:
  CDrawingContext::EtwLogCurrentState(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McTemplateU0pffffss_EventWriteTransfer(
      v40,
      v39,
      (_DWORD)this,
      v41,
      *((_DWORD *)this + 44),
      *((_DWORD *)this + 45),
      *((_DWORD *)this + 46),
      (__int64)v35,
      (__int64)v36);
  return 0LL;
}
