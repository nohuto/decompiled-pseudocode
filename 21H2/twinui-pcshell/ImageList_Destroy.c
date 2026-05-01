/*
 * XREFs of ImageList_Destroy @ 0x1801AEF3C
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F46F0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800F59EC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     CreateBitmapFromIcon @ 0x1803F5A5C (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1801AF048 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18064EF60;
  if ( qword_18064EF60 == -1 )
  {
    GetProcFromComCtl32(&qword_18064EF60, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18064EF60;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
