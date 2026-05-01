/*
 * XREFs of ImageList_Add @ 0x180096374
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800F59EC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1801AF048 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_Add(HIMAGELIST himl, HBITMAP hbmImage, HBITMAP hbmMask)
{
  __int64 (__fastcall *v3)(HIMAGELIST, HBITMAP, _QWORD); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_18064ED88;
  if ( qword_18064ED88 == -1 )
  {
    GetProcFromComCtl32(&qword_18064ED88, "ImageList_Add", hbmMask);
    v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_18064ED88;
  }
  if ( v3 )
    return v3(himl, hbmImage, 0LL);
  else
    return -1;
}
