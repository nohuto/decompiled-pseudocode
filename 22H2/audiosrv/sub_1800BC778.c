/*
 * XREFs of sub_1800BC778 @ 0x1800BC778
 * Callers:
 *     sub_1800BB868 @ 0x1800BB868 (sub_1800BB868.c)
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_1 @ 0x1800C5790 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BC778(__int64 a1)
{
  __int64 v2; // rbx
  LPMALLOC ppMalloc; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v2 = ((__int64 (__fastcall *)(LPMALLOC, __int64))ppMalloc->lpVtbl->GetSize)(ppMalloc, a1);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
  }
  return v2;
}
