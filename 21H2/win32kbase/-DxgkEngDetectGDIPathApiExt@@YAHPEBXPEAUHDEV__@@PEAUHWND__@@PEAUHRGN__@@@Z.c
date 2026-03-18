/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0175F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( qword_1C029AE70 && (int)qword_1C029AE70() >= 0 && qword_1C029AE78 )
    return (unsigned int)qword_1C029AE78(a1, a2, a3, a4);
  return v4;
}
