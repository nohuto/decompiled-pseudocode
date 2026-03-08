/*
 * XREFs of ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1801DC928
 * Callers:
 *     ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800DE1B0 (-PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801B40A4 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1801DCE20 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AC048 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CLegacySurfaceManager::ReleaseCaptureBitsResponse(CLegacySurfaceManager *this)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 220) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
      *((_BYTE *)this + 220) = 0;
    }
    CResponseItem::QueueResponse(*((CResponseItem **)this + 26));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 8LL))(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_DWORD *)this + 54) = 0;
    return 1;
  }
  return v2;
}
