/*
 * XREFs of ?GetCurrentRenderingRealization@CAtlasBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800E71C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasBitmapResource::GetCurrentRenderingRealization(
        CAtlasBitmapResource *this,
        struct IBitmapRealization **a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx

  v2 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  *a2 = (struct IBitmapRealization *)v2;
  v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
