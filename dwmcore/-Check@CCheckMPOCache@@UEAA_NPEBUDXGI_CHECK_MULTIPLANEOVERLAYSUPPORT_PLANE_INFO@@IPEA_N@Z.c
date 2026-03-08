/*
 * XREFs of ?Check@CCheckMPOCache@@UEAA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180116E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z @ 0x180116F40 (-IsEqual@PlaneInfo@CCheckMPOCache@@QEBA_NAEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@@Z.c)
 */

char __fastcall CCheckMPOCache::Check(
        CCheckMPOCache *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 v8; // rbx

  if ( a3 == 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 2) - *((_QWORD *)this + 1)) >> 5) )
  {
    v8 = 0LL;
    if ( !a3 )
    {
LABEL_5:
      *a4 = *((_BYTE *)this + 1000);
      *((_QWORD *)this + 124) = GetCurrentFrameId();
      return 1;
    }
    while ( CCheckMPOCache::PlaneInfo::IsEqual(
              (CCheckMPOCache::PlaneInfo *)(*((_QWORD *)this + 1) + 160 * v8),
              (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)a2 + 144 * v8)) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= a3 )
        goto LABEL_5;
    }
  }
  return 0;
}
