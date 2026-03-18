/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x1800D0E94
 * Callers:
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x1800D099C (--1CD3DPixelShader@@MEAA@XZ.c)
 *     ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x1800D0C30 (--_ECD3DConstantBuffer@@MEAAPEAXI@Z.c)
 *     ??_ECExternalD3DRenderer@@UEAAPEAXI@Z @ 0x180287F40 (--_ECExternalD3DRenderer@@UEAAPEAXI@Z.c)
 *     ??_ECD3DResource@@MEAAPEAXI@Z @ 0x180288170 (--_ECD3DResource@@MEAAPEAXI@Z.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x18029C070 (--1CD3DSurface@@MEAA@XZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x1802BF688 (--1CD3DTexture@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD3DResource::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CD3DResource::`vftable'{for `IUnknown'};
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 4) = *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) - 96;
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 11) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
}
