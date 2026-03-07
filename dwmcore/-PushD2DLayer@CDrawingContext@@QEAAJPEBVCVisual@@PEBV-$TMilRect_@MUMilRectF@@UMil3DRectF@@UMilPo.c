__int64 __fastcall CDrawingContext::PushD2DLayer(
        struct CDrawingContext *a1,
        const struct CVisual *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        float a6,
        char a7,
        unsigned int a8)
{
  char *v8; // rbx
  __int64 v9; // rdx
  int v11; // esi
  __int64 v12; // rax
  int v13; // r13d
  char v14; // r15
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  struct CD2DLayer *v18; // rcx
  struct CObjectCache *ObjectCache; // rax
  int v20; // edx
  struct CLayer *v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  BOOL v30; // [rsp+34h] [rbp-4Ch]
  __int128 v32; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v33[16]; // [rsp+50h] [rbp-30h] BYREF

  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 4);
  v30 = *((_DWORD *)a1 + 84) != 0;
  v11 = 0;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v32 = 0LL;
  v14 = 0;
  v17 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v9 + 8 + *(int *)(v12 + 12));
  if ( *(_DWORD *)((**v17)(v17, v33) + 4) == 3 )
  {
    v11 = 3;
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm) < 0.0000011920929 )
  {
    v11 = 1;
    v13 = 1;
  }
  if ( a3 )
    v32 = *a3;
  else
    CDrawingContext::GetClipBoundsWorld(a1, &v32);
  if ( *((float *)&v32 + 2) <= *(float *)&v32 || *((float *)&v32 + 3) <= *((float *)&v32 + 1) )
  {
    *((_QWORD *)&v32 + 1) = a2;
    LODWORD(v32) = 7;
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)a1 + 92, &v32);
    return (unsigned int)v8;
  }
  ObjectCache = CThreadContext::GetObjectCache(v18);
  v20 = *((_DWORD *)ObjectCache + 1);
  if ( v20 )
  {
    v8 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v8;
    *((_DWORD *)ObjectCache + 1) = v20 - 1;
  }
  if ( !v8 )
  {
    v8 = (char *)DefaultHeap::Alloc(0x50uLL);
    if ( !v8 )
    {
      LODWORD(v8) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, -2147024882, 0x1Du, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024882, 0xFB6u, 0LL);
      return (unsigned int)v8;
    }
  }
  *(_QWORD *)v8 = &CD2DLayer::`vftable';
  *(_OWORD *)(v8 + 8) = v32;
  *((_QWORD *)v8 + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *((_DWORD *)v8 + 14) = v30;
  *((float *)v8 + 17) = a6;
  v8[72] = a5 != 0;
  *((_DWORD *)v8 + 15) = v11;
  *((_DWORD *)v8 + 16) = v13;
  if ( a5 )
  {
    *((_OWORD *)v8 + 2) = *(_OWORD *)a5;
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a5 + 16);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_D2DLAYERCREATEREASON,
      a8);
  v21 = (struct CLayer *)v8;
  if ( a7 && a4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm) < 0.0000011920929 )
  {
    v22 = *((_QWORD *)a1 + 346);
    if ( *(_QWORD *)(v22 - 16) )
      --*(_QWORD *)(*((_QWORD *)a1 + 113) - 160LL);
    *(_QWORD *)(v22 - 16) = v8;
    v14 = 1;
    ++*(_QWORD *)(*((_QWORD *)a1 + 113) - 160LL);
  }
  else
  {
    v26 = CScopedClipStack::ApplyDeferredD2DLayersInScope((struct CDrawingContext *)((char *)a1 + 896), a1);
    LODWORD(v8) = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xFC9u, 0LL);
      goto LABEL_32;
    }
  }
  v23 = CDrawingContext::PushLayer(a1, a2, v21, v14 != 1, 1);
  LODWORD(v8) = v23;
  if ( v23 >= 0 )
    return (unsigned int)v8;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xFD0u, 0LL);
LABEL_32:
  if ( v14 )
    CScopedClipStack::SetDeferredD2DLayerForTopCpuClip((struct CDrawingContext *)((char *)a1 + 896), 0LL);
  CD2DLayer::`scalar deleting destructor'(v21, 1);
  return (unsigned int)v8;
}
