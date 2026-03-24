/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C008287C
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CA320 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 (*vMirrorIncludeNotifyWrap())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0255278;
  if ( qword_1C0255278 )
    return (__int64 (*)(void))qword_1C0255278();
  return result;
}
