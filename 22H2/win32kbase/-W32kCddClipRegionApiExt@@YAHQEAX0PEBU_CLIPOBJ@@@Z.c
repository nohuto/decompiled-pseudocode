/*
 * XREFs of ?W32kCddClipRegionApiExt@@YAHQEAX0PEBU_CLIPOBJ@@@Z @ 0x1C0169190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddClipRegionApiExt(void *const a1, void *const a2, const struct _CLIPOBJ *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( qword_1C02945F0 && (int)qword_1C02945F0() >= 0 && qword_1C02945F8 )
    return (unsigned int)qword_1C02945F8(a1, a2, a3);
  return v3;
}
