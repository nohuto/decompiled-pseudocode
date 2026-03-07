__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  CDrawingContext *v5; // rbx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // r15d
  __int64 v14; // rsi
  char *v15; // r13
  int v16; // r14d
  BOOLEAN v17; // al
  __int64 v18; // r15
  unsigned int v19; // ecx
  CBatchOptimizer *v21; // rcx
  __int64 v22; // rcx
  struct ID2D1PrivateCompositorRenderer *v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // ecx
  CD2DTarget *v32; // r13
  __int64 v33; // rdi
  CD2DTarget *v34; // r12
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-59h]
  CDrawingContext *v42; // [rsp+30h] [rbp-49h] BYREF
  __int64 v43; // [rsp+38h] [rbp-41h] BYREF
  __int64 v44; // [rsp+40h] [rbp-39h]
  struct ID2D1Brush *v45; // [rsp+48h] [rbp-31h]
  __int128 v46; // [rsp+50h] [rbp-29h] BYREF
  __int128 v47; // [rsp+60h] [rbp-19h] BYREF
  __int64 v48; // [rsp+70h] [rbp-9h]
  __int128 v49; // [rsp+78h] [rbp-1h] BYREF
  __int64 v50; // [rsp+88h] [rbp+Fh]

  v3 = *(_QWORD *)a2;
  v4 = 0;
  v5 = 0LL;
  v45 = a3;
  v42 = 0LL;
  v43 = 0LL;
  v8 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(v3 + 24))(a2, 0LL, &v43);
  v10 = v8;
  if ( v8 < 0 )
  {
    v41 = 2586;
  }
  else
  {
    v11 = *((_QWORD *)this + 113);
    if ( v11 != *((_QWORD *)this + 112) && *(_QWORD *)(v11 - 160) )
    {
      v26 = *(_QWORD *)a2;
      v46 = 0LL;
      v27 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, _QWORD))(v26 + 48))(a2, &v46, 0LL);
      v10 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xA21u, 0LL);
        goto LABEL_20;
      }
      v48 = 0LL;
      v47 = v46;
      v29 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v42, this, &v47, 0LL);
      v10 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xA23u, 0LL);
        v5 = v42;
        goto LABEL_18;
      }
      v5 = v42;
    }
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
    v10 = v8;
    if ( v8 >= 0 )
    {
      v12 = *((_DWORD *)this + 90);
      v13 = 0;
      v14 = *((_QWORD *)this + 5);
      if ( v12 )
      {
        v31 = v12 - 1;
        if ( v31 )
        {
          if ( v31 == 3 )
            v13 = 2;
        }
        else
        {
          v13 = 1;
        }
      }
      v15 = (char *)this + 24;
      LOBYTE(v4) = *((_DWORD *)this + 84) != 0;
      v44 = v43;
      v16 = 0;
      LODWORD(v42) = v4;
      *(_QWORD *)&v46 = v15;
      if ( *(_QWORD *)(v14 + 152) )
      {
        v21 = *(CBatchOptimizer **)(v14 + 160);
        if ( v21 )
          CBatchOptimizer::Flush(v21);
        v22 = *(_QWORD *)(v14 + 152);
        *(_DWORD *)(v22 + 52) = *(_DWORD *)(v14 + 48);
        *(_QWORD *)(v22 + 40) = 0LL;
        v23 = *(struct ID2D1PrivateCompositorRenderer **)(v14 + 152);
        *(_QWORD *)(v14 + 152) = 0LL;
        if ( v23 )
        {
          v24 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v14 + 16), v23);
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x21Eu, 0LL);
          CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v23 + 8);
        }
      }
      if ( !*(_BYTE *)(v14 + 453) )
      {
        v32 = 0LL;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DRAWEVENT_Start,
            16LL,
            0LL);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 216) + 384LL))(*(_QWORD *)(v14 + 216));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0qq_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DRAWEVENT_Stop,
            16LL,
            0LL);
        v33 = 0LL;
        if ( *(_DWORD *)(v14 + 368) )
        {
          do
          {
            v34 = *(CD2DTarget **)(*(_QWORD *)(v14 + 344) + 8 * v33);
            if ( v32 )
              *((_BYTE *)v32 + 73) = 0;
            CD2DTarget::ApplyState(v34, (struct CD2DContext *)(v14 + 16));
            v33 = (unsigned int)(v33 + 1);
            v32 = v34;
          }
          while ( (unsigned int)v33 < *(_DWORD *)(v14 + 368) );
          v4 = (unsigned int)v42;
        }
        v15 = (char *)v46;
        *(_BYTE *)(v14 + 453) = 1;
      }
      *(_BYTE *)(v14 + 454) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v35 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 24LL))(v15);
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Start,
          3LL,
          v35);
      }
      (*(void (__fastcall **)(char *, __int128 *))(*(_QWORD *)v15 + 8LL))(v15, &v47);
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v14 + 216) + 240LL))(*(_QWORD *)(v14 + 216), &v47);
      if ( v13 != *(_DWORD *)(v14 + 412) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 216) + 624LL))(*(_QWORD *)(v14 + 216), v13);
        *(_DWORD *)(v14 + 412) = v13;
      }
      if ( v4 != *(_DWORD *)(v14 + 408) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v14 + 216) + 256LL))(*(_QWORD *)(v14 + 216), v4);
        *(_DWORD *)(v14 + 408) = v4;
      }
      v49 = v47;
      v50 = v48;
      v17 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT);
      v18 = v44;
      if ( v17 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v44 + 32LL))(v44, &v49, &v46);
        v16 = v36;
        v10 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x44Eu, 0LL);
LABEL_52:
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v16, 0xA2Cu, 0LL);
          goto LABEL_18;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0ffff_EventWriteTransfer(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
            v38,
            v39,
            SBYTE8(v46),
            SBYTE12(v46));
      }
      (*(void (__fastcall **)(_QWORD, __int64, struct ID2D1Brush *, _QWORD))(**(_QWORD **)(v14 + 216) + 184LL))(
        *(_QWORD *)(v14 + 216),
        v18,
        v45,
        0LL);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        v40 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 24LL))(v15);
        McTemplateU0qq_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWEVENT_Stop,
          3LL,
          v40);
      }
      v10 = v16;
      if ( v16 >= 0 )
        goto LABEL_18;
      goto LABEL_52;
    }
    v41 = 2598;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v41, 0LL);
LABEL_18:
  if ( v5 )
  {
    CDrawingContext::PopGpuClipRectInternal(v5, 0);
    CDrawingContext::PopClippingScope(v5, 0);
  }
LABEL_20:
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  return v10;
}
