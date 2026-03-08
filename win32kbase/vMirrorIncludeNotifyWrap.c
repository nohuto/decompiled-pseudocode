/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C00A6D4C
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vMirrorIncludeNotifyWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02D57F8;
  if ( qword_1C02D57F8 )
    return (__int64 (*)(void))qword_1C02D57F8();
  return result;
}
