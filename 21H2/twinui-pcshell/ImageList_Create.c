/*
 * XREFs of ImageList_Create @ 0x1801AEEC8
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800F59EC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     CreateBitmapFromIcon @ 0x1803F5A5C (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1801AF048 (_GetProcFromComCtl32.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_18064EF68;
  if ( qword_18064EF68 == -1 )
  {
    GetProcFromComCtl32(&qword_18064EF68, "ImageList_Create", flags);
    result = (HIMAGELIST)qword_18064EF68;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         flags);
  return result;
}
