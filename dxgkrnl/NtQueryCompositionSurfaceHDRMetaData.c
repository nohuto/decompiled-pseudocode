__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        struct CCompositionBuffer *a1,
        unsigned __int64 *a2,
        CCompositionSurface *a3,
        unsigned __int64 a4,
        _OWORD *a5)
{
  int HDRMetaDataType; // ebx
  unsigned __int64 v9; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  CCompositionSurface *v15; // r14
  int v16; // eax
  __m128i v17; // xmm1
  __int64 v19; // [rsp+20h] [rbp-B8h] BYREF
  struct CCompositionBuffer *v20; // [rsp+28h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+30h] [rbp-A8h] BYREF
  CCompositionSurface *v22; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-98h]
  _OWORD v24[5]; // [rsp+50h] [rbp-88h] BYREF

  v20 = a1;
  v22 = a3;
  Object = a5;
  HDRMetaDataType = 0;
  v19 = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  memset(v24, 0, 0x48uLL);
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v9 = *a2;
    v23 = *a2;
  }
  else
  {
    HDRMetaDataType = -1073741811;
    LODWORD(v19) = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( HDRMetaDataType >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(*((_QWORD *)Global + 38069)
                                                                                     + 560LL))(
            *((_QWORD *)Global + 38069),
            v11,
            v12,
            v13,
            v19) )
      HDRMetaDataType = -1073741790;
    if ( HDRMetaDataType >= 0 )
    {
      Object = 0LL;
      HDRMetaDataType = CompositionSurfaceObject::ResolveHandle(
                          a1,
                          1u,
                          v14,
                          (struct CompositionSurfaceObject **)&Object);
      if ( HDRMetaDataType >= 0 )
      {
        v22 = 0LL;
        HDRMetaDataType = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v22);
        if ( HDRMetaDataType < 0 )
        {
LABEL_24:
          ObfDereferenceObject(Object);
          goto LABEL_25;
        }
        v15 = v22;
        HDRMetaDataType = CCompositionSurface::GetHDRMetaDataType(
                            v22,
                            v9,
                            (enum DXGI_HDR_METADATA_TYPE *)((char *)&v19 + 4));
        if ( HDRMetaDataType >= 0 && HIDWORD(v19) )
        {
          if ( HIDWORD(v19) == 1 )
          {
            v20 = 0LL;
            HDRMetaDataType = CCompositionSurface::FindBuffer(v15, v9, &v20);
            if ( HDRMetaDataType < 0 )
              goto LABEL_23;
            v16 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v20 + 152LL))(v20, v24);
          }
          else
          {
            if ( HIDWORD(v19) != 2 )
            {
              HDRMetaDataType = -1073741811;
              goto LABEL_23;
            }
            v20 = 0LL;
            HDRMetaDataType = CCompositionSurface::FindBuffer(v15, v9, &v20);
            if ( HDRMetaDataType < 0 )
              goto LABEL_23;
            v16 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v20 + 160LL))(v20, v24);
          }
          HDRMetaDataType = v16;
        }
LABEL_23:
        CCompositionSurface::UnlockAndRelease(v15);
        goto LABEL_24;
      }
    }
  }
LABEL_25:
  if ( a3 )
  {
    if ( (CCompositionSurface *)((char *)a3 + 4) < a3 || (unsigned __int64)a3 + 4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a3 = HIDWORD(v19);
  }
  else
  {
    HDRMetaDataType = -1073741811;
  }
  if ( HDRMetaDataType >= 0 && a5 && HIDWORD(v19) )
  {
    if ( HIDWORD(v19) != 1 )
    {
      if ( HIDWORD(v19) != 2 )
      {
        HDRMetaDataType = -1073741811;
        goto LABEL_48;
      }
      if ( a4 >= 0x48 )
      {
        if ( (_OWORD *)((char *)a5 + 72) < a5 || (unsigned __int64)a5 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a5 = v24[0];
        a5[1] = v24[1];
        a5[2] = v24[2];
        a5[3] = v24[3];
        *((_QWORD *)a5 + 8) = *(_QWORD *)&v24[4];
        goto LABEL_48;
      }
LABEL_47:
      HDRMetaDataType = -1073741789;
      goto LABEL_48;
    }
    if ( a4 < 0x1C )
      goto LABEL_47;
    if ( (_OWORD *)((char *)a5 + 28) < a5 || (unsigned __int64)a5 + 28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v24[0];
    v17 = (__m128i)v24[1];
    *((_QWORD *)a5 + 2) = *(_QWORD *)&v24[1];
    *((_DWORD *)a5 + 6) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
  }
LABEL_48:
  KeLeaveCriticalRegion();
  return (unsigned int)HDRMetaDataType;
}
