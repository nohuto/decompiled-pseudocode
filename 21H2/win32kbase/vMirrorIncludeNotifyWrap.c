/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C009132C
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vMirrorIncludeNotifyWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029AFF8;
  if ( qword_1C029AFF8 )
    return (__int64 (*)(void))qword_1C029AFF8();
  return result;
}
