/*
 * XREFs of ImageList_GetIcon @ 0x1800963B8
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800F587C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1801AEE98 (_GetProcFromComCtl32.c)
 */

HICON __stdcall ImageList_GetIcon(HIMAGELIST himl, int i, UINT flags)
{
  HICON result; // rax

  result = (HICON)qword_18064ED80;
  if ( qword_18064ED80 == -1 )
  {
    GetProcFromComCtl32(&qword_18064ED80, "ImageList_GetIcon", flags);
    result = (HICON)qword_18064ED80;
  }
  if ( result )
    return (HICON)((__int64 (__fastcall *)(HIMAGELIST, _QWORD, _QWORD))result)(himl, 0LL, 0LL);
  return result;
}
