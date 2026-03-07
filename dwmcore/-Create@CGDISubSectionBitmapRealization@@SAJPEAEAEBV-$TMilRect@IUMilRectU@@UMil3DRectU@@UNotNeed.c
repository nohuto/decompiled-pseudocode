__int64 __fastcall CGDISubSectionBitmapRealization::Create(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  int v11; // eax
  LPVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  CGDISubSectionBitmapRealization *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+50h] [rbp-B8h]
  int v22; // [rsp+54h] [rbp-B4h]
  int v23; // [rsp+58h] [rbp-B0h]
  int v24; // [rsp+5Ch] [rbp-ACh]
  _QWORD v25[5]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v26[20]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v27; // [rsp+D8h] [rbp-30h]

  *a7 = 0LL;
  memset_0(v26, 0, 0x90uLL);
  v26[12] = 0;
  v26[0] = a6;
  v20 = 0LL;
  v21 = *(_DWORD *)(a3 + 8) - *(_DWORD *)a3;
  v11 = *(_DWORD *)(a3 + 12) - *(_DWORD *)(a3 + 4);
  v26[18] = (_DWORD)FLOAT_1_0;
  memset(v25, 0, sizeof(v25));
  v22 = v11;
  v26[17] = 1;
  LODWORD(v25[0]) = 1;
  v24 = a5;
  v26[19] = 0;
  v27 = _xmm;
  v23 = a4;
  v12 = DefaultHeap::Alloc(0x218uLL);
  if ( v12
    && (v14 = CGDISubSectionBitmapRealization::CGDISubSectionBitmapRealization(
                (__int64)v12,
                (const struct CSM_BUFFER_ATTRIBUTES *)v26,
                (const struct CSM_REALIZATION_INFO *)v25,
                (const struct CSM_SYSMEM_SECTION_INFO *)&v20,
                a1,
                a2,
                (_OWORD *)a3),
        (v15 = (CGDISubSectionBitmapRealization *)v14) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 8));
    v16 = CGDISubSectionBitmapRealization::EnsureBitmapCacheSource(v15);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x38u, 0LL);
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v15);
    }
    else
    {
      *a7 = (char *)v15 + 392;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x36u, 0LL);
  }
  return v18;
}
