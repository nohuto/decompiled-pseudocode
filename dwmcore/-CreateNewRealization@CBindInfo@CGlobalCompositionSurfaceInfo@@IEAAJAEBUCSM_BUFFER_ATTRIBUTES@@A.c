__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
        struct _LUID **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        char a4,
        struct ISwapChainRealization **a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // ebx
  int SubResource; // eax
  char *v14; // rcx
  struct CDecodeBitmap *v16; // r12
  struct _LUID *v17; // rbx
  int v18; // r9d
  struct _LUID v19; // rbx
  struct IYUVSwapChainRealization *PrimaryYUVRealization; // rax
  char *v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-61h]
  HGDIOBJ ho[2]; // [rsp+30h] [rbp-51h] BYREF
  int *v24; // [rsp+40h] [rbp-41h] BYREF
  int v25; // [rsp+48h] [rbp-39h] BYREF

  ho[0] = 0LL;
  *a5 = 0LL;
  v9 = NtOpenCompositionSurfaceDirtyRegion(*(_QWORD *)&(*this)[4], this + 3, a3, ho);
  v10 = (__int64)ho[0];
  if ( v9 < 0 )
    v10 = 1LL;
  ho[0] = (HGDIOBJ)v10;
  v11 = *(_DWORD *)a3 - 1;
  if ( *(_DWORD *)a3 == 1 )
  {
    v12 = -2003292287;
    v22 = 1449;
    goto LABEL_28;
  }
  if ( *(_DWORD *)a3 == 2 )
  {
    v12 = CDxHandleAdvancedDirectFlipBitmapRealization::Create(
            *((unsigned int *)this + 8),
            *(_QWORD *)&(*this)[5],
            a2,
            a3,
            this[1],
            a5);
    if ( v12 >= 0 )
      goto LABEL_7;
    SubResource = CDxHandleBitmapRealization::Create(
                    *((_DWORD *)this + 8),
                    *(_QWORD *)&(*this)[5],
                    (__int64)a2,
                    (__int64)a3,
                    a4,
                    a5);
    v12 = SubResource;
    if ( SubResource >= 0 )
      goto LABEL_7;
    v22 = 1469;
    goto LABEL_21;
  }
  v11 = *(_DWORD *)a3 - 3;
  if ( *(_DWORD *)a3 == 3 )
  {
    SubResource = CDxHandleStereoBitmapRealization::Create((*this)[5], a2, a3, a5);
    v12 = SubResource;
    if ( SubResource < 0 )
    {
      v22 = 1479;
      goto LABEL_21;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 4 )
    {
      v12 = -2147024809;
      v22 = 1511;
LABEL_28:
      v18 = v12;
      goto LABEL_29;
    }
    v16 = (struct CDecodeBitmap *)this[1];
    v17 = *this;
    if ( *((_DWORD *)a3 + 8) )
    {
      v19 = v17[5];
      PrimaryYUVRealization = CGlobalCompositionSurfaceInfo::CBindInfo::GetPrimaryYUVRealization((CGlobalCompositionSurfaceInfo::CBindInfo *)this);
      SubResource = CDxHandleYUVBitmapRealization::CreateSubResource(PrimaryYUVRealization, v19, a2, a3, v16, a5);
      v12 = SubResource;
      if ( SubResource < 0 )
      {
        v22 = 1505;
        goto LABEL_21;
      }
    }
    else
    {
      SubResource = CDxHandleYUVBitmapRealization::Create(
                      *((unsigned int *)this + 8),
                      *(_QWORD *)&v17[5],
                      a2,
                      a3,
                      v16,
                      a5);
      v12 = SubResource;
      if ( SubResource < 0 )
      {
        v22 = 1493;
LABEL_21:
        v18 = SubResource;
LABEL_29:
        MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180354758, 3u, v18, v22, 0LL);
        goto LABEL_11;
      }
    }
  }
LABEL_7:
  if ( !ho[0] )
    return (unsigned int)v12;
  if ( *a5 )
  {
    if ( ho[0] == (HGDIOBJ)1 )
    {
      v14 = (char *)*a5 + *(int *)(*((_QWORD *)*a5 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 40LL))(v14);
    }
    else
    {
      v25 = 0;
      v24 = &v25;
      CRegion::SetHRGN((CRegion *)&v24, (HRGN)ho[0]);
      v21 = (char *)*a5 + *(int *)(*((_QWORD *)*a5 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(char *, int **))(*(_QWORD *)v21 + 32LL))(v21, &v24);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v24);
    }
  }
LABEL_11:
  if ( ho[0] >= (HGDIOBJ)2 )
    DeleteObject(ho[0]);
  return (unsigned int)v12;
}
