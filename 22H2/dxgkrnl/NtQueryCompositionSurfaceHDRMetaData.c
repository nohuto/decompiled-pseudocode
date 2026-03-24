/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C000EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x1C000F0A8 (-GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010868 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0010A64 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011B50 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00170E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        struct CCompositionBuffer *a1,
        unsigned __int64 *a2,
        struct CCompositionBuffer *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int HDRMetaDataType; // ebx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r8
  CCompositionSurface *v17; // r15
  __m128i v18; // xmm1
  int v20; // eax
  int v21; // [rsp+24h] [rbp-B4h] BYREF
  CCompositionSurface *v22; // [rsp+28h] [rbp-B0h] BYREF
  struct CCompositionBuffer *v23; // [rsp+30h] [rbp-A8h] BYREF
  struct CCompositionBuffer *v24; // [rsp+38h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-90h]
  _OWORD v27[5]; // [rsp+50h] [rbp-88h] BYREF

  v24 = a1;
  v23 = a3;
  v22 = (CCompositionSurface *)a5;
  HDRMetaDataType = 0;
  v9 = 0LL;
  v26 = 0LL;
  v21 = 0;
  memset(v27, 0, 0x48uLL);
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v9 = *a2;
    v26 = *a2;
  }
  else
  {
    HDRMetaDataType = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( HDRMetaDataType >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v11, v10);
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64))(*((_QWORD *)Global + 38048) + 296LL))(
            *((_QWORD *)Global + 38048),
            v13,
            v14,
            v15) )
      HDRMetaDataType = -1073741790;
    if ( HDRMetaDataType >= 0 )
    {
      Object = 0LL;
      HDRMetaDataType = CompositionSurfaceObject::ResolveHandle(
                          a1,
                          1u,
                          v16,
                          (struct CompositionSurfaceObject **)&Object);
      if ( HDRMetaDataType >= 0 )
      {
        v22 = 0LL;
        HDRMetaDataType = CompositionSurfaceObject::LockForRead(Object, &v22);
        if ( HDRMetaDataType < 0 )
        {
LABEL_15:
          ObfDereferenceObject(Object);
          goto LABEL_16;
        }
        v17 = v22;
        HDRMetaDataType = CCompositionSurface::GetHDRMetaDataType(v22, v9, (enum DXGI_HDR_METADATA_TYPE *)&v21);
        if ( HDRMetaDataType < 0 || !v21 )
        {
LABEL_14:
          CCompositionSurface::UnlockAndRelease(v17);
          goto LABEL_15;
        }
        if ( v21 == 1 )
        {
          v24 = 0LL;
          HDRMetaDataType = CCompositionSurface::FindBuffer(v17, v9, &v24);
          if ( HDRMetaDataType < 0 )
            goto LABEL_14;
          v20 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v24 + 144LL))(v24, v27);
        }
        else
        {
          if ( v21 != 2 )
          {
            HDRMetaDataType = -1073741811;
            goto LABEL_14;
          }
          v23 = 0LL;
          HDRMetaDataType = CCompositionSurface::FindBuffer(v17, v9, &v23);
          if ( HDRMetaDataType < 0 )
            goto LABEL_14;
          v20 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v23 + 152LL))(v23, v27);
        }
        HDRMetaDataType = v20;
        goto LABEL_14;
      }
    }
  }
LABEL_16:
  if ( a3 )
  {
    if ( (struct CCompositionBuffer *)((char *)a3 + 4) < a3 || (unsigned __int64)a3 + 4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a3 = v21;
  }
  else
  {
    HDRMetaDataType = -1073741811;
  }
  if ( HDRMetaDataType >= 0 && a5 && v21 )
  {
    if ( v21 != 1 )
    {
      if ( v21 != 2 )
      {
        HDRMetaDataType = -1073741811;
        goto LABEL_39;
      }
      if ( a4 >= 0x48 )
      {
        if ( a5 + 72 < a5 || a5 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a5 = v27[0];
        *(_OWORD *)(a5 + 16) = v27[1];
        *(_OWORD *)(a5 + 32) = v27[2];
        *(_OWORD *)(a5 + 48) = v27[3];
        *(_QWORD *)(a5 + 64) = *(_QWORD *)&v27[4];
        goto LABEL_39;
      }
LABEL_38:
      HDRMetaDataType = -1073741789;
      goto LABEL_39;
    }
    if ( a4 < 0x1C )
      goto LABEL_38;
    if ( a5 + 28 < a5 || a5 + 28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a5 = v27[0];
    v18 = (__m128i)v27[1];
    *(_QWORD *)(a5 + 16) = *(_QWORD *)&v27[1];
    *(_DWORD *)(a5 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
  }
LABEL_39:
  KeLeaveCriticalRegion();
  return (unsigned int)HDRMetaDataType;
}
