/*
 * XREFs of ?CacheTarget@CD2DTarget@@QEBA_NXZ @ 0x18029CFD0
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180287BF0 (-PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CD2DTarget::CacheTarget(CD2DTarget *this)
{
  char v1; // bl

  v1 = 0;
  if ( *(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3)) != 0;
  return v1;
}
