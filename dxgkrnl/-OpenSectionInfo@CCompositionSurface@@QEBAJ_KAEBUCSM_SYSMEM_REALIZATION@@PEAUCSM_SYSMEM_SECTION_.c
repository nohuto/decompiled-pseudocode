/*
 * XREFs of ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C007C0C8
 * Callers:
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C007A5A0 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C007CA44 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 */

__int64 __fastcall CCompositionSurface::OpenSectionInfo(
        CCompositionSurface *this,
        __int64 a2,
        const struct CSM_SYSMEM_REALIZATION *a3,
        struct CSM_SYSMEM_SECTION_INFO *a4)
{
  __int64 result; // rax
  __int64 *v6; // r11
  __int64 v7; // rax
  struct CCompositionBuffer *v8; // [rsp+20h] [rbp-48h] BYREF
  struct CBufferRealization *v9; // [rsp+28h] [rbp-40h] BYREF
  _DWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v8);
  if ( (int)result >= 0 )
  {
    v7 = *v6;
    v10[1] = 0;
    v13 = 0LL;
    v12 = 0LL;
    v11 = v7;
    v10[0] = 1;
    result = CCompositionBuffer::FindRealization(v8, (const struct CSM_REALIZATION_INFO *)v10, &v9);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)a4 = 0LL;
      *((_QWORD *)a4 + 2) = 0LL;
      return 3221225474LL;
    }
  }
  return result;
}
