/*
 * XREFs of ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x1C007BAB0
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C007A7A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetHDRMetaDataType(
        CCompositionSurface *this,
        __int64 a2,
        enum DXGI_HDR_METADATA_TYPE *a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v6);
  if ( Buffer >= 0 )
    *(_DWORD *)a3 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 136LL))(v6);
  return (unsigned int)Buffer;
}
