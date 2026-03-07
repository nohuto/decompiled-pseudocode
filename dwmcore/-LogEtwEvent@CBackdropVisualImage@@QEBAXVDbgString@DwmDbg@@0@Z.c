void __fastcall CBackdropVisualImage::LogEtwEvent(__int64 a1, void **a2, void **a3)
{
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  void *v8; // rbx
  HANDLE v9; // rax
  __int64 v10; // rdi
  char v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // si
  CBackdropVisualImage *v15; // rcx
  bool IsValid; // al
  int v17; // r9d
  int v18; // r10d
  __int64 *v19; // rax
  bool v20; // zf
  __int64 *v21; // rax
  char v22; // bl
  __int64 *DebugString; // rax
  const void *v24; // r8
  void **v25; // rax
  const char *v26; // rbx
  const char **v27; // rax
  __int64 *v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  void *v31; // rbx
  __int64 *v32; // rax
  const void *v33; // rdi
  const char **v34; // rax
  __int64 v35; // rcx
  void *v36; // [rsp+90h] [rbp-80h] BYREF
  void *v37; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v38[10]; // [rsp+A0h] [rbp-70h] BYREF
  void *v39; // [rsp+C8h] [rbp-48h]
  __int64 v40; // [rsp+D0h] [rbp-40h]
  __int64 v41; // [rsp+D8h] [rbp-38h]
  __int64 v42; // [rsp+E0h] [rbp-30h]
  __int64 v43; // [rsp+E8h] [rbp-28h]
  void *v44; // [rsp+F0h] [rbp-20h]
  __int64 v45; // [rsp+F8h] [rbp-18h]
  __int64 v46; // [rsp+100h] [rbp-10h]
  __int64 v47; // [rsp+108h] [rbp-8h]
  __int64 v48; // [rsp+110h] [rbp+0h]
  unsigned __int64 CurrentFrameId; // [rsp+118h] [rbp+8h]
  void *lpMem; // [rsp+120h] [rbp+10h] BYREF
  void *v51; // [rsp+128h] [rbp+18h] BYREF
  void *v52; // [rsp+130h] [rbp+20h] BYREF
  void *v53; // [rsp+138h] [rbp+28h] BYREF
  void *v54; // [rsp+140h] [rbp+30h] BYREF
  void *v55; // [rsp+148h] [rbp+38h] BYREF
  void *v56; // [rsp+150h] [rbp+40h] BYREF
  void *v57; // [rsp+158h] [rbp+48h] BYREF
  void *v58; // [rsp+160h] [rbp+50h] BYREF
  void *v59; // [rsp+168h] [rbp+58h] BYREF
  void *v60; // [rsp+170h] [rbp+60h] BYREF
  void *v61; // [rsp+178h] [rbp+68h] BYREF
  _DWORD v62[8]; // [rsp+180h] [rbp+70h] BYREF
  __int128 v63; // [rsp+1A0h] [rbp+90h]
  int v64; // [rsp+1B0h] [rbp+A0h]
  int v65; // [rsp+1B4h] [rbp+A4h]
  int v66; // [rsp+1B8h] [rbp+A8h]
  int v67; // [rsp+1BCh] [rbp+ACh]
  int v68; // [rsp+1C0h] [rbp+B0h]
  __int128 v69; // [rsp+1C8h] [rbp+B8h] BYREF

  LODWORD(v36) = 0;
  if ( dword_1803E0760 )
  {
    v10 = a1 + 1792;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 1792) + 8LL) + 184LL))(*(_QWORD *)(*(_QWORD *)(a1 + 1792) + 8LL));
    CBackdropVisualImage::GetViewBoxToUVTransform(a1, (D2D1::Matrix3x2F *)&v69);
    Matrix3x3::operator*(a1 + 1916, v38, v12);
    v13 = *(_QWORD *)(a1 + 1784);
    v62[2] = 0;
    v62[6] = 0;
    v66 = 0;
    v69 = 0LL;
    v68 = 0;
    v62[1] = v38[1];
    v62[0] = v38[0];
    v62[4] = v38[3];
    v62[3] = v38[2];
    v62[7] = v38[5];
    v62[5] = v38[4];
    v64 = v38[6];
    v63 = _xmm;
    v67 = v38[8];
    v65 = v38[7];
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v62, (struct MilRectF *)(v13 + 172));
    v14 = 5;
    if ( (unsigned int)dword_1803E0760 > 5 )
    {
      v39 = *a3;
      v40 = *(_QWORD *)(a1 + 1984);
      CBackdropVisualImage::CanUseAsEffectInput((CBackdropVisualImage *)a1);
      IsValid = CBackdropVisualImage::IsValid(v15);
      v19 = (__int64 *)DwmDbg::DbgString::DbgString(
                         (DwmDbg::DbgString *)&v61,
                         "IsValid=%d, CanUseAsEffectInput=%d, CanUseOcclusion=%d",
                         IsValid,
                         v17,
                         v18);
      v20 = *(_BYTE *)(a1 + 1952) == 0;
      v41 = *v19;
      if ( v20 )
      {
        v21 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v59, "NoEffectInputTransform");
        v22 = 10;
        v14 = 6;
      }
      else
      {
        v21 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v60, (const struct MilRectF *)&v69);
        v22 = 9;
      }
      v42 = *v21;
      DebugString = (__int64 *)CVisualTreePath::GetDebugString(v10, &v58);
      v24 = *(const void **)(a1 + 144);
      v43 = *DebugString;
      if ( v11 )
      {
        v25 = (void **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v57, "0x%p (DesktopRoot)", v24);
      }
      else
      {
        DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v36, "0x%p", v24);
        v25 = &v36;
        v14 = v22;
      }
      v44 = *v25;
      v26 = *(const char **)DwmDbg::DbgString::DbgString(
                              (DwmDbg::DbgString *)&v56,
                              (const struct D2D_VECTOR_2F *)(a1 + 1864));
      v27 = (const char **)DwmDbg::DbgString::DbgString(
                             (DwmDbg::DbgString *)&v55,
                             (const struct D2D_VECTOR_2F *)(a1 + 1876));
      v28 = (__int64 *)DwmDbg::DbgString::DbgString(
                         (DwmDbg::DbgString *)&v54,
                         "RealizationScale=[%s], DPI=[%s]",
                         *v27,
                         v26);
      v29 = *(_QWORD *)(a1 + 128);
      v30 = *(_QWORD *)(a1 + 120);
      v45 = *v28;
      DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v37, "%.2f x %.2f", v30, v29);
      v31 = v37;
      v46 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v53, (const struct MilRectF *)(a1 + 1848));
      v32 = (__int64 *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v52, (const struct MilRectF *)(a1 + 96));
      v33 = *(const void **)(a1 + 1784);
      v47 = *v32;
      v34 = (const char **)CBackdropVisualImageKey::GetDebugString(a1 + 1888, &v51);
      v48 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, "[%s] -> 0x%p", *v34, v33);
      CurrentFrameId = GetCurrentFrameId();
      *(_QWORD *)&v69 = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v35,
        &unk_18037D3D3);
      if ( lpMem )
        operator delete(lpMem);
      if ( v51 )
        operator delete(v51);
      if ( v52 )
        operator delete(v52);
      if ( v53 )
        operator delete(v53);
      if ( v31 )
        operator delete(v31);
      if ( v54 )
        operator delete(v54);
      if ( v55 )
        operator delete(v55);
      if ( v56 )
        operator delete(v56);
      if ( (v14 & 8) != 0 )
      {
        v14 &= ~8u;
        if ( v36 )
          operator delete(v36);
      }
      if ( (v14 & 4) != 0 )
      {
        v14 &= ~4u;
        if ( v57 )
          operator delete(v57);
      }
      if ( v58 )
        operator delete(v58);
      if ( (v14 & 2) != 0 )
      {
        v14 &= ~2u;
        if ( v59 )
          operator delete(v59);
      }
      if ( (v14 & 1) != 0 && v60 )
        operator delete(v60);
      if ( v61 )
        operator delete(v61);
    }
    if ( *a2 )
      operator delete(*a2);
    if ( *a3 )
      operator delete(*a3);
  }
  else
  {
    v6 = *a2;
    if ( *a2 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v6);
    }
    v8 = *a3;
    if ( *a3 )
    {
      v9 = GetProcessHeap();
      HeapFree(v9, 0, v8);
    }
  }
}
