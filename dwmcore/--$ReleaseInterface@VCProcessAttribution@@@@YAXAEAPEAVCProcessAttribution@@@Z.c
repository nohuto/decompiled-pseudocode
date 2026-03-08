/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800AB2F8
 * Callers:
 *     ??1CChannelContext@@EEAA@XZ @ 0x1800A9D2C (--1CChannelContext@@EEAA@XZ.c)
 *     ??1CResourceTable@@UEAA@XZ @ 0x1800A9DE0 (--1CResourceTable@@UEAA@XZ.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x1800AA8DC (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800AAF34 (--1CWindowNode@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CProcessAttribution>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
