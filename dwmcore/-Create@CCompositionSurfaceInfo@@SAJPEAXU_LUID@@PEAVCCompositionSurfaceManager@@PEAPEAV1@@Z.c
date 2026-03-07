__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  CGlobalCompositionSurfaceInfo *v8; // rax
  unsigned int v9; // ecx
  CGlobalCompositionSurfaceInfo *v10; // rax
  CGlobalCompositionSurfaceInfo *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _QWORD Buffer[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 NewElement; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CGlobalCompositionSurfaceInfo *)DefaultHeap::AllocClear(0x1A8uLL);
  if ( v8 && (v10 = CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(v8, a2, a3), (v11 = v10) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CGlobalCompositionSurfaceInfo *)((char *)v10 + 8));
    Buffer[0] = *((_QWORD *)v11 + 5);
    v12 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v11 + 3) + 8LL);
    Buffer[1] = v11;
    if ( RtlInsertElementGenericTable(v12, Buffer, 0x10u, &NewElement) )
    {
      v14 = *(_QWORD *)v11;
      *((_QWORD *)v11 + 4) = a1;
      (*(void (__fastcall **)(CGlobalCompositionSurfaceInfo *))(v14 + 48))(v11);
      v15 = 0;
      *a4 = v11;
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x5Fu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x1Bu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x1Eu, 0LL);
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v15;
}
