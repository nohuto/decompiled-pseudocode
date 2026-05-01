/*
 * XREFs of ImageList_ReplaceIcon @ 0x1801AEF90
 * Callers:
 *     CreateBitmapFromIcon @ 0x1803F5A5C (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1801AF048 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18064EF58;
  if ( qword_18064EF58 == -1 )
  {
    GetProcFromComCtl32(&qword_18064EF58, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_18064EF58;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
