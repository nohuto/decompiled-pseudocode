/*
 * XREFs of ?W32kCddClipRegionApiExt@@YAHQEAX0PEBU_CLIPOBJ@@@Z @ 0x1C014AA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall W32kCddClipRegionApiExt(void *const a1, void *const a2, const struct _CLIPOBJ *a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( qword_1C02551E0 )
    v7 = qword_1C02551E0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C02551E8 )
    return (unsigned int)qword_1C02551E8(a1, a2, a3);
  return v3;
}
