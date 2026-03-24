/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0149F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v4; // ebx
  int v9; // eax

  v4 = 0;
  if ( qword_1C02550F0 )
    v9 = qword_1C02550F0();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C02550F8 )
    return (unsigned int)qword_1C02550F8(a1, a2, a3, a4);
  return v4;
}
